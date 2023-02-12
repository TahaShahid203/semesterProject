#include <iostream>
#include <stdio.h>
using namespace std;

void header();

main()
{
    char c;
    system("cls");
    header();

    cout << "\t" << "Number of products ordered: 5" << endl;

    cout << "number: " << "\t" << "Flavor" << "\t"  << "\t" << "Price per packet" << "\t" << "Number of packets" << "\t"  << "Arrival time" << endl;
    cout << "1" << "\t"  << "\t" << "Flamin' Hot" << "\t"  << "Rs. 20" << "\t"  << "\t"  << "\t" << "20" << "\t"  << "\t"  << "\t" << "2:30pm 04/02/23" << endl;
    cout << "2" << "\t"  << "\t" << "Bites" << "\t"  << "\t" << "Rs. 50" << "\t"  << "\t"  << "\t" << "20" << "\t"  << "\t"  << "\t" << "2:30pm 04/02/23" << endl;
    cout << "3" << "\t"  << "\t" << "Crunchy" << "\t"  << "\t" << "Rs. 100" << "\t"  << "\t"  << "\t" << "20" << "\t"  << "\t"  << "\t" << "2:30pm 04/02/23" << endl;
    cout << "4" << "\t" << "\t" << "Flamin' Hot" << "\t" << "Rs. 50" << "\t"  << "\t"  << "\t" << "20" << "\t"  << "\t"  << "\t" << "2:30pm 04/02/23" << endl;
    cout << "5" << "\t" << "\t" << "Crunchy" << "\t"  << "\t" << "Rs. 50" << "\t"  << "\t"  << "\t" << "20" << "\t"  << "\t"  << "\t" << "2:30pm 04/02/23" << endl;
    

    


    cout << "\t" << "Press 0 to return" << endl;

    cin >> c;

}

void header()
{
    cout << "\t" <<"\t" << "*********************************************************" << endl;
    cout << "\t" <<"\t" << "*********************************************************" << endl;
    cout << "\t" <<"\t" << "*************   Cheetos Management system   *************" << endl;
    cout << "\t" <<"\t" << "*********************************************************" << endl;
    cout << "\t" <<"\t" << "*********************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

}