#include <iostream>

void show_array(int s,int* m) {
    for (int i = 0; i < s; i++) {
        m[i] = s - i;

    }
    for (int i = 0; i < s; i++) {
        std::cout << m[i] << ",";
    }
    std::cout << (char)8;
}

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
    show_array()
}
