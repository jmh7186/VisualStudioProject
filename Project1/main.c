#include <stdio.h>
void prn(int *p) {
	//main의 su 값을 1000으로 바꾸기
	*p = 1000;

}

void main() {
	int i;
	int* p; //*은 포인트(주소) 변수를 의미-포인터 변수는 주소를 저장하는 변수
	int su = 0;
	i = 100;
	p = &i; //&는 i의 포인트(메모리 주소)를 의미, 그것을 포인트 변수 p에 저장, *은 그 포인트(메모리 주소)의 값(100)을 의미
	printf("%d, %p\n", i,&i);
	printf("%p\n",p);
	printf("%d\n", *p);
	prn(&su);
	printf("%d\n", su);


}