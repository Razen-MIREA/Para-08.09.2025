#include <iostream>
#include <string>

int main() {
    // Создаем строку
    std::string param1 = "Практика номер 0";
    
    // Заменяем символ '0' на '1'
    std::replace(param1.begin(), param1.end(), '0', '1');
    
    // Выводим результат
    std::cout << param1 << std::endl;
    
    return 0;
}
