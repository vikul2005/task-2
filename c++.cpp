#include<iostream>
using namespace std;
    int stack[100],n=100, top =-1;
    void push(int val){
        if(top >= n-1)
        cout<<"overflow\n";
        else
        stack[++top]=val;
    }
        void pop(){
            if (top < 0)
            cout<<"under flow\n";
            else
            top--;
        }
        void display(){
            for (int  i = top; i >=0; i--)
             cout << stack[i]<<"  ";    
             cout << endl;      
        }
        int main(){
            push(10);
               push(20);
                  push(30);
                     push(40);
          display();
          pop();
                display();       

        
    return 0;
}