#include <stdio.h> 

void towerOfHanoi(int n, char first, char last, char mid)
{if (n == 1)
	{printf("\nDisk 1 from %c to %c.", first, last);
	 return;
	}
 towerOfHanoi(n - 1, first, mid, last);
 printf("\nDisk %d shifted from %c to %c.", n, first, last);
 towerOfHanoi(n - 1, mid, last, first);
}

int main()
{int n = 0;
 printf("\nEnter number of disks:");
 scanf("%d", &n);
 towerOfHanoi(n, 'A', 'B', 'C');
 
 return 0;
}
