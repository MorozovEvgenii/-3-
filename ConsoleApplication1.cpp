#include <iostream>
#include <algorithm>
#include <cmath>

        int main() {
        std::cout << "Calculator!" << std::endl;
        int a = 100;
        int a1 = 150;
        float b = 199.0;
        double c = 2901.00;
        float d = 9000.0;
        float g = 600.0;
        double x = 20.00;
        int result1 = a + b;
        int result2 = c + b;
        int result3 = c - b;
        int result4 = a1 - a;
        double result5 = c / b;
        double result6 = b / d;
        long double result7 = d * x;

        float bg = 2.8;
        float CEIL = ceil(bg);

        float stepen = pow(a, b);

        int coren = abs(a1);

        double si = 25;
        double SIN = sin(si);
        float co = 36;
        float COS = cos(co);
        float COT = cos(co) / sin(si);



        std::cout << "Result1 " << result1 << std::endl;
        std::cout << "Result2 " << result2 << std::endl;
        std::cout << "Result3 " << result3 << std::endl;
        std::cout << "Result4 " << result4 << std::endl;
        std::cout << "Result5 " << result5 << std::endl;
        std::cout << "Result6 " << result6 << std::endl;
        std::cout << "Result7 " << result7 << std::endl;
        std::cout << "Result8 " << result7 << std::endl;
        std::cout << "stepen " << stepen << std::endl;
        std::cout << "coren " << coren << std::endl;
        std::cout << "SIN " << SIN << std::endl;
        std::cout << "COS " << COS << std::endl;
        std::cout << "COT " << COT << std::endl;
        }