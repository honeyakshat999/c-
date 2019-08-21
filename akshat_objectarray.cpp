#include<iostream.h>
class student{
char name[10];
int age;

	public:
	void input()
	{
	cout<<"enter name and age of student:\n";
	cin>>name>>age;
	}
	void display()
		{
			cout<<"name of student:\n"<<name;
			cout<<"age:"<<age;	
		}

};

int main()

{
clrscr();
int size;
cout<<"enter the no of user:\n";
cin>>size;
   student user[size];


for(int i=1;i<=size;i++)
{
   cout<<"enter details for student\n"<<i;
	user[i].input();
}

for(int i=1;i<=size;i++)
{ cout<<"student"<<i;
	user[i].display();
}	
getch();
return 0;

  


}