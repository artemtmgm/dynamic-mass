#include <iostream> // в заголовному файлі <ctime> міститься прототип функції time() 
#include <ctime> 
#include <cstdlib> //бібліотека для генератора випадкових значень 
// в заголовному файлі <iomanip> міститься прототип функції setprecision() для задання кількості знаків після коми 
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
    srand(time(NULL)); // генерація випадкових значень    
    float *mas = new float [10]; // створення динамічного масиву дійсних чисел на 10 елементів  

    for (int i = 0; i < 10; i++)            
        mas[i] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //заповнення масиву випадковими числами з масштабуванням від 1 до 10
   
    cout << "mas = " << endl;  

    for (int i = 0; i < 10; i++)            
        cout << setprecision(2) << mas[i] << endl;

    delete[] mas; // вивільнення пам’яті        
    cout << endl;    
    return 0; 
}
