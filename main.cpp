#include <iostream>
#include  <ctime>
using namespace std;

int main()
{
    cout << "Welcome to the Guessing Game!" << endl;
    srand(time(0));
    int secret = rand() % 100 + 1;

    int guess = -1;
        while(guess != secret)
        {
        cout << "Enter your guess 1-100 :";
    
        cin >> guess;
        if(guess < secret)
            cout << "Guess is too low"<< endl;
        else if (guess > secret)
            cout << "Guess is too high" << endl;
        else
            cout << "GUess is correct!" << endl;
        }


    return 0;
}