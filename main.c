#include <stdio.h>
int main() {
	int a[4] = { 1,5,7,4 };
	int *p=&a[0];
	//*p++;
	p++;
	printf("%d\n", *p);//这里的值为5，相当于将p指针移动了一个int字节，到a[1]
  
  //这个q相当于地址现在就是100;
	int* q = 100;
	q++;
	printf("%d\n", q);
	printf("%p", q);//也就是104
	return 0;
}
