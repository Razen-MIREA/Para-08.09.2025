#include <iostream>
#include <string>
#include <vector>

int main() {
    // Создаем строку, аналогичную str_1 = 'AaBbCcDd'
    std::string str_1 = "AaBbCcDd";
    
    // Выводим символы с шагом 2, начиная с первого
    std::cout << "str_1[::2] -> ";
    for(size_t i = 0; i < str_1.size(); i += 2) {
        std::cout << str_1[i];
    }
    std::cout << std::endl;
    
    // Выводим символы с шагом 2, начиная со второго
    std::cout << "str_1[1::2] -> ";
    for(size_t i = 1; i < str_1.size(); i += 2) {
        std::cout << str_1[i];
    }
    std::cout << std::endl;
    
    // Создаем вектор, аналогичный li = ['a','1','b','2','c','3']
    std::vector<std::string> li = {"a", "1", "b", "2", "c", "3"};
    
    // Создаем два новых вектора
    std::vector<std::string> li_1;
    std::vector<std::string> li_2;
    
    // Заполняем li_1 элементами с четными индексами
    for(size_t i = 0; i < li.size(); i += 2) {
        li_1.push_back(li[i]);
    }
    
    // Заполняем li_2 элементами с нечетными индексами
    for(size_t i = 1; i < li.size(); i += 2) {
        li_2.push_back(li[i]);
    }
    
    // Освобождаем память, аналогичное del li
    li.clear();
    
    // Выводим результаты
    for(const auto& item : li_1) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    
    for(const auto& item : li_2) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
