#include <stdio.h>

void printf_array(int a[], int n)
{
    for (int i = 0; i < n; i++) printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void quick_sort(int a[], int l, int r)
{
    if (l >= r) return;
    int x = a[l];
    int i = l - 1, j = r + 1;
    while (i < j)
    {
        do i++; while (a[i] < x);
        do j--; while (a[j] > x);
        if (i < j) swap(a[i], a[j]);
    }
    quick_sort(a, l, j);
    quick_sort(a, j+1, r);
}

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    quick_sort(a, 0, 4);
    printf_array(a, 5);
    return 0;
}