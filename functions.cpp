//string in cpp
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char s1[30]="welcome";
	char s2[20]="hello";
	char s3[100];
	strcpy(s3,s1);

	
	cout<<s3;
}