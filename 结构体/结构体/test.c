#include<stdio.h>


//�ṹ��Ļ����������ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա��������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

//struct �ǽṹ��ؼ���    stu �ṹ���ǩ    struct stu �ṹ������
//struct stu//������Ա������ӵ�ͼֽ����ռ�ڴ棬    ��������������˱���������ķ��ӣ�ռ�ڴ� ���磺struct stu a
//{
// 	//��Ա����
//	char name[20];//�м��⼸�����Ƕ���һ���ṹ������
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//��3����ȫ�ֱ��� ,�Ǳ���     ����ģ�;���ǽṹ������
//
//int main()
//{
//	struct stu a;//�ֲ��ṹ�����, �����ṹ��������൱�ڸ��˷��ӣ�ռ���ڴ�
//
//	return 0;
//}

//typedef struct stu//������Ա������ӵ�ͼֽ����ռ�ڴ棬    ��������������˱���������ķ��ӣ�ռ�ڴ� ���磺struct stu a
//{
//	//��Ա����
//	char name[20];//�м��⼸�����Ƕ���һ���ṹ������
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//����ǵڶ�����˼���ѽṹ����������ָĳɼ�̵�stu��stu������  ���磺stu a;
//
//int main()
//{
//	stu a;
//	return 0;
//}


//�ṹ���Ա�����ͣ����������飬ָ�룬�����������ṹ��

//�ṹ���ʼ��
//%s����ͨ����ַ��ӡ�ַ���

//struct S
//{
//	char name;
//	int c;
//	char arr[20];
//};
//
//struct T
//{
//	int a;
//	int b;
//	struct S s;
//	char* p;
//};
//
//int main()
//{
//	char arr[] = "hell";
//	struct T e = { 10,20,{'w',20,"abcde"}, arr};
//	printf("%d\n", e.a);
//	printf("%d\n", e.b);
//	printf("%c\n", e.s.name);
//	printf("%d\n", e.s.c);
//	printf("%s\n", e.s.arr);
//	printf("%s\n", e.p);
//	//struct T a;
//	//a.s.c = 10;
//	//printf("%d\n", a.s.c);
//	return 0;
//}


//struct a
//{
//	int d;
//	int b;
//};
//int main()
//{
//	int q = 10;
//	struct a p = { 10,20 };
//	struct a* e = &p;
//	printf("%d\n",(*e).b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	printf("%d\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[] = "adfgfgg";
//	printf("%s\n", arr);
//	return 0;
//}


//�ṹ�庯�����β��紫��ַ�������������ջ�����⣬

//typedef struct op
//{
//	char name[20];
//	char tele[20];
//	short age;
//	char sex[5];
//}op;
////�����ӡʱ�õ��Ǵ��Σ�����һ����ʱ������ռ��ջ
//void print1(op b)
//{
//	printf("%s\n", b.name);
//	printf("%s\n", b.tele);
//	printf("%d\n", b.age);
//	printf("%s\n", b.sex);
//}
////�����ӡ�Ǵ�ַ�����ᴫ�Σ�ֻ��ͨ����ַ�ҵ���Ҫ��ӡ��ֵ
//void print2(op* c)
//{
//	printf("%s\n", c->name);
//	printf("%d\n", c->age);
//	printf("%s\n", c->tele);//ָ��
//	printf("%s\n", (*c).sex);//��
//}
//int main()
//{
//	op a = { "����","15255752176",20,"��" };
//	print1(a);
//	print2(&a);
//	return 0;
//}
//ѡprint2��ԭ���ǣ���������ʱ����������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ��������ѹջ��ϵͳ�����Ƚϴ�
//���Իᵼ�������½���
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��

//����һ��Ԫ�أ�ѹջ
//ɾ��һ��Ԫ�أ���ջ
//ջ���Ƚ��ĺ����������ȳ�

//��Ҫ�����˽��������������ջ֡�Ĵ���������
