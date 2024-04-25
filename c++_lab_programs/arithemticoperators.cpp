#include <iostream>
using namespace std;
main () {
    int a= 23;
    int b = 78;
    int c;
     c = a + b;
     cout<<" line one value of c is  : "<< c <<endl;
     c = a-b;
     cout<<" line two value of c is  : "<< c <<endl;
     c = a*b;
     cout<<" line three value of c is  : "<< c <<endl;
c = a/b;
cout<<" line four value of c is  : "<< c <<endl;
c=a%b;
cout<<" line five  value of c is  : "<< c <<endl;
c = a++;
cout<<" line six  value of c is  : "<< c <<endl;
c=a--;
cout<<" line seven value of c is  : "<< c <<endl;
c = ++a;
cout<<" line eight value of c is  : "<< c <<endl;
c=--a;
cout<<" line nine  value of c is  : "<< c <<endl;
// observe what is happening at each expression 
return 0;
}