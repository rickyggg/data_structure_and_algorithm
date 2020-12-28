class Solution {
public:
    /**
     * lru design
     * @param operators int整型vector<vector<>> the ops
     * @param k int整型 the k
     * @return int整型vector
     */
    #define PII pair<int, int>
    int capacity = 0;
    list<PII> lrulist;
    unordered_map<int, list<PII>::iterator> cache;
    vector<int> LRU(vector<vector<int>>& operators, int k) {
        vector<int> result;
        capacity = k;
        result.reserve(operators.size());
        if (k != 0) {
            for (auto &opt : operators) {
                if (opt[0] == 1)
                    set(opt[1], opt[2]);
                else if (opt[0] == 2)
                    result.push_back(get(opt[1]));
            }
        }
        return result;
    }
    
    void set(int key, int val) {
        auto iter = cache.find(key);
        if (iter == cache.end()) {
            if (capacity == lrulist.size()) {
                cache.erase(lrulist.back().first);
                lrulist.pop_back();
            }
        } else {
            lrulist.erase(iter->second);
        }
        lrulist.push_front(make_pair(key, val));
        cache[key] = lrulist.begin();
    }
    
    int get(int key) {
        auto iter = cache.find(key);
        if (iter == cache.end())
            return -1;
        int val = iter->second->second;
        lrulist.erase(iter->second);
        lrulist.push_front(*iter->second);
        return val;
    }
};
