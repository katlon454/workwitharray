#include <iostream>

int main()
{
    const int size = 8;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] =size - i;
       
    }
    for (int i = 0; i < 8; i++) {
        std::cout<<mas[i] << ",";
    }
    std::cout << (char)8;
}
