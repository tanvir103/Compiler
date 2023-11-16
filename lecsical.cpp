#include<iostream>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int count=1;
    for(int i=0;i<x.length();i++){
        if(x[i]>='a' && x[i]<='z'){
            cout<<"<id,"<<count<<">";
        }else if(x[i]==' '){
            continue;
        }else if(x[i]=='='){
            cout<<"<=>";
        }else if(x[i]=='+'){
            cout<<"<+>";
        }else if(x[i]=='-'){
            cout<<"<->";
        }else if(x[i]=='*'){
            cout<<"<*>";
        }else if(x[i]=='/'){
            cout<<"</>";
        }else if(x[i]=='%'){
            cout<<"<%>";
        }else if(x[i]==';'){
            cout<<"<;>";
        }
        else if(x[i]>='0' && x[i]<='9'){
            cout<<"<"<<x[i]<<">";
        }
    }
    
}