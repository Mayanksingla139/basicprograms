#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
          unordered_map<char,int> m;

        for(int i=0; s[i]; i++)
            m[s[i]]++;

        for(int i=0; s[i]; i++)
            if(m[s[i]] == 1)
                return i;

        return -1;
        
    }
};

int main(){
   Solution S;
   string s;
   getline(cin,s);
   cout<<S.firstUniqChar(s);

    return 0;
}