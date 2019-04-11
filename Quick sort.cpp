#include <stdio.h>
#include <string.h>
void quick_sort(int a[], int l, int r)//left,right
{
    if (l < r)
    {
        int i,j,x;

        i = l;
        j = r;
        x = a[i];
        while (i < j)
        {
            while(i < j && a[j] > x)
                j--; // ���������ҵ�һ��С��x����
            if(i < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; // ���������ҵ�һ������x����
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a, l, i-1); /* �ݹ���� */
        quick_sort(a, i+1, r); /* �ݹ���� */
    }
}
int main ()
{
	int a[10]={10,9,8,7,3,4,5,2,1,6};
	quick_sort(a,0,9);
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
