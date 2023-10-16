#include <iostream>

void geometry(std::string choice);
void calculator(std::string choice);

int main(){
    std::cout << "Welcome To Basic Math App\n";
    std::cout <<"Only Use Lower Case Chars\n";

    std::cout << "*************************************************\n";
    std::string choice;
    std::cout << "Geometry Or Calculator: ";
    std::cin >> choice;

    if (choice == "geometry"){
        geometry(choice);
    }
    else if (choice == "calculator"){
        calculator(choice);
    }
}
void geometry(std::string choice){
    do{
        std::cout << "'r' for Rectangle\n";
        std::cout << "'c' for Cricle\n";

        std::string r;
        std::string c;

        std::cin >> choice;

        if (choice == "r"){
            double longSide;
            double shortSide;

            std::string choice2;

            std::cout << "Area Or Perimeter: ";

            std::cin >> choice2;

            if (choice2 == "area"){
                std::cout << "Enter Long Side: ";
                std::cin >> longSide;

                std::cout << "Enter Short Side: ";
                std::cin >> shortSide;

                if (shortSide > longSide){
                    std::cout << "Obey My Rules!!!";
                }
                    
                double area = longSide * shortSide;

                std::cout << "The Area Is: " << area << '\n';
            }
            else if(choice2 == "perimeter"){
                std::cout << "Enter Long Side: ";
                std::cin >> longSide;

                std::cout << "Enter Short Side: ";
                std::cin >> shortSide;

                if (shortSide > longSide){
                    std::cout << "Obey My Rules!!!";
                }

                double perimeter = longSide + shortSide +longSide+ shortSide;

                std::cout << "The Perimeter Is: \n" << perimeter;
            }
            else{
                std::cout << "Invalid input\n";
            }
        }
        else if (choice == "c"){
            double PI = 3.14159265359;
            double radius;
            std::string choice3;

            std::cout << "Area or circumference: ";
            std::cin >> choice3;

            if (choice3 == "area"){
                std::cout << "Enter Radius Of Circle: ";
                std::cin >> radius;

                double area = radius * radius *  PI;

                std::cout << "The Area Is: " << area;
            }
            else if (choice3 == "circumference"){
                std::cout << "Enter Radius Of Circle: \n";
                std::cin >> radius;

                double circumference = radius * 2 *PI;

                std::cout << "The Circumference Is: \n" << circumference;
            }
            else{
                std::cout << "Invalid input";
            }
        }
    }while(choice != "q");
}
void calculator(std::string choice){
    do{
        std::cout << "'a' for Addition\n";
        std::cout << "'s' for Subtraction\n";
        std::cout << "'m' for Multiplication\n";
        std::cout << "'d' for Division\n";

        std::cin >> choice;

        double number1;
        double number2;

        if (choice == "a"){
            std::cout << "Enter First Number: ";
            std::cin >> number1;

            std::cout << "Enter Second Number: ";
            std::cin >> number2;

            double a = number1+number2;

            std::cout << "The Result: " << a << '\n';
        }
        else if(choice == "s"){
            std::cout << "Enter First Number: ";
            std::cin >> number1;

            std::cout << "Enter Second Number: ";
            std::cin >> number2;

            double s = number1-number2;

            std::cout << "The Result: " << s << '\n';
        }
        else if(choice == "m"){
            std::cout << "Enter First Number: ";
            std::cin >> number1;

            std::cout << "Enter Second Number: ";
            std::cin >> number2;

            double m = number1*number2;

            std::cout << "The Result: " << m << '\n';
        }
        else if(choice == "d"){
            std::cout << "Enter First Number: ";
            std::cin >> number1;

            std::cout << "Enter Second Number: ";
            std::cin >> number2;

            double d = number1/number2;

            std::cout << "The Result: " << d << '\n';
        }
    }while(choice != "q");
}