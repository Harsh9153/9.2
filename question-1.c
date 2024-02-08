//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
#include<stdio.h>
void main()
{
	char email[100]="admin@gmail.com";
	char password[100]="123456";
	
	char user_email[100], user_password[100];
	printf("enter your email\n");
	gets(user_email);
	
	printf("enter your password\n");
	gets(user_password);
	
	if(strcmp(email,user_email)==0 && strcmp(password,user_password)==0)
	{
		printf("\nyou are login successfully");
	}
	else
	{
		printf("please enter vaild email and password");
	}
}