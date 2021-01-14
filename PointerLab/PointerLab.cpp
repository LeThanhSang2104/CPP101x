#include<iostream>
#include <string.h>

using namespace std;

void PassByValue(int a)
{
    cout << "PassByValue" << endl;
    int giatrimoi = a;
    cout << "gia tri moi" << giatrimoi << endl;
}

void PassByRef(int* a)
{
    cout << "PassByRef"<< endl;
    *a = 50;
    cout <<  *a;
}

int main (void)
{
    int num1 = 3;
    int* pNum;
    *pNum = 5;
    PassByValue(num1);
    cout << "Gia tri cua num1" << num1 << endl;
    PassByRef(pNum);
    system("pause");
    return 0;
}