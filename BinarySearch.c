#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
	 {
        int mid = (l + (r))/ 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        else
        	return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main(void)
{
    int n,x;
    printf("Enter the Array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array elements:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	printf("Enter the element to be searched:-\n");
	scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element not found"): printf("Element is present at index %d",result);
    return 0;
}
