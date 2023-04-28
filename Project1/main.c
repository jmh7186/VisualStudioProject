#include <stdio.h>
void main() {
	int i=10;
	scanf_s("%d", &i);
	printf("입력값: %d\n", i);
}



/*
struct point {
	int x;
	int y;
};

typedef struct {
	int age;
	char gen;
}person;

void main() {
	int i = 100;
	float f = 2.2f;
	char c = 'a';
	person* per;
	int x = 100;
	int y = 200;

	struct point p;
	p.x = 300;
	p.y = 400;
	printf("%d, %d\n", p.x, p.y);

	person saram1;
	saram1.age = 30;
	saram1.gen = 'F';

	per = &saram1;
	printf("%d, %c\n", per->age, per->gen);
	printf("%d, %c\n", saram1.age, saram1.gen);
}
*/



/*
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
*/