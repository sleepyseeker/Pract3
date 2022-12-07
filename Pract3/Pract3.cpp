#include <iostream>
int main()
{
    setlocale(LC_ALL, "ukr");
    int arrayNumber[10]{};
    std::cout << "Введiть 10 значень массиву:\n";
    int sumIndecator{};
    int sum{};
    for (int i = 0; i < 10; i++)
    {
        int arrayMember;
        std::cin >> arrayMember;
        arrayNumber[i] = arrayMember;
        if (sumIndecator < 3 && arrayMember> 0)
        {
            sum += arrayMember;
            ++sumIndecator;
        }
        else if (sumIndecator == 3) {
            std::cout << "Сума трьох додатнiх значень: " << sum;
            break;
        }
        else
        {
            sum = 0;
            sumIndecator = 0;
        }
    }
    if (sumIndecator < 3) {
        std::cout << "Додатнi значення вiдсутнi\n";
        for (auto member : arrayNumber)
        {
            std::cout << member << " ";
        }
    }
}