// Чертоусова ПЕ
// 22.10.2022
// Задание 1 ДЗ

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int A;
    cin >> A;
    while (A > 0)
    {
        count++;
        A /= 10;
    }
    cout << count << endl;
    if (A == 0) {count = 1;
}
    
    
}


