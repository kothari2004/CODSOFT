#include<iostream>
using namespace std;
int main(){
    float a,b;
    char sum;
    cout<<"Enter the number 1st:";
    cin>>a;
    cout<<"Enter the number 2nd:";
    cin>>b;
    cout<<"Enter the operation:";
    cin>>sum;
    if(sum=='+'){
        cout<<"The sum is:"<<a+b;
    }
    else if(sum=='-'){
        cout<<"The Sub is:"<<a-b;
    }
    else if(sum=='/'){
        cout<<"The Div is:"<<a/b<<endl;
        cout<<"The Div is:"<<b/a;
    }
    else if(sum=='*'){
        cout<<"The Mul is:"<<a*b;
    }
    else if(sum=='%'){
        cout<<"The Remainder is:"<<(int)a % (int)b;
    }
    else{
        cout<<"Invalid error";
    }
    return 0;
}
