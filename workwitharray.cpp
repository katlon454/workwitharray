#include <iostream>

void show_array(int s,int* m) {
    for (int i = 0; i < s; i++) {
        std::cout << m[i] << ",";
    }
    std::cout << (char)8<<'\n';
}

void fill_array(int* m,int size) {
    for (int i = 0; i < size; i++) {

        m[i] = rand() % 100;
    }
}

int sort(int* m,int size) {
    int i = 0;
    int reg = 0;
    bool flag=true;
    while (flag==true) {
        flag = false;
        for (i = 0; i < size-1;i++) {
            if (m[i] > m[i + 1]) {
                reg = m[i];
                m[i] = m[i + 1];
                m[i + 1] = reg;
                flag = true;
            }
        }
    }
    return *m;
}

void sort2(int* m, int size) {
    int i, j;
    int min;
    for (i = 0; i < size - 1; i++); {
        min = 101;
        for (j = i; j < size - 1; j++) {
            if (min > m[j]) {
                min = m[j];
            }
        }
    }
}

int main()
{
    const int size = 10;
    int mas[size];
    fill_array(mas, size);
    show_array(size,mas);
    sort(mas, size);
    show_array(size, mas);
}
