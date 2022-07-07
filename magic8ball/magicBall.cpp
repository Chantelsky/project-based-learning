#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    cout << "Magic 8-ball Says: \n";

    srand(time(NULL));
    int answer = rand() % 10;

    cout << answer << "\n";
    switch (answer)
    {
    case 0:
        cout << "No. Not really. /n";
        break;
    case 1:
        cout << "Don`t count on it. /n";
        break;
    case 2:
        cout << "My reply is no. /n";
        break;
    case 3:
        cout << "Reply hazy, try again. /n";
        break;
    case 4:
        cout << "Most Likely. /n";
        break;
    case 5:
        cout << "It is certain. /n";
        break;
    case 7:
        cout << "Very doubtful. /n";
        break;
    case 8:
        cout << "As I see it, yes. /n";
        break;
    case 9:
        cout << "Yes - definitely. /n";
        break;
    default:
        cout << "Ask again later. /n";
        break;
    }
}