//
//  Створіть одновимірний динамічний масив із випадковми значеннями. Відсортуйте значення за спаданням і виведіть їх.
//
#include <iostream>
#include <ctime> 
#include <cstdlib>  
#include <iomanip>
using namespace std;

// знаходження числа типу float з межами від a до b
float RandomFloat(float a, float b) {
    float random = ((float)rand()) / (float)RAND_MAX;
    float diff = b - a;
    float r = random * diff;
    return a + r;
}

int main(int argc, char* argv[]) {
    srand(time(NULL));  
   float temp;
    // створення динамічного масиву дійсних чисел на 10 елементів  
    float* mas = new float[10]; 
    //заповнення масиву випадковими числами з масштабуванням від 1 до 10
    for (int i = 0; i < 10; i++)
        mas[i] = RandomFloat(0.0f, 10.0f); 

    cout << "mas = " << "  ";
    // візуалізація масиву
    for (int i = 0; i < 10; i++)
        cout << setprecision(2) << mas[i] << "  ";
    // сортування масиву
    for (int i = 0; i < 10; i++) 
        for (int j = 0; j < 10-i; j++)
            if (*(mas + j) < *(mas + j + 1)) {
                temp = *(mas + j);
                *(mas + j) = *(mas + j + 1);
                *(mas + j + 1) = temp;
    }
    cout << endl;
    cout << "mas = " << "  ";
    // візуалізація відсортованого масиву
    for (int i = 0; i < 10; i++)
        cout << setprecision(2) << mas[i] << "  ";
    // вивільнення пам’яті      
    delete[] mas;   
    cout << endl;
    return 0;
}
