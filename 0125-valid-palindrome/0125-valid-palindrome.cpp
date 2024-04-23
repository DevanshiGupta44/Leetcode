// class Solution {
    
// private:
//     bool isvalid(char ch){
//         if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||  (ch>='0' && ch<='9')){
//             return 1;
//         }
//         return 0;
//     }
    
//     char golowercase(char ch){
//     if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
//         return ch;
//         }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//         }
//     }
    
//     bool checkpalin(char a[], int n){
//     int s=0;
//     int e=n-1;
    
//     while(s<=e){
//         if(a[s] != a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
//     }
    
// public:
//     bool isPalindrome(string s) {
//         string temp="";
//         for(int j=0;j<s.length();j++){
//             if(isvalid(s[j])){
//                 temp.push_back(s[j]);
//             }
//         }
        
//         for(int j=0;j<s.length();j++){
//             temp[j] == golowercase(s[j]);
//         }
        
//     }
// };
//code
class Solution {
private:
    bool isvalid(char ch){
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }
    
    char golowercase(char ch){
        if((ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return ch >= 'A' && ch <= 'Z' ? ch - 'A' + 'a' : ch;
        }
        return ch;
    }
    
    bool checkpalin(string s) {
        int left = 0, right = s.length() - 1;
        while(left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    
public:
    bool isPalindrome(string s) {
        string temp = "";
        // Remove non-alphanumeric characters and convert uppercase to lowercase
        for(char ch : s){
            if(isvalid(ch)){
                temp.push_back(golowercase(ch));
            }
        }
        // Check if the modified string is a palindrome
        return checkpalin(temp);
    }
};
