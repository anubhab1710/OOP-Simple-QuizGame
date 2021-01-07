#include<bits/stdc++.h>
using namespace std; 
int main()
{
	system("CLS");
	int x,n;
	x=0;
	char choice[100],ch1;
	cout<<"\n\n\t\t         *************";
	cout<<"\n\n\t\t         * Quiz Game *";
	cout<<"\n\n\t\t         *************";
	cout<<"\n\n\t\t====================================";
	cout<<"\n\n\t\t=   Developed By :Anubhab Sarkar   =";
	cout<<"\n\n\t\t====================================";
	cout<<"\n\n";
	cout<<"\n Please Enter Your Name : ";
	cin>>choice;
	cout<<"\n\n";
	cout<<"\n\n\t\t Welcome "<<choice<<"\n";
	cout<<"\n\n\t\t Loading Please wait........";
	cout<<"\n\n\t\t 1) Start Quiz";
	cout<<"\n\n\t\t 2) View Score";
	cout<<"\n\n\t\t 3) Exit Quiz";
	cout<<"\n\n Enter Your Choice :--> ";
	cin>>n;
	switch(n)
	{
		case 1:
		cout<<"\n\n\n Note :Enter Answer in the a,b,c and d only...";
		cout<<"\n\n\n";
		cout<<"Which of the following type of class allows only one object of it tobe created ?";
		cout<<"\n\n A.Virtual Class \n\n B.Abstract Class \n\n C.Singleton Class \n\n D.Friend Class";
	cout<<"\n\n Enter Your Select Answer : ";
	cin>>ch1;
	if(ch1=='c')
	{
		x=x+1;
		cout<<"\n\n Correct Answer....";

	}
	else
		cout<<"\n\n Sorry Wrong Answer....";
		
		cout<<"\n\n\n";
		cout<<"Which of the following is not a type of constructor ?";
		cout<<"\n\n A.Copy Constructor \n\n B.Friend Constructor \n\n C.Default Constructor \n\n D.Parameterized Constructor";
		cout<<"\n\n Enter Your Select Answer : ";
		cin>>ch1;
	if(ch1=='b')
	{
		x=x+1;
		cout<<"\n\n Correct Answer....";

	}
	else
		cout<<"\n\n Sorry Wrong Answer....";
		cout<<"\n\n\n";
		cout<<"RunTime Polymorphism is achieved by___";
		cout<<"\n\n A.Friend Function \n\n B.Operator Overloading \n\n C.Function Overloading \n\n D.Virtual Function";
		cout<<"\n\n Enter Your Select Answer : ";
		cin>>ch1;
	if(ch1=='d')
	{
		x=x+1;
		cout<<"\n\n Correct Answer...";
	}
	else
		cout<<"\n\n Sorry Wrong Answer....";
		cout<<"\n\n\n";
		cout<<"Which of the following cannot be used with the Keyword 'Virtual' ?";
		cout<<"\n\n A.Constructor \n\n B.Member function \n\n C.Destructor \n\n D.Class";
		cout<<"\n\n Enter Your Select Answer : ";
		cin>>ch1;
	if(ch1=='a')
	{
		x=x+1;
		cout<<"\n\n Correct Answer.....";
	}
	else
		cout<<"\n\n Sorry Wrong Answer....";

		cout<<"\n\n\n";
		cout<<"Which of the following is not a type of inheritance ?";
		cout<<"\n\n A.Multiple \n\n B.Distributive \n\n C.Multilevel \n\n D.Hierarchical";
		cout<<"\n\n Enter Your Select Answer : ";
		cin>>ch1;

	if(ch1=='b')
	{
		x=x+1;
		cout<<"\n\n Correct Answer...";
	}
	else
		cout<<"\n\n Sorry Wrong Answer....";
		cout<<"\n\n\n";
		cout<<"Which of the following is an invalid visibility label while inheriting a class";
		cout<<"\n\n A.Public \n\n B.Private \n\n C.Friend \n\n D.Protected";
		cout<<"\n\n Enter Your Select Answer : ";
		cin>>ch1;

	if(ch1=='c')
	{
		x=x+1;
		cout<<"\n\n Correct Answer....";
	}
	else

		cout<<"\n\n Sorry Wrong Answer....";
		cout<<"\n\n Enter Your Choice :--> ";
		cin>>n;

	case 2:

		if(x==50)
		cout<<"\n\n Congratulation......You are extremely intelligent";
		else if(x<=50)
	      cout<<"\n Total Score is : "<<x;
	      cout<<"\n\n Enter Your Choice :--> ";
	      cin>>n;

	case 3:
	int reply;
	    cout<<"\n\n Are Sure you want to exit quiz ? Y/N  :";
	    cin>>reply;
	    if(reply=='Y')
	    {
		goto out;
	    }
}
 out:
exit(0);
}
