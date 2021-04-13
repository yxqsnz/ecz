#ifdef _WIN32
#include <conio.h>;
#define getch__ _getch();
#else
#define getch__ getch();
#endif

#include "./includes.h"
#include "./types_definitions.h"

template <typename ...Text>
Inline void Println(Text ...args) {

    Array<String, sizeof...(Text)> CHARS = { { args... } };
    for (auto CHAR : CHARS)
        std::cout << CHAR;
    Print("\n");
};
Inline String Input(String question = "") {
    String response;
    Print("%s", question.c_str());
    std::getline(std::cin, response);
    Return response;
};
Inline Function SetSystemLocale() {
    setlocale(LC_ALL, "");
};
Inline Function SetLocale(String Locale) {
    setlocale(LC_ALL, Locale.c_str());
};
Inline void Pause(String text = "",Boolean auto_jump_line = False) {
    std::cout << text;
    getch__;
    Print(auto_jump_line ? "\n" : "");
};