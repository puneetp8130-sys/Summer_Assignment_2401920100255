class Solution {
public:
    string decodeString(string s) {
    stack<int>countstack;
    stack<string>stringstack;
    int num = 0;
    string curr = "";

    for(char ch : s){
        if(isdigit(ch)){
            num = num * 10 + ch - '0';
        }
        else if(ch == '['){
            countstack.push(num);
            stringstack.push(curr);

            num = 0;
            curr = "";
        }
        else if(ch == ']'){
            int repeat = countstack.top();
            countstack.pop();
            string prev = stringstack.top();
            stringstack.pop();

            string temp = "";
            for(int i = 0; i < repeat; i++){
                temp += curr;
            }

            curr = prev + temp;
        }
        else{
                curr += ch;
            }
    }
    return curr;  
    }
};