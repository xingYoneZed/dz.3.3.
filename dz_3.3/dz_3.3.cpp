﻿

#include <iostream>

//class Calculator {
//
//private:
//    double num1;
//    double num2;
//
//public:
//    double add() {
//        return num1 + num2;
//    }
//
//    double multiply() {
//        return num1 * num2;
//    }
//
//    double subtract_1_2() {
//        return num1 - num2;
//    }
//
//    double subtract_2_1() {
//        return num2 - num1;
//    }
//
//    double divide_1_2() {
//        if (num2 != 0) {
//            return num1 / num2;
//        }
//        else {
//            std::cerr << "Упс, деление на 0\n";
//            return 0.0; 
//        }
//    }
//
//    double divide_2_1() {
//        if (num1 != 0) {
//            return num2 / num1;
//        }
//        else {
//            std::cerr << "Упс, деление на 0\n";
//            return 0.0; 
//        }
//    }
//
//    bool set_num1(double num) {
//        if (num != 0) {
//            num1 = num;
//            return true;
//        }
//        else {
//            std::cerr << "0\n";
//            return false;
//        }
//    }
//
//    bool set_num2(double num) {
//        if (num != 0) {
//            num2 = num;
//            return true;
//        }
//        else {
//            std::cerr << "0\n";
//            return false;
//        }
//    }
//};
//
//int main() {
//    Calculator calculator;
//    setlocale(LC_ALL, "russian");
//    while (true) {
//        double input1, input2;
//
//        std::cout << "Введите первое чило: ";
//        std::cin >> input1;
//
//        std::cout << "Введите второе чило: ";
//        std::cin >> input2;
//
//        if (calculator.set_num1(input1) && calculator.set_num2(input2)) {
//            std::cout << "Сумма: " << calculator.add() << std::endl;
//            std::cout << "Перемножение: " << calculator.multiply() << std::endl;
//            std::cout << "Вычитания (num1 - num2): " << calculator.subtract_1_2() << std::endl;
//            std::cout << "Вычитания (num2 - num1): " << calculator.subtract_2_1() << std::endl;
//            std::cout << "Деление  (num1 / num2): " << calculator.divide_1_2() << std::endl;
//            std::cout << "Деление  (num2 / num1): " << calculator.divide_2_1() << std::endl;
//        }
//
//        char choice;
//        std::cout << "Хотите продолжить? (y/n): ";
//        std::cin >> choice;
//
//        if (choice != 'y' && choice != 'Y') {
//            break;
//        }
//    }
//
//    return 0;
//}

//class Counter {
//private:
//    int value;
//
//public:
//   
//    Counter() : value(1) {}
//
//   
//    Counter(int initialValue) : value(initialValue) {}
//
//    void increment() {
//        value++;
//    }
//
//   
//    void decrement() {
//        value--;
//    }
//
//   
//    int getValue() const {
//        return value;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "russian");
//
//    char command;
//    Counter counter;
//
// 
//    std::cout << "Вы хотите указать начальное значение счетчика? Введите 'да' или 'нет': ";
//    std::string userInput;
//    std::cin >> userInput;
//
//    if (userInput == "да") {
//        int initialValue;
//        std::cout << "Введите начальное значение счетчика: ";
//        std::cin >> initialValue;
//        Counter counterWithInitialValue(initialValue);
//        counter = counterWithInitialValue;
//    }
//
//    
//    do {
//        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
//        std::cin >> command;
//
//        switch (command) {
//        case '+':
//            counter.increment();
//            break;
//        case '-':
//            counter.decrement();
//            break;
//        case '=':
//            std::cout << counter.getValue() << std::endl;
//            break;
//        case 'x':
//            std::cout << "Программа завершена.\n";
//            break;
//        default:
//            std::cout << "Некорректная команда. Пожалуйста, введите '+', '-', '=', или 'x'.\n";
//        }
//
//    } while (command != 'x');
//
//    return 0;
//}
