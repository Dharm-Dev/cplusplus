/*
	Author: Dharm Vashisth.
	Description: Unformatted input using iostream.h .
	Date: 23/02/2021.
	ios(Virtual Base Class)
	+istream : input stream
	+streambuf : pointer
	+ostream : output stream
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){

	system("cls");
	char ch,cline;
	char s[80],s3[80];
	char s2[]="I am New";
	cout<<"Unformatted IO using functions defined in iostream\ncin>>,cout<<,cin.get(),cin.getline(),cout.put(), and cout.write()"<<endl<<endl;
	cout<<"1.Enter a Character : ";
	cin>>ch;
	cin.getline(s,80); //read enter key. and avoid reading more than one characters inputted above. 
	cout<<"2.Enter a line [cin.getline()] : ";//(better input the text of this line above separated by space because may be skip because of enter pressed above!!)\n";
	cin.getline(s,80);
	cout<<endl;
	cout<<"3.Enter a Line [ char by char using cin.get() ]: ";
	cline=cin.get();
	cout<<"\n\n3.Displayed using cout.put()\n";
	while(cline!='\n'){
		cout.put(cline);
		cline=cin.get();
	}
	cout<<endl;
	cout<<endl;
	cout<<"4. Enter a String to concatenate with Line 2(inputted using cin>>) : ";
	cin>>s3;
	cout<<endl;
	cout<<endl;
	
	cout<<"2.Given line inputted using getline is displayed using write() : \n";
	cout.write(s,strlen(s));
	cout<<"\n\nConcatenated Output using cin.write().write(): \n";
	cout.write(s,strlen(s)).put(' ').write(s3,strlen(s3))<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"1.First Character outputted using cout.put() : ";
	cout.put(ch)<<".";
	cout<<endl;
	cout<<"\nCompleted.\n";
	system("pause");
	return 0;
}
