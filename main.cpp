#include <iostream>
using namespace std;

int main ()
{
    int num_int;
    int num_input[20];
    int sum = 0;
    cout << "How many integers do you have? (Max 20)\n";
    cin >> num_int;
    if (num_int <= 0 || num_int > 20)
    {
        cout << "You must enter a number in between 1 and 20\n";
        return 0;
    }
    for (int counter =0; counter < num_int; counter++)
    {
        cout << "Enter element for subscript " << counter << endl;
        cin >> num_input[counter];
    }
    cout << "Here are all of those numbers\n";
    for (int outer = 0; outer < num_int; outer++)
    {
        cout << num_input[outer]<< endl;
    }
    for (int inner = 0; inner < num_int; inner++)
    {
        sum += num_input[inner];
    }
    cout<< "The sum of these numbers is "<<sum<<endl;
    return 0;
}
