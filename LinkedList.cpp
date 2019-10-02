#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Node
{
	int iIndex;
	struct Node *Next;
};

struct Node *Head = NULL;

void insert(int data)
{
	struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
	NewNode->iIndex = data;
	NewNode->Next = Head;
	Head = NewNode;
}

void display(void)
{
	struct Node *ptrNode;
	ptrNode = Head;
	while(ptrNode != NULL)
	{
		cout<<"Node : "<<ptrNode->iIndex<<endl;
		ptrNode = ptrNode->Next;
	}
}

string ver_string(int a, int b, int c) {
  std :: ostringstream ss;
  ss << a << '.' << b << '.' << c;
  cout<<"Test1"<<endl;
  return ss.str();
}

int main(int argc, char const *argv[])
{
	// Just to identify the 
	#if __cplusplus==201402L
    	cout << "C++14" << endl;
    #elif __cplusplus==201103L
    	cout << "C++11" << endl;
    #else
    	cout << "C++" << endl;
    #endif


    cout<<"Compilar details"<<endl;
    string true_cxx =
	#ifdef __clang__
	   "clang++";
	#else
	   "g++";
	#endif
	
	  string true_cxx_ver =
	#ifdef __clang__
	    ver_string(__clang_major__, __clang_minor__, __clang_patchlevel__);
	#else
	    ver_string(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
	#endif

	insert(1);insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	insert(10);

	cout<<"Displing..."<<endl;
	display();
	return 0;
}