#include"util.h"
#include<stdio.h>

void assign_arr(int *a) {
  int i = 0;
  for (i =0; i<=LEN; i++) {
	printf("%d", a[i]);
        a[i] = i;
  }

}
  
