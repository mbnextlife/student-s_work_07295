#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
String(const char *str = "");
String(size_t n, char c);
~String();


    String(const String &other) 
    : size(other.size) {
        str = new char[other.size + 1];
        strcpy(str, other.str);
    }


void append(const String &other);

size_t size;
char *str;
                                    //вы можете заводить любые вспомогательные методы или функции, но не реализуйте заново методы из предыдущих заданий — они уже реализованы.
};