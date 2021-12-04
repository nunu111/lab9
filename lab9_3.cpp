/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include <iostream>
#include <string>
using namespace std;

double age,height,money;
string status;

int main ()
{


    cout << "Enter your age: ";
    cin >> age;
    if (age <= 20)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 160)
        {
            status = "UNFRIEND";
        }
        else if (height < 175)
        {
             status = "FRIEND";
        }
        else
        {
            cout << "Enter your property: ";
            cin >> money;
            if (money > 69e6)
            {
               status = "MARRIED";
            }
            else
                 status = "ONE-NIGHT-STAND";
        }
    }
    else if (age < 30)
    {
        cout << "Enter your property: ";
        cin >> money;
        if (money > 10e6)
        {
            status = "BEST FRIEND";
        }
        else
            status = "UNFRIEND";
    }
    else
        status = "UNFRIEND";
    cout << "Your status = " << status;
}
