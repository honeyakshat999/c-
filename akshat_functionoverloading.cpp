#include <iostream.h>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i;
      }
      void print(double  f) {
        cout << "Printing float: " << f;
      }
      void print(char c) {
        cout << "Printing character: " << c;
      }
};

int main(void) {
   printData pd;
int i;
   float j;
   char k;
   cin>>i;
   cin>>j;
   cin>>k;
 
   pd.print(i);
   
      pd.print(j);
   
   pd.print(k);
 
   return 0;
}