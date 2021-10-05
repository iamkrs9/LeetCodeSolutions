//
//  main.cpp
//  146
//
//  Created by Karan Shah on 9/28/21.
//

#include <iostream>
#include <unordered_map>
#include <list>

class LRUCache {
public:
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> map;
    std::list<std::pair<int, int>> l;
    int c;
    
    LRUCache(int capacity) {
        c = capacity;
        
    }
    
    int get(int key) {
        if(map.count(key) == 0) {std::cout << -1 << '\n'; return -1;}
        
        auto i = map[key];
        int val = i->second;
        l.erase(i);
        l.push_front({key, val});
        map[key] = l.begin();
        
        std::cout << val << '\n';
        
        return val;
    }
    
    void put(int key, int value) {
        if(map.count(key) != 0) {
            auto i = map[key];
            l.erase(i);
            l.push_front({key, value});
            map[key] = l.begin();
            return;
        }
        
        if(l.size() == c) {
            int j = l.back().first;
            auto i = map[j];
            l.erase(i);
            map.erase(j);
        }
        
        l.push_front({key, value});
        map[key] = l.begin();
    }
};

int main(int argc, const char * argv[]) {
    LRUCache l(2);
    l.put(1, 1);
    l.put(2, 2);
    l.get(1);
    l.put(3, 3);
    l.get(2);
    l.put(4, 4);
    l.get(1);
    l.get(3);
    l.get(4);
    
    return 0;
}
