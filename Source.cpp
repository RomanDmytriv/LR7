/*7. На основі контейнера vector побудувати черги цілих чисел та символьних рядків.
Виконати операції занесення елемента у чергу, вилучення елемента з черги, виведення усіх елементів черги на екран,
обчислення суми елементів у черзі (для символьних рядків - конкатенації).*/
#include <iostream>
#include <vector>
#include <string>

std::vector<int> numbers;
std::vector<std::string> array;
// Прототипи функцій
void GetNumbers();
void PrintNumbers();
void DeleteNumber();
int SummNumbers();

void GetString();
void PrintString();
void DeleteString();
void SummString();
int main()
{
    GetString();
    PrintString();
    SummString();
    DeleteString();
    PrintString();

    GetNumbers();
    PrintNumbers();
    SummNumbers();
    DeleteNumber();
    PrintNumbers();
}
void GetNumbers()
{
    std::cout << "\n Print numbers ( 0 for end ): \n";
    for (int i = 0, numb; ; ++i) {
        std::cin >> numb;
        if (numb == 0) break;
        numbers.push_back(numb);
    }
}
void PrintNumbers() 
{
    std::cout << "\n\n Your numbers is: \n";
    for (int i = 0, size = numbers.size(); i < size; ++i) {
        std::cout << "\n Number[" << i + 1 << "]: " << numbers[i];
    }
}
int SummNumbers()
{
    int summ = 0;
    for (int i = 0, size = numbers.size(); i < size; ++i) {
        summ += numbers[i];
    }
    std::cout << "\n\n Summary: " << summ;
    return summ;
}
void DeleteNumber() 
{
    std::cout << "\n\n Delete fisrt number";
    numbers.erase(numbers.begin());
}

void GetString()
{
    std::string string;
    std::cout << "\n Print strings ( Enter for end ): \n";
    for (int i = 0; ; ++i) {
        std::getline(std::cin, string);
        if (string == "") break;
        array.push_back(string);
    }
}
void PrintString()
{
    std::cout << "\n\n Your strings is: \n";
    for (int i = 0, size = array.size(); i < size; ++i) {
        std::cout << "\n String[" << i + 1 << "]: " << array[i];
    }
}
void SummString()
{
    std::string summ;
    for (int i = 0, size = array.size(); i < size; ++i) {
        summ += array[i];
    }
    std::cout << "\n\n Concatenation: " << summ;
}
void DeleteString()
{
    std::cout << "\n\n Delete fisrt string ";
    array.erase(array.begin());
}