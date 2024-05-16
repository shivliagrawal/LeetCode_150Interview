class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool boo = true;
        int count =0;
        
        for(int i=0; i<ransomNote.length(); i++) {
            for (int j=0; j<magazine.length(); j++) {
                if (ransomNote.at(i) == magazine.at(j)) {
                    magazine.at(j) = '1';
                    count = count + 1;
                    break;
                }
            }
        }
        if (count != ransomNote.length()) {
            boo = false;
        }
        return boo;
    }
};
