#include <stdio.h>

int main()
{
  // creating an array
  int arr[100], n, i;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter value of element %d: ", i);
    scanf("%d", &arr[i]);
  }

  // inserting into an array
  int position, element;

  printf("Enter the position to insert: ");
  scanf("%d", &position);

  if (position > n)
  {
    printf("Position exceeds array length");
  }

  printf("Enter the element to insert: ");
  scanf("%d", &element);

  n++;

  for (i = n + 1; i >= position; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[position] = element;

  // displaying the array
  for (int i = 0; i < n; i++)
  {
    printf("Element %d: %d\n", i, arr[i]);
  }

  // deleting an element from the array
  int key;

  printf("Enter the position to delete element: ");
  scanf("%d", &key);

  if (key > n)
  {
    printf("Element out of index");
  }

  for (i = key; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }

  n--;

  // displaying the array
  printf("Updated array\n");
  for (int i = 0; i < n; i++)
  {
    printf("Element %d: %d\n", i, arr[i]);
  }

  return 0;
}