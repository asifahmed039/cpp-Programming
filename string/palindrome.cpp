// A string is called palidrome if from both side string is same 
//example anna ,nitin etc...
bool checkPalindrome(string str) {
//    bool flag=true;
    int n=str.size();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            // flag=false;
            return false;
        }
    }
    return true;
}


//remove character from srting

void removeAllOccurrencesOfChar(string input, char c) 
{
    for(int i=0;i<input.size();i++){
        if(input[i]!=c){
            cout<<input[i];
        }
    }
}