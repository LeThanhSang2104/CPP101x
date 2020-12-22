
/*
    @file:
    @date time:
    @brief:
    Author: SangLT
*/

#include<iostream>
#include <string.h>

using namespace std;
#define MSCN  12345678


/*///////////////////////////////////////////////////
                    GLOBAL VARIABLE
////////////////////////////////////////////////////*/
void login(void);
void showMenu(void);




int main()
{
    system("cls");
    return 0;
}

void login(void)
{
    // Nhap vao ma so ca nhan
    cin >> mscn;
    // Hien thi man hinh ma so ca nhan
    cout << "NHAP MA SO CA NHAN:" << mscn << endl;
    // Kiem tra ma so ca nhan nhap vao co dung hay khong, 
    // Neu dung sang man hinh MH-2
    if (mscn == MSCN)
    {
        showMenu();
    }
    // Sai yeu cau nhap lai
    else
    {
        cout << "Nhap lai cho den khi nhap dung ma so ca nhan" << endl;
    }
     
}