#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int i,a[10];
cout<<"Enter the elements: ";
for(i=0;i<10;i++){
	cin>>a[i];
}
cout<<"Reverse order: ";
for(i=9;i>=0;i--){
	cout<<a[i]<<" ";
}
getch();
}

/*
Enter the elements: 0
1
2
3
4
5
6
7
8
9
Reverse order: 9 8 7 6 5 4 3 2 1 0
*/