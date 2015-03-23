Array Programs
Name:Parth Bhatia								Date: 11/03/2015		
STD/DIV: XI/H								Roll No: 3
Title: WAP to read numbers from user and calculate it's average using array.  

#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int num[5],sum=0,i;
float avg;
cout<<"Enter 5 numbers: ";
for(i=0;i<5;i++) {
cin>>num[i];
}
for(i=0;i<5;i++){
sum=sum+num[i];
}
avg=sum/5.0;
cout<<"Average: "<< avg;
getch();
}



/*
==============OUTPUT================
Enter 5 numbers: 8
9
5
2
4
Average: 5.6
*/
