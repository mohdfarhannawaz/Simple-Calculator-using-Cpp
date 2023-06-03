// basic calculator in c++ 
#include <iostream>
int main() {
    
    char op;
    std::cout<<"This is a basic calculator\n";
    do{
        double num1{0}, num2{0};
        int a{0}, b{0}; 
        int c;


        std::cout<<"\nPress 1: For Addition\n";
        std::cout<<"Press 2: For Subtraction\n";
        std::cout<<"Press 3: For Multiplication\n";
        std::cout<<"Press 4: For Division\n";
        std::cout<<"Press 5: For Remainder\n";

        std::cout<<"Enter the operation : ";
        std::cin>>c;

        if(c==1) {
            std::cout<<"You have selected Addition.\n";
            std::cout<<"Enter the first digit : ";
            std::cin>>num1;
            std::cout<<"Enter the second digit : ";
            std::cin>>num2;
            std::cout<<"Addition of "<< num1 <<" and "<< num2 << " : "<<num1+num2;
        }
        else if(c==2) {
            std::cout<<"\nYou have selected Subtraction.\n";
            std::cout<<"Enter the first digit : ";
            std::cin>>num1;
            std::cout<<"Enter the second digit : ";
            std::cin>>num2;
            std::cout<<"Subtraction of "<< num1 <<" and "<< num2 << " : "<<num1-num2;
        }
        else if(c==3) {
            std::cout<<"\nYou have selected Multiplication.\n";
            std::cout<<"Enter the first digit : ";
            std::cin>>num1;
            std::cout<<"Enter the second digit : ";
            std::cin>>num2;
            std::cout<<"Multiplication of "<< num1 <<" and "<< num2 << " : "<<num1*num2;
        }
        else if(c==4) {
            std::cout<<"\nYou have selected Addition.\n";
            std::cout<<"Enter the first digit : ";
            std::cin>>num1;
            std::cout<<"Enter the second digit : ";
            std::cin>>num2;
            std::cout<<"Division of "<< num1 <<" and "<< num2 << " : "<<num1/num2;
        }
        else if(c==5) {
            std::cout<<"\nYou have selected Addition.\n";
            std::cout<<"Enter the first digit : ";
            std::cin>>num1;
            std::cout<<"Enter the second digit : ";
            std::cin>>num2;
            std::cout<<"Remainder of "<< num1 <<" and "<< num2 << " : "<<a%b;
        }
        else {
            std::cout<<"\nFAILED! Please enter the valid operation!!\n";
        }
            
            std::cout<<"\nDo You want to Continue? Press (y) to continue : ";
            std::cin>>op;
        
    } while(op == 'y' || op == 'Y' );
    
    std::cout<<"\nSee You Next Time\n";
    return 0;
}

