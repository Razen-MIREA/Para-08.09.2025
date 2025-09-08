#include <iostream>
#include <string>
#include <vector>

int main() {
    // Работа со строкой
    std::string str_1 = "AaBbCcDd";
    
    // Эквивалент str_1[::2]
    std::string result1;
    for (size_t i = 0; i < str_1.length(); i += 2) {
        result1 += str_1[i];
    }
    std::cout << "str_1[::2] -> " << result1 << std::endl;
    
    // Эквивалент str_1[1::2]
    std::string result2;
    for (size_t i = 1; i < str_1.length(); i += 2) {
        result2 += str_1[i];
    }
    std::cout << "str_1[1::2] -> " << result2 << std::endl;
    
    // Работа с вектором
    std::vector<std::string> li = {"a", "1", "b", "2", "c", "3"};
    std::vector<std::string> li_1;
    std::vector<std::string> li_2;
    
    // Эквивалент li[0::2]
    for (size_t i = 0; i < li.size(); i += 2) {
        li_1.push_back(li[i]);
    }
    
    // Эквивалент li[1::2]
    for (size_t i = 1; i < li.size(); i += 2) {
        li_2.push_back(li[i]);
    }
    
    // Эквивалент del li
    li.clear(); // Освобождаем память
    
    // Вывод результатов
    for (const auto& elem : li_1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    for (const auto& elem : li_2) {
        std::cout << elem << " ";
    }
    
    return 0;
}
