
#include <iostream>
using namespace std;
/*Global variables are defined outside of all the functions. The global variables will hold their 
value throughout the life-time of your program. A global variable can be accessed by any 
function. That is, a global variable is available for use throughout your entire program after 
its declaration */
 
// Global variable declaration:
int jombo;
 int gVARIABLE = 78;
int main () {
 // Local variable declaration:
 int perimeter;
 int radius ;
 
 // actual initialization
 
 perimeter = 10;
 radius = 20;
 jombo = perimeter + radius;
 int gVARIABLE=900;
 cout << jombo<<endl;
 cout<<gVARIABLE<<endl;
 /*A program can have same name for local and global variables but value of local variable 
inside a function will take preference. 
 so here the value of gVARIABLE IS 900 INSTEAD OF 78 AS 
 declared in the global space  */
 // the variable jombo is a global variable while perimeter and radius are local VAR
 
 return 0;
}
