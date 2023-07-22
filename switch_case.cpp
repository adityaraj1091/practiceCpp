#include <iostream>
using namespace std;
class check
{
    int i, n, f;

public:
    check();
    void fact();
    void prime();
    void odd();
    void exit();
};

check::check()
{
    f = 1;
}
void check::fact()
{
    cout << "enter the no: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("factorial of %d: %d", n, f);
}
void check::prime()
{
    cout << "enter the no: ";
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime no";
            break;
        }
    }
    if (i == n)
        cout << n << " is prime no";
}
void check::odd()
{
    cout << "enter the mo: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even no";
    else
        cout << n << " is odd no";
}
void check::exit()
{
}
int main()
{
    check c;
    int choice;
    cout << "1. factorial" << endl
         << "2. prime or not" << endl
         << "3. odd or even" << endl
         << "4. exit";
    cout << "\nenter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        c.fact();
        break;

    case 2:
        c.prime();
        break;

    case 3:
        c.odd();
        break;

    case 4:
        c.exit();
        break;
    }
    cout << endl
         << "Thank you for using my app";
    return 0;
}