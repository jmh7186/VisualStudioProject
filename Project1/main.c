#include <stdio.h>
void prn(int *p) {
	//main�� su ���� 1000���� �ٲٱ�
	*p = 1000;

}

void main() {
	int i;
	int* p; //*�� ����Ʈ(�ּ�) ������ �ǹ�-������ ������ �ּҸ� �����ϴ� ����
	int su = 0;
	i = 100;
	p = &i; //&�� i�� ����Ʈ(�޸� �ּ�)�� �ǹ�, �װ��� ����Ʈ ���� p�� ����, *�� �� ����Ʈ(�޸� �ּ�)�� ��(100)�� �ǹ�
	printf("%d, %p\n", i,&i);
	printf("%p\n",p);
	printf("%d\n", *p);
	prn(&su);
	printf("%d\n", su);


}