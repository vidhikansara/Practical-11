#include <stdio.h>

int main()
{
   int i, first, last, middle, sz, search, array[100];

   printf("Enter number of elements: ");
   scanf("%d",&sz);

    for (i = 0; i < sz; i++)
    {
      printf("\nEnter values %d: ",i+1);
      scanf("%d", &array[i]);
    }

   printf("Enter value to find: ");
   scanf("%d", &search);

   first = 0;
   last = sz - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found!\n", search);

   return 0;
}
