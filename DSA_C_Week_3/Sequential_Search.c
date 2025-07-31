#include <stdio.h>
#include <conio.h>

int Sequential_Search(int x[], int n, int k);

void main()
{
    int x[10], num, key, q,i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Load Array:\n");
    for (i = 0; i < num; i++)
    {
	scanf("%d", &x[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &key);

    q = Sequential_Search(x, num, key);

    if (q == -1)
        printf("Search unsuccessful\n");
    else
        printf("The element %d found at %d position\n", key, q + 1);

    getch();
}
int Sequential_Search(int x[],int n,int k)
	{
	int i;
	for (i=0;i<n;i++)
	{
		if(x[i]==k)
		{return i;
		}
	}
	return -1;
}