#include <iosteam>
using namespace std;

typedef int ElementType;

struct PointerType
{
	ElementType inf;
	struct PointerType* next;
};

typedef struct PointerType LIST;

PointerType* Insert_Middle(PointerType *Pred, ElementType x)
{
	PointerType* TempNode;
	TempNode = (PointerType*)malloc(sizeof(PointerType));
	TempNode->inf = x;
	TempNode->next = Pred->next;
	Pred->next = TempNode;
	return TempNode;
}

ElementType Delete(PointerType* Pred)
{
	PointerType* TempNode = Pred->next;
	ElementType x = TempNode->inf;
	Pred->next = Pred->next->next;
	free(TempNode);
	return x;
}

PointerType* Insert_ToHead(PointerType* First, ElementType x)
{
	PointerType* TempNode;
	TempNode = (PointerType*)malloc(sizeof(PointerType));
	TempNode->inf = x;
	TempNode->next = First;
	First = TempNode;
	return TempNode;
}

PointerType* Insert_ToLast(PointerType* First, ElementType x)
{
	PointerType* NewNode,* TempNode;
	NewNode = (PointerType*) malloc(sizeof(PointerType));
	TempNode = (PointerType*) malloc(sizeof(PointerType));
	NewNode->inf = x;
	TempNode = First;
	while(TempNode->next != NULL)
	{
		TempNode = TempNode->next;
	}
	TempNode->next = NewNode;
	return NewNode;
}

PointerType* Delete_Head(PointerType* First)
{
	PointerType* TempNode = First;
	First = First->next;
	return TempNode;
}

PointerType* Delete_Last(PointerType* First)
{
	PointerType *TempNode1, *TempNode2;
	TempNode1 = First;
	TempNode2 = First;
	while(TempNode1->next == NULL)
	{
		TempNode2 = TempNode1;
		TempNode1 = TempNode1->next;
	}
	TempNode2->next = NULL;
	free(TempNode1);
	return First;
}


int IsEmpty(PointerType* First)
{
	return !First;
}

PointerType* MakeNull(PointerType* First)
{
	while(!IsEmpty(First))
	{
		First = Delete_Head(First);
	}
	return First;
}

void Print(PointerType* First)
{
	PointerType* TempNode;
	TempNode = First;
	int count = 0;
	while(TempNode)
	{
		cout << TempNode->inf << " ";
		count++;
		if(count % 5 == 0)
		{
			cout << endl;
		}
	}
}

int main()
{
	PointerType *s1;
	int num1 = 1, num2 = 12, num3 = 123, num4 = 1234;
	s1->inf = num1;
//	s2->inf = 12;
//	s3->inf = 123;
//	s4->inf = 1234;
	Insert_ToLast(s1, num2);
	Insert_Middle(s1, num3);
	Insert_Middle(s1, num4 );
	cout << "hello world" << endl;
	cout << &s1->inf << endl; 
	Print(s1);
	return 0;
}
