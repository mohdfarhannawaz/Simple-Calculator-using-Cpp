// basic calculator in c++
#include <iostream>

int print_menu();
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
int rem(int a, int b);

int main()
{

    char op;
    std::cout << "This is a basic calculator\n";
    do
    {
        double num1{0}, num2{0};
        int a{0}, b{0};
        int c = print_menu();

        switch(c)
        {
            case 1:
                std::cout << "\nYou have selected Addition.\n";
                std::cout << "Enter the first digit : ";
                std::cin >> num1;
                std::cout << "Enter the second digit : ";
                std::cin >> num2;
                std::cout << "Addition of " << num1 << " and " << num2 << " : " << add(num1, num2);
                break;
            case 2:
                std::cout << "\nYou have selected Subtraction.\n";
                std::cout << "Enter the first digit : ";
                std::cin >> num1;
                std::cout << "Enter the second digit : ";
                std::cin >> num2;
                std::cout << "Subtraction of " << num1 << " and " << num2 << " : " << sub(num1, num2);
                break;
            case 3:
                std::cout << "\nYou have selected Multiplication.\n";
                std::cout << "Enter the first digit : ";
                std::cin >> num1;
                std::cout << "Enter the second digit : ";
                std::cin >> num2;
                std::cout << "Multiplication of " << num1 << " and " << num2 << " : " << mul(num1, num2);
                break;
            case 4:
                std::cout << "\nYou have selected Division.\n";
                std::cout << "Enter the first digit : ";
                std::cin >> num1;
                std::cout << "Enter the second digit : ";
                std::cin >> num2;
                std::cout << "Division of " << num1 << " and " << num2 << " : " << div(num1, num2);
                break;
            case 5:
                std::cout << "\nYou have selected Remainder.\n";
                std::cout << "Enter the first digit : ";
                std::cin >> a;
                std::cout << "Enter the second digit : ";
                std::cin >> b;
                std::cout << "Remainder of " << a << " and " << b << " : " << rem(a, b);
                break;
            default:
                std::cout << "\nFAILED! Please enter the valid operation!!\n";
                break;
        }

        std::cout << "\nDo You want to Continue? Press (y) to continue : ";
        std::cin >> op;

    } while (op == 'y' || op == 'Y');

    std::cout << "\nSee You Next Time\n";
    return 0;
}

int print_menu()
{
    int c;
    std::cout << "\nPress 1: For Addition\n";
    std::cout << "Press 2: For Subtraction\n";
    std::cout << "Press 3: For Multiplication\n";
    std::cout << "Press 4: For Division\n";
    std::cout << "Press 5: For Remainder\n";
    std::cout << "Enter the operation : ";
    std::cin >> c;
    return c;
}

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mul(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}
