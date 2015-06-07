#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int a, j, l;
    double result, k, x, znak;
    j = 50;
    cout << "Hello!" << endl;
    double del;
    string tchk; //?????
    string dv;//?????????
    tchk = ".";
    cout << dv;
    dv = ":";
    cout << "Welcom to the Kurmakaew OS" << endl;
    SYSTEMTIME st;
    GetSystemTime(&st);
    cout << "data and time" << endl << st.wYear << tchk << st.wMonth << tchk << st.wDay << endl << st.wHour + 4 << dv << st.wMinute << dv << st.wSecond << endl;

    // Sleep(1000);
    cout << "please, enter your login" << endl;
    string login;
    cin >> login;
    if (login == "94")
    {
        cout << "okey master";
    }
    else
    {
        cout << "please, enter your password" << endl;
        string password;
        cin >> password;
        cout << "registration complite!"<<endl;
        system("pause");
        cout << "loading 0%" << endl;
        //Sleep(500);
        cout << "loading 1%" << endl;
        //Sleep(500);
        cout << "loading 4%" << endl;
        //Sleep(1000);
        cout << "loading 25%" << endl;
        //Sleep(500);
        cout << "loading 26%" << endl;
        //Sleep(500);
        cout << "loading 35%" << endl;
        //Sleep(500);
        cout << "loading 45%" << endl;
        for (int i = 50; i < 99; i++)
        {
            j = j - 1;
            cout << "loading " << i << "%" << endl;
            //Sleep(j);
        }
        //Sleep(1000);
        cout << "loading 99%" << endl;
        //Sleep(5000);
        cout << "CRITICAL SYSTEM EROR" << endl;
        //Sleep(1000);
        cout << "CRITICAL SYSTEM E...";
        //Sleep(1000);
        cout << "CRITICAL SYSTE..." << endl;
        //Sleep(1000);
        cout << "CRIT..." << endl;
        //Sleep(3000);
        for (int i = 0; i < 100; i++)
        {
            cout << ("12374892u3r9834f198u93j98hf9843jf091j3d9weurlai7qw473wi47aiw4ykwea74kejw47aawe74weal74iawe47oiwea74weak74uiwea4iuweat57843gui3hr34ut9834ht8");
            cout << ("sdahfjsdahfuf9034ur98u39240j09jf0934j0f9k45g0,5b0-n04-=bn=-5mbmmvmcmc,-c,c,x-,-=x-.213x.-=42314x.231-=4x0..-0-.=..x1=.-=210.4x-2=3x.2=3-x0.");
            cout << ("fnnv34n v0 v 342 v432 v  42 5245 3 5345b43 5345 345 34 534 4b b 423b 342 b342 b5 4b5 432 b52 345f 3 45fc 2  342 543   534 5 3 v 35  v54 543");
            cout << (" we f wewr rnwuoituroitytryuoiyuiuiuiuiuiuiuiuiuiuiuiuiuiuiuotiortoioopopopoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo");
        }
    }
    cout << endl << endl << endl << endl << endl << endl;
    cout << "loading complite" << endl;
    int app,again;
    again = 1;
    while (again == 1)   // ????? ? ????, ????? ????????? ?????
    {
        cout << "press button:" << endl << "1 to include calculator  " << endl << "2 play GTA mini (lite edition) " << endl;
        cin >> app;

        if (app == 1)
        {
            cout << "welcom to the calculator" << endl << "tell me please fist number" << endl;
            cin >> k;
            cout << "okey" << endl << "this is " << k << endl << "please second number" << endl;
            cin >> x;
            cout << " okey " << x << endl;
            cout << " press 1 to +,    2 to -,     3 to *,    4 to /,      11 to ^ ";
            cin >> znak;
            if (znak == 1)
            {
                cout << k + x;
            }

            else if (znak == 2)
            {
                cout << k - x;
            }
            else if (znak == 3){
                cout << k*x;
            }
            else if (znak == 4)
            {
                cout << k / x;
            }
            else if (znak == 11)
            {
                cout << pow(k, x);
            }

        }
        else if (app == 2)
        {
            cout << "FIRE to ballas !" << endl << "for fire press any key" << endl;
            int shot;
            cin >> shot;
            cout << endl << " \(*_*)                                    O_O     " << endl;
            cout << "   ()>                                    <()    " << endl;
            cout << "   /|                                     l|        " << endl;
            Sleep (1000);

            cout << endl << " \(*_*)                                    O_O     " << endl;
            cout << "   ()> -                                  <()    " << endl;
            cout << "   /|                                     l|        " << endl;
            Sleep(1000);
            cout << endl << " \(*_*)                                    O_O     " << endl;
            cout << "   ()>           -                        <()    " << endl;
            cout << "   /|                                     l|        " << endl;
            Sleep(1000);
            cout << endl << " \(*_*)                                    O_O     " << endl;
            cout << "   ()>                         -          <()    " << endl;
            cout << "   /|                                     l|        " << endl;
            Sleep (1000);
            cout << endl << " \(*_*)                                    O_O     " << endl;
            cout << "   ()>                                -   <()    " << endl;
            cout << "   /|                                     l|        " << endl;
            Sleep(1000);
            cout << endl << " \(*_*)                                         " << endl;
            cout << "   ()>                                       " << endl;
            cout << "   /|                                     X_X () =        " << endl;



        }
        cout << endl << "IF YOU LIKE THIS OS, DONATE AT QIVI WALLET AT NUMBER 89168186587" << endl;
        int antiCloseWindow;
        cout << "to back in work table enter 1   \   to close programm enter 2" << endl;
        cin >> again;
        system("cls");

    }

    return 0;
}

