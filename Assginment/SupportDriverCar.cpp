
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
int luachon = 0;
int luachon_R_D;
unsigned int tocdo;

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
void login(void);
void ShowMenu(void);
void ShowMenu_R_D(void);
void Welcome(void);
void ChonHanhTrinh_P_N(void);
void ChonHanhTrinh_R_D(void);
void CanhBao(unsigned int tocdo);



/*================================================================================================*/
/**
* @brief     Main function.
* @details   Check requirements regarding the Autosar APIs.
*/
/*================================================================================================*/
int main()
{
    system("cls");
    login();
    system("pause"); 
    return 0;
}

void login(void)
{
    do
    {
        cout << "NHAP MA SO CA NHAN: ";
        cin >> mscn;
        // Kiem tra ma so ca nhan nhap vao co dung hay khong, 
        // Neu dung sang man hinh MH-2
        if (mscn == MSCN)
        {
            Welcome();
        }
    
        // Sai yeu cau nhap lai
        else
        {
            cout << "Nhap lai cho den khi nhap dung ma so ca nhan" << endl;

        }
    } while (mscn != MSCN);
    
  
}

void Welcome(void)
{
    
    system("cls");
    cout << "XIN CHAO " << mscn << endl;
    cout << "XIN MOI LUA CHON: " << endl;
	ShowMenu();
}

void ShowMenu(void)
{
    do 
    {
        //your code here
		cout << " 1. P" << endl;                // Chuyen so sang so P, do va dung xe
		cout << " 2. R " << endl;               // Chuyen so sang so R, de lui xe
		cout << " 3. N " << endl;               // Chuyen so sang so N, tam dung xe
		cout << " 4. D " << endl;               // Chuyen so sang so D, tien xe
		cout << " 5. POWER OFF " << endl;       // Tat may dung hoat dong

		cin >> luachon;
    }while(luachon < 1 || luachon > 5);

    switch (luachon) {
	case 1:
        ChonHanhTrinh_P_N();
		break;
	case 2:
		ChonHanhTrinh_R_D();
        
		break;
	case 3:

        ChonHanhTrinh_P_N();
		break;
	case 4:
		ChonHanhTrinh_R_D();
        break;
    case 5: 
        cout << "POWER OFF" << endl;
        break;
    default:
        break;
    }
}
void ChonHanhTrinh_P_N(void)
{
    system("cls");
    cout << "Nhap toc do cua xe: " ;
    cin >> tocdo;
    system("cls");
    if (tocdo == 0)
    {
        cout << "DA VE SO P " << endl;
        cout << "CHU Y SU DUNG PHANH TAY DE DAM BAO AN TOAN " << endl;
        ShowMenu();

    }
    else
    {
        cout << "HAY CHAC CHAN DA DUNG VA VAN TOC LA 0 KM/H " << endl;
        ShowMenu();
    } 
    system("pause");
}

void ChonHanhTrinh_R_D(void)
{
    system("cls");
    
        tocdo = 7;
        cout << "-------- TOC DO HIEN TAI: " << tocdo << " km/h" << endl;
        ShowMenu_R_D();

}

void ShowMenu_R_D(void)
{
    cout << "MOI LUA CHON: " << endl;
    do 
    {
        //your code here
		cout << " 1: TANG TOC" << endl;         
		cout << " 2: GIAM TOC " << endl;              
		cout << " 3: PHANH " << endl;               
		cout << " 4: TRO VE MENU " << endl;               
        cout << ">> ";
		cin >> luachon_R_D;
    }while(luachon_R_D < 1 || luachon_R_D > 4);

    switch (luachon_R_D) {
	case 1:
        
        tocdo = tocdo + 5;
        cout << "-------- TOC DO HIEN TAI: " << tocdo << " km/h" << endl;
        CanhBao(tocdo);
  
        ShowMenu_R_D();
		break;
	case 2:
		tocdo = tocdo - 5;
        cout << "-------- TOC DO HIEN TAI: " << tocdo << " km/h" << endl;
        ShowMenu_R_D();
		break;
	case 3:
        cout << "DUNG XE " << endl;
        tocdo = 0;
		break;
	case 4:
		ShowMenu();
        break;
    default:
        break;
    }
}

void CanhBao(unsigned int tocdo)
{
    if (luachon == 2)
        {
            if (tocdo > 20)
            {
                cout << "TOC DO NGUY HIEM, BAN NEN GIAM TOC DO " << endl;
            }
        }

        else if (luachon == 4)
        {
            if (tocdo > 60)
            {
                cout << "TOC DO NGUY HIEM, BAN NEN GIAM TOC DO " << endl;
            }
        }

        else
        {
            /* code */
        }
}