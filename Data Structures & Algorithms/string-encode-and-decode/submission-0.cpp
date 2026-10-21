class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(auto it:strs){
            encoded_string += to_string(it.size());
            encoded_string += '#';
            encoded_string += it;
        }
        return encoded_string;
        
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;

        while(i < s.size()) {
            string length = "";

            while(s[i] != '#') {
                length += s[i];
                i++;
            }

            int len = stoi(length);
            i++; 

            string word = s.substr(i, len);
            decoded_strs.push_back(word);

            i += len;
        }

        return decoded_strs;
    }
};
