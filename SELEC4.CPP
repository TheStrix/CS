Name: Parth Bhatia								Date: 5/12/2014
STD/DIV: XI/H									Roll No: 3
Title: The speed of a van is 80 km/hour. Find the number of hours required for covering a distance of 500 km? Write a program in this regard. 

#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int hr,min;
cout << "Speed of car= 80 km/hr.";
hr=500/8;
if((min=500%80)>59) {
hr+=1;
min=min%60;
}
cout << "\nTime required to cover a distance of 500 KM= " << hr << " hrs " << min << " mins ";
getch();
}


/*
=================OUTPUT====================
Speed of car= 80 km/hr.
Time required to cover a distance of 500 KM= 62 hrs 20 mins
*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
