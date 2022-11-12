#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    enum month {
        Январь = 1,
        Февраль,
        Март,
        Апрель,
        Май,
        Июнь,
        Июль,
        Август,
        Сентябрь,
        Октябрь,
        Ноябрь,
        Декабрь
    };
    while(true) {
        std::cout << "Введите номер месяца: ";
        int input = 0; std::string answer = " ";
        std::cin >> input;
        if (input == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }
        month m_input = static_cast<month>(input);
        switch (m_input) {
        case month::Январь: answer = "Январь"; break;
        case month::Февраль: answer = "Февраль"; break;
        case month::Март: answer = "Март"; break;
        case month::Апрель: answer = "Апрель"; break;
        case month::Май: answer = "Май"; break;
        case month::Июнь: answer = "Июнь"; break;
        case month::Июль: answer = "Июль"; break;
        case month::Август: answer = "Август"; break;
        case month::Сентябрь: answer = "Сентябрь"; break;
        case month::Октябрь: answer = "Октябрь"; break;
        case month::Ноябрь: answer = "Ноябрь"; break;
        case month::Декабрь: answer = "Декабрь"; break;
        default: answer = "Неправильный номер!";
        }
        std::cout << answer << std::endl;
    }
}
