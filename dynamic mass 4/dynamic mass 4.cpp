//
// Створіть двовимірний динамічний масив із випадковими дійсними значеннями діапазону [-1;1]. 
// Замініть значення, що менші від -0.5 на середнє арифметичне усіх значень масиву. 
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

int main(int argc, char* argv[])
{
    srand(time(NULL)); 
   float summ = 0;
 // динамічне створення двовимірного масиву дійсних чисел на десять елементів    
    float** mas = new float* [2];     
    for (int count = 0; count < 2; count++)
        mas[count] = new float[5];     
 // заповнення масиву    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++)
            mas[i][j] = RandomFloat( -1.0f, 1.0f);
 // виведення масиву    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++)
            cout << '\t' << setprecision(2) << mas[i][j] << '\t';
        cout << endl;
    }  
    // пошук середнього арифметичного елементів масиву    
    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 5; j++)
            summ += mas[i][j];
    summ /=  10.0F;
    cout << summ << endl;
    // заміна елементів та виведення масиву    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (mas[i][j] < -0.5) mas[i][j] = summ;
            cout << '\t' << setprecision(2) << mas[i][j] << '\t';
        }
        cout << endl;
    }
 // видалення двовимірного динамічного масиву    
    for (int count = 0; count < 2; count++)
        delete[] mas[count];
    return 0;
}

