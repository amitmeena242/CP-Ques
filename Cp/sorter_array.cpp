#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int a[] = { 11,22,33,77,1,0,9,6,11,109,02 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"here is the given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   printf("\n\n\n\n here is the sorted array: \n");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
