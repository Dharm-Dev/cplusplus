/*
Date : 24/02/2021.
Author : Dharm Vashisth.
Description : Formatted output in c++.

using IOS class functions width(),fill(),setf(),unsetf(),precision().
*/
#include<iostream>
#include<string>
#define W 15	// for each entry.
#define SZ 5 //header size. 
#define COLW 2*W	//first column.
#define MAXW (SZ+1)*W+5

using namespace std;

void partition(){
    cout.fill('.');
	cout.width(MAXW);
	cout<<"\n";
	cout.fill(' ');
}
int main(){
	system("cls");
	int w;
	float sum;
	float sumc[5]={0};
	string s[SZ]={"Pen","Book","Chair","Table","Bag"};

 	float ar[3][SZ]={ 12,312,4897.34,54,122,
 				   34.234,-432.23,54,65.3422,32.4,
				   43.54,674,20345.00034,432.43,66.3,
				   };
	w=MAXW;
	cout.width(w/2);
	cout.fill('>');
	cout<<"Formatted Output Bill\n";
	partition();
	
	cout.precision(2);
	cout.setf(ios::fixed,ios::floatfield);
	for(int i=0;i<SZ;i++){
		w=(i==0)?COLW:W;	// starting column will have more width.
		cout.width(w);
//		cout.setf(ios::left,ios::adjustfield);	
		cout<<s[i];
	}
	cout<<endl;	
	partition();

//	cout.setf(ios::right,ios::adjustfield);	
	for(int i=0;i<3;i++){	
		for(int j=0;j<SZ;j++){
			cout.setf(ios::showpos);
			w=(j==0)?COLW:W;
			cout.width(w);
			cout<<ar[i][j];
			sumc[j]+=ar[i][j];
		}
		cout<<endl;
	}
	partition();

	cout.width(W);
	cout<<"Total :";
	for(int i=0;i<SZ;i++){
		cout.width(W);
//		cout.setf(ios::left,ios::adjustfield);	
		cout<<sumc[i];
		sum+=sumc[i];
	}
	cout<<endl;
	cout<<endl;
	
	cout.width(W);
	cout<<"Sub Total :";
	w=MAXW-W-5;
//	cout.fill('#');
	cout.width(w);
	cout<<sum<<endl;
	
	partition();
	system("pause");
	
	return 0;
}

