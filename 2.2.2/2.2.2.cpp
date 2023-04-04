#include <iostream>
struct person {
    std::string name;
    int account;
    double amount;
};
void change(person& p, double n) {
    p.amount = n;
}
int main()
{
    person pers;
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::cout << "Введите номер счёта: ";
    std::cin >> pers.account;
    std::cout << "Введите имя владельца: ";
    std::cin >> pers.name;
    std::cout << "Введите баланс: ";
    std::cin >> pers.amount;
    std::cout << "Введите новый баланс: ";
    double new_bal;
    std::cin >> new_bal;
    change(pers, new_bal);
    std::cout << "Ваш счёт: " << pers.name << ", " << pers.account << ", " << pers.amount;
}