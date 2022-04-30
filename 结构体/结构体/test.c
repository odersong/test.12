#include<stdio.h>


//结构体的基础声明：结构是一些值的集合，这些值称为成员表变量。结构的每个成员可以是不同类型的变量。

//struct 是结构体关键字    stu 结构体标签    struct stu 结构体类型
//struct stu//这个可以比做房子的图纸，不占内存，    但是用这个创建了变量就是造的房子，占内存 比如：struct stu a
//{
// 	//成员变量
//	char name[20];//中间这几个都是定义一个结构体类型
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//这3个是全局变量 ,是变量     这里的（;）是结构体声明
//
//int main()
//{
//	struct stu a;//局部结构体变量, 创建结构体变量。相当于盖了房子，占了内存
//
//	return 0;
//}

//typedef struct stu//这个可以比做房子的图纸，不占内存，    但是用这个创建了变量就是造的房子，占内存 比如：struct stu a
//{
//	//成员变量
//	char name[20];//中间这几个都是定义一个结构体类型
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//这个是第二种意思：把结构体变量的名字改成简短的stu，stu是类型  比如：stu a;
//
//int main()
//{
//	stu a;
//	return 0;
//}


//结构体成员的类型：标量，数组，指针，甚至是其他结构体

//结构体初始化
//%s可以通过地址打印字符串

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


//结构体函数传参不如传地址，传参容易造成栈的问题，

//typedef struct op
//{
//	char name[20];
//	char tele[20];
//	short age;
//	char sex[5];
//}op;
////下面打印时用的是传参，会多出一份临时拷贝，占用栈
//void print1(op b)
//{
//	printf("%s\n", b.name);
//	printf("%s\n", b.tele);
//	printf("%d\n", b.age);
//	printf("%s\n", b.sex);
//}
////下面打印是传址，不会传参，只会通过地址找到需要打印的值
//void print2(op* c)
//{
//	printf("%s\n", c->name);
//	printf("%d\n", c->age);
//	printf("%s\n", c->tele);//指向
//	printf("%s\n", (*c).sex);//的
//}
//int main()
//{
//	op a = { "张三","15255752176",20,"男" };
//	print1(a);
//	print2(&a);
//	return 0;
//}
//选print2的原因是：函数传参时，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大参数压栈的系统开销比较大，
//所以会导致性能下降。
//结论：结构体传参的时候，要传结构体的地址。

//插入一个元素：压栈
//删除一个元素：出栈
//栈：先进的后出，后进的先出

//想要深入了解可以搜索：函数栈帧的创建和销毁
