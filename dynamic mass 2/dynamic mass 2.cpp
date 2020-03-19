#include <iostream> 
#include <ctime> 
#include <cstdlib> 
#include <iomanip> 
using namespace std;

int main(int argc, char* argv[])
{
    srand(time(NULL)); // генерація випадкових чисел 
                       // динамічне створення двовимірного масиву дійсних чисел на десять елементів    
    float **mas = new float* [2]; // два рядка в масиві    
    for (int count = 0; count < 2; count++)       
        mas[count] = new float [5]; // і п’ять стовпців    
                                    // заповнення масиву    
    for (int i = 0; i < 2; i++)        
        for (int j = 0; j < 5; j++)            
            mas[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //заповнення масиву випадковими числами з масштабуванням від 1 до 10    
                                                                      // виведення масиву    
    for (int i = 0; i < 2; i++)    {       
        for (int j = 0; j < 5; j++)            
            cout << '\t' <<setprecision(2) << mas[i][j] << '\t';        
        cout << endl;    
    }    // видалення двовимірного динамічного масиву    
    for (int count = 0; count < 2; count++)        
        delete [] mas [count];
    return 0;
}
