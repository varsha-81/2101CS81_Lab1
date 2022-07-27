#include <stdio.h>
void display (int a[], int n);
void bubble_sort (int a[], int n);
void selection_sort (int a[], int n);
void insertion_sort (int a[], int n);
void quick_sort (int a[], int n);
void merge_sort (int a[], int n);

int main() {
  int n, choice, i;
  char ch[20];
  printf("Enter no.of elements for sorting:");
  scanf("%d",&n);
  int arr[n];
  for (i=0; i<n; i++)
  { printf("Enter %d element: ", i+1);
   scanf ("%d", &arr[i]);
  } printf("Select any one for sorting:\n");
  
   
  while (1)
  { printf ("\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Quick Sort\n5.Merge Sort\n6.Display Array\n7.Conclude the program.\n");
   printf("\nEnter any choice:");
   scanf("%d", &choice);
   
   switch(choice)
   {
     case 1:
       bubble_sort(arr,n);
       break;
     case 2:
       selection_sort(arr,n);
       break;
     case 3:
       insertion_sort(arr,n);
       break;
     case 4:
       quick_sort(arr,n);
       break;
     case 5:
       merge_sort(arr,n);
       break;
     case 6:
       display(arr,n);
       break;
     case 7:
       return 0;
     default:
       printf("Select options only from 1 to 7\n");}
  }
  return 0;}

void display(int arr[],int n)
{ for (int i=0; i<n; i++)
{
  printf("%d", arr[i]);
}
}
