/*
Date : 24/02/2021
Author : Dharm Vashisth.
Description :  Program to read a text from keyboard and display number of words,lines and charaters in two
			column format with number as right aligned and text as left aligned.
*/
#include<iostream>
using namespace std;

ostream & lefttone(ostream &output){
	output.setf(ios::left,ios::adjustfield);
	output.width(20);
	return output;
}
ostream & righttone(ostream &o){
	o.setf(ios::right,ios::adjustfield);
	o.width(20);
	return o;
}
int main(){
	system("cls");
	char ch,old;
	int w,l,c;
	cout<<"Enter text using Keyboard and text accepted till the first occurance of the number 1\n";
	cout<<endl;
	ch=cin.get();
	old=ch;
	l,c,w=0;
	while(ch!='1'){
		if(ch=='\n'){
			l++;
			w++;
		}
		if(ch==' '&& old!=' ')	// somewhat satisfied but not completely.
			w++;
		if(ch!=' '&&ch!='\n')
			c++;
		old=ch;
		cin.get(ch);
	}
	cout<<endl;
	
	cout<<lefttone<<"Number of Lines     : ";
	cout<<righttone<<l;
	cout<<endl;
	
	cout<<lefttone<<"Number of Words     : ";
	cout<<righttone<<w;
	cout<<endl;
	
	cout<<lefttone<<"Number of Character : ";
	cout<<righttone<<c;
	cout<<endl;
	
	system("pause");
	return 0;
}

