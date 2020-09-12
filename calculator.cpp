#include<iostream>
#include<cmath>
using namespace std;


// Adds two numbers and prints out results
void sum(){
    int a,b;
    cout << "Enter numbers separated by a space"<<endl;
    cin >>a>>b;
    cout <<a<<'+'<<b<<'='<<a+b<<endl;
    cout << "Addition Successful"<<endl<<endl;;
}


// Subtracts two numbers and prints out results
void subtract(){
    int a,b;
    cout << "Enter numbers separated by a space"<<endl;
    cin >>a>>b;
    cout <<a<<'-'<<b<<'='<<a-b<<endl;
    cout << "Subtraction Successful"<<endl<<endl;

}

// Multiplies two numbers and prints out results
void multiply(){
    int a,b;
    cout << "Enter numbers separated by a space"<<endl;
    cin >>a>>b;
    cout <<a<<'*'<<b<<'='<<a*b<<endl;
    cout << "Multiplication Successful"<<endl<<endl;
}

// Divides two numbers and prints out results
void divide(){
    int a,b;
    cout << "Enter numbers separated by a space"<<endl;
    cin >>a>>b;
    cout <<a<<'/'<<b<<'='<<a/b<<endl;
    cout << "Division Successful"<<endl<<endl;
}


// Factorial of given number , overflow may occur
int factorial(int fac){
    long int  val;
    if (fac==0)
    val=0;
    else if (fac==1)
    val=1;
    else 
    val=fac*factorial(fac-1);
    return val;
    

}


// Prints number of zeroes in the factorial of a number , overflow may occur
void zeroes(){
    int n;
    cout <<"Enter numbers"<<endl;
    cin >> n;
    long int  temp = factorial(n);
    int zero=0;
    while(temp%10==0){
        zero++;
        temp=temp/10;
    }
    cout << zero << endl;
    cout <<"Factorial Successful"<<endl<<endl;
}

// Converts input decimal number to any system 
void convert(){
    int n,b;
    cout << "Enter your number in decimal and base of new system"<<endl;
     cin >> n >> b;
     int i=0;
     int temp=0;
     while(n>0){
         temp=temp+((n%b)*(pow(10,i)));
         n=n/b;
         i++; }
         cout << temp << endl;
         
    cout <<"Conversion successful";

}


int main(){

    int init =1 ; 
    int zen = 0;


    while(init | zen){
        cout << '\a'; // AUdible bell
        cout << "Enter 1 for addition" << endl;
        cout << "Enter 2 for subtraction"<< endl;
        cout << "Enter 3 for multiplication"<<endl;
        cout << "Enter 4 for division"<<endl;
        cout << "Enter 5 for factorial"<< endl;
        cout << "Enter 6 for number of 0's in factorial"<<endl;
        cout << "Enter 7 for conversion to another numeral system"<<endl;

        if (init==1 && zen==0){
        cout << "Enter 8 for Zen mode"<<endl;}

        cout << "Anything else to exit"<< endl;

        int mode;
        cin >> mode;


        if (mode==8 && init==1){
        zen=1;
        init =0;
        continue;}

        init =0;


        if (mode==1)
        sum();

        else if (mode==2)
        subtract();

        else if (mode==3)
        multiply();


        else if (mode==4)
        divide();


        else if (mode==5){
        long fac;
        cout <<"Enter your number";
        cin >> fac;
        long int f=factorial(fac);
        cout <<f<<endl;
        cout <<"Factorial Succcessful" << endl<<endl;}


        else if (mode==6)
        zeroes();
        
        else if (mode==7)
        convert();

        else
        break;
    
        

        


    }
}