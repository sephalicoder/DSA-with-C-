class LRUCache {
    int cap;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator> m;
     
public:
    LRUCache(int capacity)  {
         cap =  capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
           
        cache.splice(cache.begin(),  cache, m[key]);
        return m[key]->second;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            m[key]->second= value;
           cache.splice(cache.begin(), cache, m[key]); 
        }
        else{
            if(cache.size()==cap){
                int last= cache.back().first;
                m.erase(last);
                cache.pop_back();
                 
                 
            }
            cache.push_front({key, value});
            m[key] = cache.begin();

        }
        
           

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */