#include<iostream>
using namespace std;
void towerofhanoi(int n,char fromrod,char torod,char auxrod){
    if(n=0){
        return;
    }
    towerofhanoi(n-1,fromrod,auxrod,torod);
    cout<<"move disk"<<n<<"from rod"<<"to rod"<<endl;
    towerofhanoi(n-1,auxrod,torod,fromrod);
}
int main(){
    int n=3;
    towerofhanoi(n,'a','b','c');
    return 0;
}