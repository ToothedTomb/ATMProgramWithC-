#include <iostream>
using namespace std;
//Free and open source. Only on Linux.
//End of life 27th of June 2022.
void showMenu(){
    cout<<"**********MENU**********" << endl;
    cout << "ATM program made by Jonathan Steadman." << endl;

    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit program" << endl;

    cout<<"************************" << endl;

}
int main()
{
    //Check balence, deposit money, withdraw money, show menu
    int option;
    double balance=700;
    do{
    showMenu();
    cout<<"option: ";
    cin >> option;
    system("cls");
    switch (option){
        case 1:cout<<"Balance is: " << "£"<< balance << endl; break;
        case 2:cout<< "Deposit amount:";
            double depositAmount;
            cin >> depositAmount;
            balance+= depositAmount; 
            break;
        case 3:cout<< "Withdraw amount:";
            double WithdrawAmount;
            cin >> WithdrawAmount;
            if (WithdrawAmount<=balance)
                balance-= WithdrawAmount; 
            else
                cout<<"You have not got the enough money"<< endl;
            break;
    }
    } while (option!=4);
    system("pause>0");
}