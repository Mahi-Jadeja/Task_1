# include<iostream>
using namespace std;

int main(){
    int a, b, choice, choice1, choice2;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Do you want an absolute value of the numbers? (1 for yes, 0 for no)"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"The absolute value of "<<a<<" is "<<abs(a)<<endl;
        cout<<"The absolute value of "<<b<<" is "<<abs(b)<<endl;
    }
    else{
        cout<<"The numbers are "<<a<<" and "<<b<<endl;
    }
    cout<<"Would you like to proceed with the absolute values? (1 for yes, 0 for no)"<<endl;
    cin>>choice1;
    if(choice1==1){
        a=abs(a);
        b=abs(b);
    }
    else{
        cout<<"The numbers are "<<a<<" and "<<b<<endl;
    }
    cout<<"Enter your choice via putting as input the number corresponding to the given operations: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice2;
    switch(choice2){
        case 1:
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
            break;
        case 2:
            cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        case 3:
            cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
            break;
        case 4:
            cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}
