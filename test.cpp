#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=1;
    string m[s.length()];
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            m[i]="<id,"+to_string(count)+">";
            count++;
        }else if(s[i]=='='){
            m[i]="<=>";
        }else if(s[i]=='+'){
            m[i]="<+>";
        }else if(s[i]=='-'){
            m[i]="<->";
        }else if(s[i]=='*'){
            m[i]="<*>";
        }else if(s[i]=='/'){
            m[i]="</>";
        }else if(s[i]=='%'){
            m[i]="<%>";
        }else if(s[i]==';'){
            m[i]="<;>";
        }else if(s[i]>='0' && s[i]<='9'){
            m[i]='<'+sizeof(s[i])+'>';
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<m[i];
    }
    return 0;
}