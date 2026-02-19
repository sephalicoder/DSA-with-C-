class Solution {
public:
    string reverseWords(string s) {
   string result= "";
   int i=0; 
   int n= s.size();
   while(i<n){
    while(i<n && s[i]==' ') i++;
    if(i>= n) break; 
    int j=i;
    while(j<n && s[j]!=' ') j++; 
    string word= s.substr(i,j-i); 
    if(result.size()==0){
        result= word;
    }else{
        result= word + " " + result;
    }
    i=j;
   }
   return result; 
   }
};
