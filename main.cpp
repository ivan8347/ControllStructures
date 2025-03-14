#include<iostream>
#include<conio.h>
#include<Windows.h>
#include <iomanip>
//#define BINARY
//#define PASCAL
//#define ROMB          // ромб чуть-чуть проще ¬ашего
#define HEX
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::setw;

void main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "¬ведите велечину пирамиды :";    
    cin >> n;
#ifdef ROMB
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << setw(n - i) << '/' << setw(i * 2 + 1) << '\\' << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << setw(n - i) << '\\' << setw(i * 2 + 1) << '/' << endl;

#endif // ROMB


#ifdef PASCAL
    /*for (int i = 0; i < n; i++)
    {
        int a = 1;
        cout << setw(n - i);
        for (int j = 0; j <= i; j++)
        {
            if (a < 10) cout << " " << a << " ";
            else cout << a << " ";
            a = a * (i - j) / (j + 1);

        }
        cout << endl;
    }*/

#endif // PASCAL


                 
#ifdef BINARY
    cout << "Hex: " << hex << n << endl;
    for (int i = 65536; i >= 1; i /= 2)
    {
        int  a = n / i;
        n %= i;
        cout << a << " ";
    }   cout << endl;

#endif // BINARY
#ifdef HEX
    for (int i = 65536; i >= 1; i /= 16)
    {
        int a = n / i;
        n %= i;

        cout << a << " ";
    }

#endif // HEX

}

  
        
    
    

    
