#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[] = "GOOD MORNING ALL.";
	cout <<"Original string :\n"<<arr<<endl;
	cout<<"String is lower case:\n";
	for (int x=0; x<strlen(arr); x++)
	putchar(toupper (arr[x]));
	return 0;	
}
