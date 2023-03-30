#include <stdio.h>
void main (){
   int num[20];
   int i, j, a, n;
   printf("How many values to sort (<100)? ");
   scanf("%d", &n);
  
   for (i = 0; i < n; ++i){
     printf("Enter a number: ");
     scanf("%d", &num[i]);
   }

      
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The sorted numbers are :");
   for (i = 0; i < n; ++i){
      printf(" %d ", num[i]);
    
   }
}

// no time for implementing linear-time sort