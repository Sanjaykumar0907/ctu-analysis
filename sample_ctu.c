#include<stdio.h>
#include"util.h"

int main() {
    
    int arr[LEN];
    int i;
    /* call assign_arr which is defined in util.c */
    assign_arr(arr);

    for (i =0;i<=LEN;i++)
          printf("%d",arr[i]);
    return 0;
}
