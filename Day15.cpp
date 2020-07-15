
   class Solution {
public:
    string reverseWords(string s) {
        string result;
        int index=0, index2;
        if(s == "") return s;
        result = "";
        index = s.find_last_not_of(' ');
        if(index == -1)  return "";    
        else s.erase(index + 1);    
        index = 0;
        while(index >= 0){
            index = s.find_first_not_of(' ', index);
            if(index != -1){
                index2 = s.find(' ', index);
                if(result != ""){
                    result.insert(0, " "); 
                }
                result = s.substr(index, index2 - index) + result;
                if(index2 >= 0){                                       
                    index = index2;
                }
                else{
                    return result;                    
                }    
            }
        }
        return result;    
    }
};
