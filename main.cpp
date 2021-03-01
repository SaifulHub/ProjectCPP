#include <iostream>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
using namespace std;
    int go;
    char name[20];
    unsigned long accNum;
    char type;
    int inAm;
    string pass,conpass;
class Allinfo{
public:
    void mainmenu(void);
    void crAcc(void);
    void disAcc(void);
    void credit(void);
    void debit(void);
    void checkB(void);
};

///////////////////////////////////////////////////
void Allinfo::mainmenu(){

    int select;
    system("cls");
		cout<<"\a\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. CREATE ACCOUNT";
		cout<< "\n\n\t02. YOUR INFO";
		cout<<"\n\n\t03. DEPOSIT AMOUNT";
		cout<<"\n\n\t04. WITHDRAW AMOUNT";
		cout<<"\n\n\t05. BALANCE CHECK";
        cout<<"\n\n\t06. EXIT";
		cout<<"\n\n\tSelect Your Option (1-6)\n\t";
		cin>>select;
		system("cls");
		switch(select)
		{
		case 1:
           crAcc();
		    break;

		case 2:
            disAcc();
            break;
        case 3:
            credit();
            break;
		case 4:
            debit();
            break;
		case 5:
            checkB();
            break;
		case 6:
            cout << "\n\n\n\n\n\n\t\t ***THANKS FOR USING OUR SYSTEM.***"<<endl;
            cout << "\t\t **********************************"<<endl;
            break;
        default:
            break;
		}
}
////////////////////////////////////////////////////////////////////
void Allinfo::crAcc(){
    cout << "\a\n\n\n\n\n";
    cout << "Enter your Name: ";
    cin >> name;
    cout << "\nEnter your phone number(without Zero): ";
    cin >> accNum;
    cout << "\nThis Number will used as your Account Number!"<<endl;
    cout << "\nEnter password : ";
    cin >> pass;
    cout << "Confirm Password : ";
    cin >> conpass;
        if(pass==conpass){
            cout << "Password Matched.\n";
            cout << "Enter account type('s' for savings & 'c' for current): ";
            cin >> type;
            cout << "Enter initial amount: ";
            cin >> inAm;
            cout << "Success!\nAccount created ."<<endl;
             cout << "==Select '0' to go Main Menu==";
            cin >> go;
            if(go==0)
                mainmenu();
            else {
                cout << "\aPassword Wrong.\n Start again.";
                system("pause");
                mainmenu();
            }

        }else
            mainmenu();
}

//////////////////////////////////////////////////////////////////
void Allinfo::disAcc(){
    cout << "\a\n\n\n\n\n";
    cout << "Name : "<<name<< endl;
    cout << "\nAccount number : "<<accNum<<endl;
    if(type=='s')
        cout << "\nYour account type is Savings."<<endl;
    if(type=='c')
        cout << "\nYour account type is Current."<<endl;
    cout << "\nYour current Balance is "<<inAm<< "-BDT"<<endl;
     cout << "==Select '0' to go Main Menu==";
            cin >> go;
            if(go==0)
                mainmenu();
            else
                return;
}

///////////////////////////////////////////////////////////////////
void Allinfo::credit(){
    int cre;
    unsigned long jAcc;
    string jPass;
        cout << "Enter account number: ";
        cin >> jAcc;
        cout << "Enter password :";
        cin >> jPass;
    if(accNum==jAcc && conpass==jPass){
        cout << "Enter diposit amount: ";
        cin >>cre;
        inAm+=cre;
        cout << "Your current balance is : "<<inAm<< " BDT"<<endl;
    } else
        mainmenu();
        cout << "==Select '0' to go Main Menu==";
            cin >> go;
            if(go==0)
                mainmenu();
            else
                return;
}

void Allinfo::debit(){
    int deb;
    unsigned long jAcc;
    string jPass;
        cout << "Enter account number: ";
        cin >> jAcc;
        cout << "Enter password :";
        cin >> jPass;
    if(accNum==jAcc && conpass==jPass){
        cout << "Enter amount to withdraw :";
        cin >> deb;
        inAm-=deb;
        cout << "Your current balance is : "<<inAm<< " BDT"<<endl;
    } else
        mainmenu();
        cout << "==Select '0' to go Main Menu==";
            cin >> go;
            if(go==0)
                mainmenu();
            else
                return;
}

void Allinfo::checkB(){
    int j;
    unsigned long jAcc;
    string jPass;
    cout << "Enter account number: ";
    cin >> jAcc;
    cout << "Enter password :";
    cin >> jPass;
    if(accNum==jAcc && conpass==jPass){
        cout << "\aYour current balance is : "<<inAm<< " BDT only."<<endl;
        cout << "\n\t==Select '0' to go Main Menu==";
            cin >> go;
            if(go==0)
                mainmenu();
            else
                cout << "==Select '0' to go Main Menu==";
                cin >> go;
                if(go==0)
                    mainmenu();
                else
                    return;
    }else
       cout << " Wrong Password.\n";
       cout << "==Select '0' to go Main Menu==";
        cin >> go;
        if(go==0)
            mainmenu();

}


//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void frontPage();

int main()
{
    system("color F0");
    frontPage();
    Allinfo info;
    info.mainmenu();

    return 0;
}

/////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
void frontPage()
{
	cout << "\a\n\n\n\n\n\n\n";
    cout << "\t\t\t\t * * * * * * * * * * * * \n";
    cout << "\t\t\t\t * * * * * * * * * * * * \n";
    cout << "\t\t\t\t * *    WELL-COME    * * \n";
    cout << "\t\t\t\t * *        to       * * \n";
    cout << "\t\t\t\t * *      ONLINE     * * \n";
    cout << "\t\t\t\t * * BANKING SERVICE * * \n";
    cout << "\t\t\t\t * * * * * * * * * * * * \n";
    cout << "\t\t\t\t * * * * * * * * * * * * ";
    cout << "\n\n\n\n\n\n\n";
	cout<<"\n\t\t\tShanto-Mariam University of Creative Technology.";
    cin.get();
}
