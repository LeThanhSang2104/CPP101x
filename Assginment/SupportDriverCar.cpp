
/*
    @file:
    @date time:
    @brief:
    Author: SangLT
*/


/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include<iostream>
#include <string.h>

using namespace std;

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define MSCN  12345678


/*================================================================================================
                                        GLOBAL VARIABLE
=================================================================================================*/

int mscn;

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
void login(void);
void showMenu(void);



/*================================================================================================*/
/**
* @brief     Main function.
* @details   Check requirements regarding the Autosar APIs.
*/
/*================================================================================================*/
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

void showMenu(void)
{

}