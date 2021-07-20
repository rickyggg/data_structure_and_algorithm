struct Node {
  Node(int key, int val) : key(key), val(val) {}

  int key = -1;
  int val = -1;
  list<Node *>::iterator iter;
}

class LRUCache {
public:
  LRUCache(int capacity) : capacity(capacity) {}

  int get(int key) {
    auto iter = m.find(key);
    if (m.end() == iter) {
      return -1;
    }
    int val = iter->second->val;
    put(key, val);

    return val;
  }

  void put(int key, int value) {
    auto iter = m.find(key);
    if (m.end() != iter) {
      cache.splice(cache.begin(), cache, iter->second->iter);
      iter->second->val = value;
    } else {
      if (cache.size() == capacity) {
        Node *lastNode = cache.back();
        int deleteKey = lastNode->key;
        cache.pop_back();
        delete lastNode;
        m.erase(deleteKey);
      }
      Node *node = new Node(key, value);
      cache.push_front(node);
      node->iter = cache.begin();
      m[key] = node;
    }
  }

private:
  unordered_map<int, Node *> m;
  list<Node *> cache;
  int capacity = 1;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */