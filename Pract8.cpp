#include <iostream>
#include <cmath>
using namespace std;
//**********************/ simple and coumpound interest_________________________________________________________________

int main()
{
    float p, r, t;

    cout << "Enter the Principle amount : " << endl;
    cin >> p;
    cout << "Enter year to invest :" << endl;
    cin >> t;

    cout << "Enter your  Interest" << endl;
    cin >> r;
    float sim = (p * r * t) / 100;

    cout << "Your  simple Interest :" << sim << endl;
    cout << "Your Principle with simple Interest :" << (p + sim);

    // ------------------------------------------------------------------------------------------------>

    float amount = p * pow((1 + r / (100)), t);

    float compoundInterest = amount - p;
    cout << "\n\n\nTotal Amount in coumpound interest: " << amount << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    //------------------------------------------------------------------------------------------------>

    float prinp, rat, tim;

    cout << "\n\n\nPrincipal: " << endl;
    cin >> prinp;

    cout << "Rate: " << endl;
    cin >> rat;

    cout << "Time in years" << endl;
    cin >> tim;

    float temp;
    temp = prinp;

    for (int i = 1; i <= tim; i++)
    {
        prinp = prinp + prinp * (rat / 100);
    }

    float amou = prinp;

    float compound = amou - temp;
    cout << "Total Amount in coumpound interest : " << amou << endl;
    cout << "Compound Interest: " << compound << endl;

    return 0;
}