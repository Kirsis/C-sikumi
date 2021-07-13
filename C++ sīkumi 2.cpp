#include <iostream>
using namespace std;
int main()
{
int i,o;
string V[4]={"Uvis Kirsis", "Girts Kalejs","Krristians Brikmanis", "Linards Zarinjs" };// ievada vardu
int A[4];//ievada atzimi
    for  (i=0; i<4 ; i++) {//cikls
    cout << "ievadiet atzimi \n" << V[i];//pasaka lietotajam kas jadara
    IEZ: cin >> A[i];//nolasa atzimi
        if (A[i]<0 or A[i]>10){
        cout << "nepareizi ievadita atzime "<< endl;
        cout << "ievadieat velreiz"<<endl;
        goto IEZ;//cin >> A[i];
        }
    }
            for  (o=0; o<4 ; o++) { //cikls izvadisanai
            cout << V[o] << A[o] << endl;//izvada vardu un atzimi
            }
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
    int a ,b;
    c
        cout << "nepareizi ievaditout << "ievadiet menesi ar skaitli \n";
    IEZ: cin >> a;//nolasa atzimi
        if (a<=0 or a>12){s meness "<< endl;
        cout << "ievadieat velreiz"<<endl;
        goto IEZ;//cin >> A[i];
        }
    b = 12-a;
    cout << "palikusi vel " << b << " menesi";

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
int a; 
   string M[12];
   M[0]="Ziema";
   M[1]="Ziema";
   M[2]="Pavasaris";
   M[3]="Pavasaris";
   M[4]="Pavasaris";
   M[5]="Vasara";
   M[6]="Vasara";
   M[7]="Vasara";
   M[8]="Rudens";
   M[9]="Rudens";
   M[10]="Ziema";
   M[11]="Ziema";
   cout << "ievadiet menesi ar skaitli \n";
   cin >> a;
   if (a>=1 or a<=12);
   a=a-1;
   cout << M[a];
   return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
double a,b,c;
cout << "ievadiet 2 veselus skaitlus pa vienam \n";
cin >> a;
cin >> b;
c=a/b;
cout << "pirmais skaitlis ir " << a <<endl;
cout <<"otrais skaitlis ir " << b << endl;
cout << "divu skaitlu dalijums ir " << c << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
int a;
    do {
    a = rand()%10+1;
    cout << a;
    }
    while (a!=5);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
int a,b,c,i,d;
c=1;
d=1;

cout << "ievadiet cik skaitlus izvadis \n";
cin >> a;
for (i=0; i<a ;i++)
{
    c=d+b;
    
    cout << c;

}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MAJAS DARBS!!!!!
#include <iostream>

using namespace std;

int main()

{
    
float a, b, c;

cout << "Ievadiet 3 skaitlus\n";

cin >> a >> b >> c;
    
	if((a >= b) && (a >= c))
    
	cout << "Lielakais skaitlis ir " << a;
        
		else if ((b >= a) && (b >= c))
       
		cout << "Lielakais skaitlis ir " << b;
            
			else if ((c>= a) && (c >= b))
            
			cout << "Lielakais skaitlis ir " << c;
    
return 0;
}
