class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sArr(200, -1);
        vector<int> tArr(200, -1);

        if(s.length() != t.length()) {
            return false;
        }
        for (int i=0; i<s.length(); i++) {
            if(sArr[s.at(i)] != tArr[t.at(i)]) {
                return false;
            }
            sArr[s.at(i)] = i; 
            tArr[t.at(i)]= i;
            
        }
     return true;   
    }
};
