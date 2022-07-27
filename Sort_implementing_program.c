//program implementing different sorts//
#include<stdio.h>
void display(int a[],int n);
void bubble_sort(int a[],int n);
void selection_sort(int a[],int n);
void insertion_sort(int a[],int n);
void quick_sort(int a[],int n);
void merge_sort(int a[],int n);
int main()
{
  int n,choice,i;
  char ch[20];
  printf("Enter no.of elements you want to sort:");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  }
printf("Enter %d element:",i+1);
scanf("%d",&arr[i]);
}
while(1)
{
  printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Quick Sort\n5. Merge Sort\n6. Display Array\n7. Exit the Program\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  
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
      printf("\nSelect only 1-7 option\n");
  }
}
return0;
}
//Display function//
void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
//Bubble Sort Function//
void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  printf("After Bubble sort elements are :");
  display(arr,n);
}
//Selection Sort Function//
void selection_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("After Selection sort elements are :");
  display(arr,n);
}  
//Insertion Sort Function//
void insertion_sort(int arr[],int n)
{
  int i,j,min;
  for(i=1;i<n;i++)
  {
    min=arr[i];
    j=i-1;
    while(min<arr[j] && j>=0)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
      arr[j+1]=min;
      }
  printf("After Insertion sort elements are :");
  display(arr,n);
}  
