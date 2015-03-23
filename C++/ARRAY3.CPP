Name:Parth Bhatia								Date: 11/03/2015		
STD/DIV: XI/H								Roll No: 3
Title: WAP to read elements from user. Create array of element and search the user defined element inside the array. Display the position at which the element is found.

#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,x,f=0;
cout<<"Enter array elements: ";
for(i=0;i<5;i++){
	cin>>a[i];
}
cout<<"Enter the element to search: ";
cin>>x;
for(i=0;i<5;i++){
if(x==a[i])
	cout<<"The index is "<<i<<" and address is: "<<(a+i)<<endl;
	f=1;
}
if(f==0)
	cout<<"Element not found!!!";
getch();
}

/*
=============OUTPUT=============
Enter array elements:5
9
7
2
2
Enter the element to search: 2
The index is 3 and address is: 0x8f82fff2
The index is 4 and address is: 0x8f82fff4
*/
