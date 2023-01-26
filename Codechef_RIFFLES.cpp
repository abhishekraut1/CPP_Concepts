#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;

    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }

    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    if (negative)
        number *= -1;
}

void solve(int n,int k,int a[],int b[]){
      for (int in = 0; in < k; in++) {
      int mid = n / 2;
      int j1 = n - 1;
      int j2 = 0;
      int j=mid;
      for (int i = 0; i < mid; i++) {
      a[i] = b[n - 1 - j1];
       j1 -= 2;

       a[j] = b[j2 + 1];
       j2 += 2;
        j++;
      }

      if (in != k - 1){
          for (int i = 0; i < n; i++){
              b[i] = a[i];
          }
      }
      }
}

void printArray(int a[],int n){
for (int i = 0; i < n; i++) {
      cout<<a[i]<<" ";
      }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   int t;
   fastscan(t);
   while(t-->0){
   int n;
   fastscan(n);
   int k;
   fastscan(k);
   int a[n];
   int b[n];
   for (int i = 0; i < n; i++) {
                a[i] = i+1;
                b[i] = i+1;
   }

    if(n % (int)(pow(2, 1) + 0.5)==0) {
        solve(n,k,a,b);
      }
      printArray(a,n);
      cout << endl ;
      }
}
   
   /* '<<' is called Insertion Operator.
      '>>' is called Exertion Operator.
      */