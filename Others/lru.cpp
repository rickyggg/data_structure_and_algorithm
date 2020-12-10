struct DLinkedNode{
    int key, value;
    DLinkedNode *prev;
    DLinkedNode *next;
    DLinkedNode(): key(0), value(0), prev(nullptr), next(nullptr) {}
    DLinkedNode(int _key, int _value): key(_key), value(_value), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
    LRUCache(int _capacity): capacity(_capacity), size(0) {
        head = new DLinkedNode(-1, -1);
        tail = new DLinkedNode(-1, -1);
        head->next = tail;
        tail->prev = head;
        cache.clear();
    }

    int get(int key) {
        if (!capacity || !cache.count(key))
            return -1;
        DLinkedNode *node = cache[key];
        moveToHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if (!cache.count(key)) {
            DLinkedNode *node = new DLinkedNode(key, value);
            cache[key] = node;
            addToHead(node);
            ++size;
            if (size > capacity) {
                DLinkedNode *temp = removeTail();
                cache.erase(temp->key);
                delete temp;
                --size;
            }
        } else {
            DLinkedNode *node = cache[key];
            node->value = value;
            moveToHead(node);
        }
    }

private:
    unordered_map<int, DLinkedNode*> cache;
    int capacity = 0;
    int size = 0;
    DLinkedNode *head;
    DLinkedNode *tail;

    void addToHead(DLinkedNode *node) {
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(DLinkedNode *node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveToHead(DLinkedNode *node) {
        removeNode(node);
        addToHead(node);
    }

    DLinkedNode* removeTail() {
        DLinkedNode *node = tail->prev;
        removeNode(node);
        return node;
    };
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
