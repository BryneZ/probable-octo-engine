#include <iostream.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));


    
    
GAME:
    int num = rand() % 100;
    int yes_game = 0;
    int times = 10;
    int in = 0;
    while ( !(times == 0))
    {
        cout << "you have " << times << "times left" << endl;
        cout << "please guess a number(0-99)" << endl;
       
        cin >> in;
        if (in > num)
        {
            cout << "the number is toooo big" << endl;
        }
        else if (in < num) { cout << "the number is tooooooooooo small" << endl; }
        else if (in = num) {
            break;
        }
        
       
       

        times -= 1;

    }
    if (in ==num)
    {
        cout << "you Win" << endl;
    }
    else if (times ==0)
    {
        cout << "you lose" << endl;
    }
    cout << "do you want to play anouther round?(1 for yes, 0 for no)" << endl;
    
    cin >> yes_game;
    if (yes_game == 1)
        goto GAME;
    return 0;
}