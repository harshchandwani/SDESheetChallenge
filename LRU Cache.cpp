class LRUCache {
public:
    map<int,int>m; //storing the value and key
    map<int, list<int>::iterator> address; //storing the key and the address
    list<int>l; //doubly linked list
    int cap;
    int size;

    LRUCache(int capacity) {
        cap = capacity;
        size = 0;    
    }
    
    int get(int key) {
        if(m.find(key) == m.end()) return -1;
        list<int>::iterator it = address[key];
        l.erase(it);
        address.erase(key);
        l.push_front(key);
        address[key] = l.begin();
        return m[key];
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            l.erase(address[key]);
            address.erase(key);
            m.erase(key);
            size--;
        }

        if(size == cap){
            int k = l.back();
            l.pop_back();
            address.erase(key);
            m.erase(k);
            size--;
        }
        //when size is less than cap
        //so just put it everywhere
        size++;
        l.push_front(key);
        address[key] = l.begin();
        m[key] = value;
    }
};
