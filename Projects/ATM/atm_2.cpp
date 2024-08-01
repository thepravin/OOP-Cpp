
/* Transfer option*/

#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;
    int ifscCode, success; // --> new added

public:
    ATM(int bal, int code)
    {
        balance = bal;
        ifscCode = code;
    }

    int showBalance(void) { return balance; }

    bool getWithdraw(int amount, int code)
    {
        if (amount > balance || code != ifscCode)
            return false;
        balance = balance - amount;
        return true;
    }
    int getDeposite(int amount)
    {
        balance += amount;
        return balance;
    }

    int transfer(int amount, int code, ATM receiver)
    {
        if (code != ifscCode)
            return 0;
        success = getWithdraw(amount, code);
        if (success)
        {
            receiver.getDeposite(amount);
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // create atm obj
    ATM atm(1000, 601);

    int withAmount = 0, choice = 0, depoAmount = 0, tranAmount = 0, ifscCode = 0;
    char option;
    bool success;

    do
    {
        system("cls"); // clear terminal every time

        cout << "1. Check Balance" << endl
             << "2. Cash Withdraw" << endl
             << "3. Cash Deposit" << endl
             << "4. Cash Transfer" << endl
             << "5. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Your Bank Balance are : " << atm.showBalance() << " Rs." << endl;
            break;

        case 2:
            cout << "Your Available Bank Balance are : " << atm.showBalance() << " Rs." << endl;
            cout << "Enter Withdraw amount : ";
            cin >> withAmount;
            success = atm.getWithdraw(withAmount, 601);
            if (success)
            {
                cout << "Withdraw Successfully...." << endl;
                cout << "Your Current Bank Balance are : " << atm.showBalance() << " Rs." << endl;
            }

            else
            {
                cout << "Insufficient Balance !!!" << endl;
            }
            break;

        case 3:
            cout << "Your Available Bank Balance are : " << atm.showBalance() << " Rs." << endl;
            cout << "Enter Deposite Amount : ";
            cin >> depoAmount;
            cout << "Your Current Bank Balance are : " << atm.getDeposite(depoAmount) << " Rs." << endl;
            break;

        case 4:
            cout << "Enter the Amount to Transfer : ";
            cin >> tranAmount;
            cout << "Enter IFSC code : ";
            cin >> ifscCode;
            success = atm.transfer(tranAmount, ifscCode, atm);
            if (success)
            {
                cout << "Transfer Successfully..." << endl;
            }
            else
            {
                cout << "Insufficient Balance !!!" << endl;
            }
            break;

        default:
            cout << "Please Enter Valid Option ";
            break;
        }

        cout << endl
             << "You want to continue [Y/N] : ";
        cin >> option;

    } while (option == 'y' || option == 'Y');

    return 0;
}