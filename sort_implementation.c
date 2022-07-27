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
  
           
