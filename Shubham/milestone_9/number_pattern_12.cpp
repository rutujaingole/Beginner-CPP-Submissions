#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    cout << "Enter the number of lines you want to print\n";
    cin >> n;
   for(i=1; i<=n; i++)
   {    
       k = n-i+1;
       for(j=1; j<=n-i+1; j++)
       {
           if(i%2 != 0)
           {
               cout << " " << j;
           }
           else
           {
               cout << " " << k;
               k--;
           }
           
       }
       for(j=1; j<=n-i+1; j++)
       {
           cout << "  ";
       }
       cout << endl;
   }
}
