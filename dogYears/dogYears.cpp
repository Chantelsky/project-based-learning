#include <iostream>
using namespace std;

int main()
{
    //declaring a variable and set it to my dog's age
    int dog_age = 1;
    int early_years, later_years, human_years;
    string dog_name;

    cout << "dog Name: ";
    cin >> dog_name;
    cout << "How old is your dog? ";
    cin >> dog_age;

    early_years = 21;
    //Each year of a dogs life counts as 4 human years
    later_years = (dog_age - 2) * 4;
    human_years = early_years + later_years;

    cout << "My name is " << dog_name << "! woof woof, I am " << human_years << " years old in human years.";
}