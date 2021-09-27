//
//  main.cpp
//  13
//
//  Created by Karan Shah on 9/9/21.
//

#include <iostream>
#include <string>

class Solution {
public:
    int convert(char c){
        switch(c) {
            case 'I':
                return 1;
                
            case 'V':
                return 5;
                
            case 'X':
                return 10;
            
            case 'L':
                return 50;
                
            case 'C':
                return 100;
                
            case 'D':
                return 500;
            
            case 'M':
                return 1000;
            
            default:
                return 0;
                
        }
    }
    
    int romanToInt(std::string s) {
        
        int sum{0};
        
        int s_length = static_cast<int>(s.length());
        
        for(int i{0}; i < s_length-1; i++) {
            
            if(convert(s[i]) >= convert(s[i+1])) {
                sum += convert(s[i]);
            }
            else {
                sum -= convert(s[i]);
            }
            
        }
        sum += convert(s[s_length-1]);
        std::cout << sum << '\n';
        
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    s.romanToInt("MCM");
    s.romanToInt("MCMXCIV");
    s.romanToInt("LVIII");
    s.romanToInt("IX");
    s.romanToInt("IV");
    s.romanToInt("III");
    return 0;
}
