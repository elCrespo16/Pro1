#include <iostream>
#include <string>
using namespace std;
int main () {
    int e , c , v ;
    cin >> e >> c;
    v = e / 500;
    e = e % 500;
    cout << "Bitllets de 500 euros:" << " " << v << endl;
    v = e / 200;
    e = e % 200;
    cout << "Bitllets de 200 euros:" << " " << v << endl;
    v = e / 100;
    e = e % 100;
    cout << "Bitllets de 100 euros:"<< " " << v  << endl;
    v = e / 50;
    e = e % 50;
    cout << "Bitllets de 50 euros:"<< " " << v  << endl;
    v = e / 20;
    e = e % 20;
    cout << "Bitllets de 20 euros:"<< " " << v  << endl;
    v = e / 10;
    e = e % 10;
    cout << "Bitllets de 10 euros:"<< " " << v  << endl;
    v = e / 5;
    e = e % 5;
    cout << "Bitllets de 5 euros:"<< " " << v  << endl;
    v = e / 2;
    e = e % 2;
    cout << "Monedes de 2 euros:" << " "<< v <<  endl;
    v = e / 1;
    e = e % 1;
    cout << "Monedes de 1 euro:"<< " " << v  << endl;
    v = c / 50;
    c = c % 50;
    cout << "Monedes de 50 centims:"<< " " << v  << endl;
    v = c / 20;
    c = c % 20;
    cout << "Monedes de 20 centims:"<< " " << v  << endl;
    v = c / 10;
    c = c % 10;
    cout << "Monedes de 10 centims:"<< " " << v  << endl;
    v = c / 5;
    c = c % 5;
    cout << "Monedes de 5 centims:" << " " << v  << endl;
    v = c / 2;
    c = c % 2;
    cout << "Monedes de 2 centims:" << " " << v  << endl;
    v = c / 1;
    c = c % 1;
    cout << "Monedes de 1 centim:" << " " << v  << endl;
}