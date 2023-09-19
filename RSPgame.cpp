#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    char player_name[30];
    cout << "Enter your name :";
    cin >> player_name;
    int rounds;
    system("cls");
    cout << "How many rounds do you like to play : ";
    cin >> rounds;
    int player_score = 0, computer_score = 0;
    for (int round = 1; round <= rounds; round++)
    {
        system("cls");
        int player_choice, computer_choice;
        cout << "Round Number" << round << "/" << rounds << endl;
        cout << player_name << " 's Score = " << player_score << endl;
        cout << "Computer score = " << computer_score << endl;
        cout << "1). Rock" << endl;
        cout << "2). Paper" << endl;
        cout << "3). Scissors" << endl;
        cout << "Enter Your choice :";
        cin >> player_choice;
        do
        {
            srand(time(0));
            computer_choice = (rand() % 3) + 1;
        } while (player_choice != 1 && player_choice != 2 && player_choice != 3);
        if (player_choice == 1 && computer_choice == 3)
        {
            cout << "Player wins" << endl;
            player_score++;
        }
        else if (player_choice == 2 && computer_choice == 1)
        {
            cout << "Player wins" << endl;
            player_score++;
        }
        else if (player_choice == 3 && computer_choice == 2)
        {
            cout << "Player wins" << endl;
            player_score++;
        }
        else if (player_choice == computer_choice)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
            computer_score++;
        }
        cout << "Press any key to continue..." << endl;
        getch();
    }
    if (player_score == computer_score)
    {
        cout << "Match is Drawn" << endl;
    }
    else if (player_score > computer_score)
    {
        cout << player_name << "You won the match" << endl;
    }
    else
    {
        cout << "Computer Won the match" << endl;
    }
    return 0;
}