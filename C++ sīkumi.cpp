#include <iostream>

using namespace std;

int main()
{
    cout<<"Vai tev patik ši programma?";
    cout<<"  1= ja   0=ne";
    int a,x;
    cin >> a;
    if (a==0) cout << "tev nepatik programma" << endl;
    else cout << "tev patik programma" << endl;
    cin >> x;
        for (int i=x; i<=100; i+=2){
        cout <<"\n  "<< i;}


    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
    for(int x=1; x<10; x++) {
        for(int z=1; z<10; z++)
        {
            cout << x*z << "\t";
        }
        cout << endl;
    }
    return 0;
/////////////////////////////////////////////////////////////////////////////////
}

#include <iostream>

using namespace std;
 
int main()
{
    do
    {
    cout<<"Vai tev patik ši programma?";
    cout<<"  1= ja   0=ne";
    int a,x;
    char z;
    cin >> a;
    if (a==0) cout << "tev nepatik programma" << endl;
    else cout << "tev patik programma" << endl;
    cin >> x;
        for (int i=x; i<=100; i+=2){
        cout <<"\n  "<< i;
        cout<<"ievadiet y lai atkartotu";
        cin >> z    
        }
        while ('y'==z);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;
 
int main()
{
    int a,x,i;
    char z;
    do
    {
        cout<<"Vai tev patik ši programma?";
        cout<<"  1= ja   0=ne";
        cin >> a;
        if (a==0) cout << "tev nepatik programma" << endl;
        else cout << "tev patik programma" << endl;
        cin >> x;
        for (i=x; i<=100; i+=2) cout <<"\n  "<< i;
        cout<<"ievadiet y lai atkartotu"<< endl;
        cin >> z;    
    }
    while (z=='y');
   
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;
 int main()
{
char a,z;
int b,d;
do{
    cout << "Ievadiet jebkadus skaitlus" << endl;
    cin >> d;
    d=d*d;
    cout << d;
    cout << "ievadiet '0' lai apturetu programmu"<< endl;
    cin >> z;
        if (z>0){
        return 0;
    }
    cout << b << "\n" << "Velaties atkartot? Ievadiet J, ja velaties."<< endl; 
    cin >> a;
} while (a == 'J');

return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <chrono> 
#include <thread>
#include <cstdlib>
using namespace std;    
using namespace std::this_thread;
using namespace std::chrono; 
int main()
{

char red[] = { 0x1b, '[', '0', ';', '3', '1', 'm', 0 };
char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0 };
char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
        for(int x=1; x<10; x++){
    cout << red << "Sarkans" << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout.flush();
    system("clear");
    cout << yellow << "Dzeltens"; cout << red << "Sarkans" <<endl;
    sleep_until(system_clock::now() + seconds(1));
    cout.flush();
    system("clear");
    cout << green << "Zalš" << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout.flush();
    system("clear");
    cout << yellow << "Dzeltens"<< endl;
    sleep_until(system_clock::now() + seconds(1));
    cout.flush();
    system("clear");
        }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
