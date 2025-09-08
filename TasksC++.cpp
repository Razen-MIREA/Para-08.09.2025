#include <iostream>
#include <string>

int main() {
    // Создаем строку
    std::string param1 = "Практика номер 0";
    
    // Заменяем символ '0' на '1'
    // Используем метод replace с указанием позиции и длины
    size_t pos = param1.find('0');
    if (pos != std::string::npos) {
        param1.replace(pos, 1, "1");
    }
    
    // Альтернативный вариант с использованием std::replace
    // std::replace(param1.begin(), param1.end(), '0', '1');
    
    // Выводим результат
    std::cout << param1 << std::endl;
    
    return 0;
}
