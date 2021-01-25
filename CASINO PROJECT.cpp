#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;

void rules();
int main()
{
    int amt,bidamt,guess,dice;
    char choice;
    srand(time(0));
    string name;
    cout<<" \n\n\n------------------------------------------------CASINO GAME-------------------------------------------------------------\n\n\n";
    cout<<"enter your name: ";
    getline(cin,name);
    cout<<"\nenter the amount you want to deposit:$ ";
    cin>>amt;
    do
    {
        system("cls");
        rules();
        do
        {
            cout<<"\n\nare you ready to play "<<name<<"!"<<"\n";
            cout<<"\n"<<"enter bid amount:$  ";
            cin>>bidamt;
            if(bidamt>amt)
                cout<<"you cannot bid more than original amount"<<"\n\n"<<"reenter amount"<<"\n\n";
        }while(bidamt>amt);
            do
            {
                cout<<"guess the number: ";
                cin>>guess;
                if(guess<0||guess>10)
                    cout<<"enter numbers between 1 to 10"<<"\n\n"<<"reenter number";
            }while(guess<0||guess>10);
            dice=rand()%10+1;
            if(dice==guess)
            {
                cout<<"congrats you have won"<<bidamt*10<<"$";
                amt=amt+bidamt*10;
            }
                else
                {
                    cout<<"sorry you lose: "<<bidamt<<"$";
                amt=amt-bidamt;
                }
                cout<<"\n"<<"winning number was: "<<dice<<"\n";
                cout<<name<<" your remaining amount is:$ "<<amt<<"\n";
                if(amt==0)
                {
                    cout<<"sorry you cannot play further\n";
                    break;
                }
                cout<<"do you want to play further?(Y/N): ";
                cin>>choice;
    }while(choice=='y'||choice=='Y');
    cout<<"\n\n"<<"thanks for playing your current amount is"<<amt<<"$"<<"\n\n";
    return 0;
}

    void rules()
    {
        system("cls");
        cout<<"\n"<<"GAME RULES"<<"\n";
        cout << "\n. Choose Number Between 1 To 10";
        cout << "\n. Winning Amount Will Be 10 Times Of Bid Amount";
        cout << "\n. Loose Amount Will Be Biding Amount";
        cout << "\n. You Can Leave A Game Any Time";

    }
