
#include <iostream>
#include <string>
using namespace std;

//---------------------syntax------ --------------//
int choice;
string email, pass;
string globalemail, globalpass;
int row;
int space;
int boxs;
string many;
int num;
//------------------------------------------------//

bool login(){
    system("cls");
    cout << "Log in your Account" << endl;
    cout << endl;

    cout << "Enter your Email: ";
    getline(cin, email);
    if(email == globalemail){
        cout << "Enter your Password: ";
        getline(cin, pass);

        if (pass == globalpass) {
            return true;
        } else {
            cout << "Incorrect Password!" << endl;
        }
    } else {
        cout <<"Unknown Account" << endl;
        cout << "---------------------------------" << endl;
    }
    return false;
}

void createacc(){
    system("cls");
    cout << "Create an Account" << endl;
    cout << endl;
    
    cout << "Enter your Email: ";
    getline(cin, globalemail);
    
    cout << "Enter your Password: ";
    getline(cin, globalpass);
    cout << "You successfully created an account!" << endl;
    cout << "-----------------------------------------------" << endl;
}

void triangle() {
    system("cls");
    do {
        cout << "Enter the number of rows (0 to exit): ";
        cin >> row;
        if (row == 0) break;

        for (int i = 1; i <= row; ++i) {
            for (space = row; space > i; space--)
                cout << " ";
            for (int b = 0; b < i; ++b)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    } while(row != 0);
    system("cls");
}

void box(){
    system("cls");
    do {
        cout << "Enter Number of box (0 to exit): ";
        cin >> boxs;
        if (boxs == 0) break;

        for (int i = 0; i < boxs; i++) {
            for (int a = 0; a < boxs; a++) {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    } while (boxs != 0);
    system("cls");
}

void loops(){
    system("cls");
    cout << "---------loop----------" << endl;
    cout << endl;
    cin.ignore();
    cout << "Enter any Word or Sentence: ";
    getline(cin, many);
    cout << "Enter number: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        cout << i << ". " << many << endl;
    }
    cout << "Type Any key to go to main menu...";
    cin.ignore();
    cin.get();
    system("cls");
}

void todo() {
    system("cls");
    const int count = 99;
    string task[count];
    int countmo = 0;
    char choose;

    do {
        system("cls");
        cout << "To do List" << endl;
        cout << endl;
        cout << "Task " << (countmo + 1) << ": ";
        cin.ignore();
        getline(cin, task[countmo]);
        countmo++;

        cout << "More tasks (y/n): ";
        cin >> choose;
    } while((choose == 'y' || choose == 'Y') && countmo < count);

    system("cls");
    cout << "Your tasks:" << endl;
    for (int i = 0; i < countmo; i++) {
        cout << i+1 << ": " << task[i] << endl;
    }
    cout << "Press any key to return to the main menu...";
    cin.ignore();
    cin.get();
    system("cls");
}

void menu(){
    system("cls");
    int doo;
    do {
        cout << "Welcome to main menu!" << endl;
        cout << endl;
        cout << "[1] Triangle" << endl;
        cout << "[2] Box" << endl;
        cout << "[3] Loop" << endl;
        cout << "[4] To Do List" << endl;
        cout << "[0] Exit Program" << endl;

        cout << "What do you want to do? ";
        cin >> doo;

        switch (doo) {
            case 0:
                break;
            case 1:
                triangle();
                break;
            case 2:
                box();
                break;
            case 3:
                loops();
                break;
            case 4:
                todo();
                break;
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    } while(doo != 0);
    system("cls");
    cout << "--------------------Exit Program Successfully-----------------------" << endl;
}

int main(){
    while(true){
        cout << endl;
        cout << "Welcome to Shesh!" << endl;
        cout << endl;
        cout << "[1] Login" << endl;
        cout << "[2] Create an Account" << endl;
        cout << endl;
        cout << "What do you want to do? ";
        cin >> choice;
        cin.ignore();

        if (choice == 1){
            if (login()){
                menu();
                break;
            }
        }
        else if (choice == 2){
            createacc();
        }
        else{
            system("cls");
            cout << "Invalid Choice!" << endl;
            cout << "--------------------------------" << endl;
        }
    }
    return 0;
}
