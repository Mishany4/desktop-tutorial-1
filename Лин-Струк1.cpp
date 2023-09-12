// Ван Сихэм Франклин О' Нил Джон 1032189251
// Created by mishka4u on 9/12/23.
//
#include <iostream>

using namespace std;

int main() {
    float a, b, h, area;

    std::cout << "Введите число для а: " << endl;
    std::cin >> a;
    std::cout << "Число для а: " << a << endl;

    std::cout << "Введите число для b: " << endl;
    std::cin >> b;
    std::cout << "Число для b: " << b << endl;

    std::cout << "Введите число для h: " << endl;
    std::cin >> h;
    std::cout << "Число для h: " << h << endl;

    area = (h*(a + b))/2; // формула трапеции
    std::cout << "Площадь трапеции равно: " << area << endl;

    return 0;
}