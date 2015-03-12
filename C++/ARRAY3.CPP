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
Enter array elements:5
9
7
2
2
Enter the element to search: 2
The index is 3 and address is: 0x8f82fff2
The index is 4 and address is: 0x8f82fff4
*/