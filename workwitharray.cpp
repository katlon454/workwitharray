#include <iostream>

void show_array(int s,int* m) {
    for (int i = 0; i < s; i++) {
        std::cout << m[i] << ",";
    }
    std::cout << (char)8;
}

void fill_array(int* m,int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            if (rand() % 2 == 0) {

            }
        }
        else {
            if()
        }
            m[i] = rand() % 1001;
    }
}



int main()
{
    const int size = 500;
    int mas[size];
    fill_array(mas, size);
    show_array(size,mas);
    
}
