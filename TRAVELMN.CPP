#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
#include<iomanip.h>
#include<string.h>
const int d=70;
const int h=70;
const int f=70;
const int b=70;
const int a=70;
//to view the destination and mode of transprt provided
class destination{
public:
int code;
int mot;
void desdisplay();
void getdata();
void showdata();
};
void destination::desdisplay()
{
fstream fout;
fout.open("Destinations.txt",ios::out);
fout.seekg(0,ios::end);
fout<<"        1.  Agra                 6. Gangtok  "<<endl;
fout<<"        2.  Amritsar             7. Jaipur "<<endl;
fout<<"        3.  Chennai              8. Jodhpur "<<endl;
fout<<"        4.  Darjeeling           9. Kolkata "<<endl;
fout<<"        5.  Goa                 10. Kanyakumari"<<endl;
fout.close();
char line[d];
fstream fin;
fin.open("Destinations.txt",ios::in);
cout<<"\n           Destinations provided:\n";
while(fin)
{fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
void destination::getdata()
{
char dstnt;
cout<<"\n Enter code for destination: \n";
gotoxy(29,10);
cin>>code;
if(code>20)
{cout<<"\n Sorry!You have chosen wrong option"<<endl;}
else{
cout<<"\n Enter the mode of transport: \t";
cout<<"1.Flight  2. Bus\n";
cout<<" Enter choice: ";
cin>>mot;}
}
void destination::showdata()
{
if(code==1 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Agra"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//   const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==1 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Agra"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
fout.close();
 /// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
 else if(code==2 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<" \tYou have chosen:-"<<endl;
fout<<"\t Destination       : Amitsar"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==2 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Amritsar"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
}
 else if(code==3 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
  fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Chennai"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==3 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
    fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Chennai"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
   else if(code==4 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Darjeeling"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
 fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==4 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Darjeeling"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
 else if(code==5 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Goa"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==5 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Goa"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
 else if(code==6 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Gangtok"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==6 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Gangtok"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
 fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
 else if(code==7 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Jaipur"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==7 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Jaipur"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
 else if(code==8 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Jodhpur"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==8 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Jodhpur"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
 fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }

else if(code==9 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Kolkata"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==9 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Kolkata"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==10 && mot==1)
{fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Kanyakumari"<<endl;
fout<<"\t Mode of transport : Flight"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
// const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
    else if(code==10 && mot==2)
    {fstream fout;
fout.open("Destinations.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t You have chosen:-"<<endl;
fout<<"\t Destination       : Kanyakumari"<<endl;
fout<<"\t Mode of transport : Bus"<<endl;
fout<<"\n\t  Thank You for choosing us."<<endl;
fout<<"\n\t  Press enter to return to main menu"<<endl;
  fout.close();
//  const int a=200;
  char line[a];
  fstream fin;
  fin.open("Destinations.txt",ios::in);
while(fin)
{fin.getline(line,a);
cout<<line<<endl;
}
fin.close();
    }
else
{
cout<<"\n\t Sorry!Wrong choice";
}
}
//book a trip
class book
{
public:
 char fname[20],bname[20];
char fno[10],tf[10];
int tb;
 int id;
char name[12];
long int number;
char eid[25];
char gender;
int nor;
char card[10];
int hot,fly;
int pay;
int bno;
char jsd[10];
char jrd[10];
void getdtls();
void fb();
void payment();
int nextid();
int n;
int code;
int p,e;
char cardn[10];
char hname[20];
char cind[10],coutd[10];
int tr;
char src[12],dest[12];
void loading();
void loading1();
void putd();
};
void book::putd()
{
if(n==1)
{
cout<<"\nName:"<<name<<endl;
cout<<"\nSource: "<<src<<"\t\t\tDestination: "<<dest;
cout<<"\nJourney: Start date- "<<jsd<<"\t\t"<<"Return date- "<<jrd;
if(e==1)
{
cout<<"\nFlight name: "<<fname<<"\t Flight no: "<<fno<<"\tDeparture time:"<<tf;
}
else
{cout<<"\nBus Name: "<<bname<<"\t Bus No: "<<bno<<"\tDeparture time: "<<tb;
}
cout<<"\nHotel Name:  "<<hname;
cout<<"\nCheck-in date:  "<<cind<<"\t\tCheck-out date: "<<coutd<<endl;
if(tr==1)
{cout<<"Single Bed And Non-AC Room";}
else if(tr==2)
{cout<<"Single Bed And AC Room";}
else if(tr==3)
{cout<<"Double Bed And Non-AC Room";}
else if(tr==4)
{cout<<"Double Bed And AC Room";}
cout<<"\nNo. of Rooms Booked: "<<nor;
}
else if(n==2){
if(code==1)
{
  cout<<"\t\t\n\n You have booked 5 Days Goa Package for 4 people"<<endl;
  cout<<"\t\t Venue: HOTEL SUNRAYS"<<endl;
  cout<<"\t\t Mode of Transport: By Flight"<<endl;
  cout<<"\t\t Total Cost: Rs.23,000 "<<endl;
  cout<<"\t\t Thank You for chossing us"<<endl;
}
else if(code==3)
     {
     cout<<"\t\t\n\nYou have booked 6 Days Shimla Package for 2 people"<<endl;
     cout<<"\t\t Venue: HOTEL OLIVE"<<endl;
     cout<<"\t\t Mode of Transport: By Flight"<<endl;
     cout<<"\t\t Total Cost: Rs.26,550 "<<endl;
     cout<<"\t\t Thank You for chossing us"<<endl;
}
else if(code==5)
{ cout<<"\t\t\n\n You have booked 3 Days Amritsar Package for 6 people"<<endl;
  cout<<"\t\t Venue: SINGH'S HOTEL"<<endl;
  cout<<"\t\t Mode of Transport: By Flight"<<endl;
  cout<<"\t\t Total Cost: Rs.28,000 "<<endl;
  cout<<"\t\t Thank You for chossing us"<<endl;
}
 else if(code==2)
{ cout<<"\t\t\n\n You have booked 4 Days Mumbai Package for 3 people"<<endl;
  cout<<"\t\t Venue: BLUE PALACE "<<endl;
  cout<<"\t\t Mode of Transport: By Bus "<<endl;
  cout<<"\t\t Total Cost: Rs.19,700 "<<endl;
  cout<<"\t\t Thank You for chossing us"<<endl;
}
 else if(code==4)
{ cout<<"\t\t\n\n You have booked 5 Days Uttarakhand Package for 5 people"<<endl;
  cout<<"\t\t Venue: NANDAN KANAN "<<endl;
  cout<<"\t\t Mode of Transport: By Flight "<<endl;
  cout<<"\t\t Total Cost: Rs.24,800 "<<endl;
  cout<<"\t\t Thank You for chossing us"<<endl;
}
 else if(code==6)
{ cout<<"\t\t\n\n You have booked 3 Days Delhi Package for 5 people"<<endl;
  cout<<"\t\t Venue: KING'S HOTEL "<<endl;
  cout<<"\t\t Mode of Transport: By Bus"<<endl;
  cout<<"\t\t Total Cost: Rs.23,000 "<<endl;
  cout<<"\t\t Thank You for chossing us"<<endl;
   }
} }
int book::nextid()
{   static int id=100;
return ++id;
}
//function for loading
void book::loading()
{
gotoxy(25,12);
cout<<"Loading";
for(int i=32;i<=36;i++)
{delay(500);
gotoxy(i,12);
cout<<".";
}
for(i=25;i<=36;i++)
{delay(20);
gotoxy(i,12);
cout<<" ";
}
cout<<"\n\t\t Your booking is successful";
cout<<"\n\t\t Your booking id is: "<<nextid();
}
void book::loading1()
{
gotoxy(25,12);
cout<<"Loading";
for(int i=32;i<=36;i++)
{delay(500);
gotoxy(i,12);
cout<<".";
}
for(i=25;i<=36;i++)
{delay(20);
gotoxy(i,12);
cout<<" ";
}
}
//function for cost of the tour
void book::payment()
{
if(tr==1 && e==1)
{pay=(nor*1000)+(p*3000);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==2 && e==1)
{
pay=(nor*2000)+(p*3500);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==3 && e==1)
{
pay=(nor*3000)+(p*4000);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==4 && e==1)
{
pay=(nor*4000)+(p*4500);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==1 && e==2)
{
pay=(nor*1000)+(p*300);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==2 && e==2)
{
pay=(nor*2000)+(p*500);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==3 && e==2)
{
pay=(nor*3000)+(p*750);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else if(tr==4 && e==1)
{
pay=(nor*4000)+(p*900);
gotoxy(46,20);
cout<<"You need to pay: "<<pay;
}
else{
gotoxy(46,20);
cout<<"Sorry!Wrong choice";
}
gotoxy(46,22);
cout<<"Enter Your Card no. : ";
cin>>card;
gotoxy(46,24);
cout<<"\nYour booking is successful";
clrscr();
}
//function for getting the details ofcustomer
void book::getdtls()
{
gotoxy(22,5);
cout<<"Book your trip:";
cout<<"\n\n"<<setw(24)<<" Enter your Name:";
cout<<"\n\n"<<setw(24)<<" Enter your Number:";
cout<<"\n\n"<<setw(24)<<" Your email id:";
cout<<"\n\n"<<setw(24)<<"Enter your Gender:";
cout<<"\n\n"<<setw(24)<<"     Options available   1.Organise a Trip  2.Holiday Package";
cout<<"\n\n"<<setw(24)<<"Enter your choice:";
gotoxy(26,7);
cin>>name;
gotoxy(26,9);
cin>>number;
gotoxy(26,11);
cin>>eid;
gotoxy(26,13);
cin>>gender;
gotoxy(26,17);
cin>>n;
clrscr();
if(n==1)
{
cout<<"\n"<<setw(11)<<"Source:"<<"\t\t\t\t\t"<<"Destination:";
cout<<"\n\n"<<setw(11)<<"Number of people:"<<"\t\t\t\t"<<"Mode of transport-";
cout<<"\n\n"<<setw(11)<<"Hotel Name :"<<"\t\t\t\t\t"<<"1.Flight  2.Bus";
cout<<"\n\n"<<setw(11)<<"Check-in date:"<<"\t\t\t\t\t"<<"Enter choice: ";
cout<<"\n\n"<<setw(11)<<"Check-out date:"<<"\t\t\t\t\t"<<"Journey start date:-";
cout<<"\n\n"<<setw(11)<<"Type of room:"<<"\t\t\t\t\t"<<"Journey return date:-";
cout<<"\n\n"<<setw(11)<<"    1. Single Bed,Non-AC Room -Rs 850";
cout<<"\n\n"<<setw(11)<<"    2. Single Bed,AC Room -Rs 1500";
cout<<"\n\n"<<setw(11)<<"    3. Double Bed,Non-AC Room-Rs 1650";
cout<<"\n\n"<<setw(11)<<"    4. Double Bed,AC Room-Rs 2000";
cout<<"\n\n"<<setw(11)<<"Enter choice: ";
cout<<"\n\n"<<setw(11)<<"Enter no of rooms: ";
gotoxy(12,2);
cin>>src;
gotoxy(62,2);
cin>>dest;
gotoxy(20,4);
cin>>p;
gotoxy(15,6);
cin>>hname;
gotoxy(17,8);
cin>>cind;
gotoxy(17,10);
cin>>coutd;
gotoxy(17,22);
cin>>tr;
gotoxy(20,24);
cin>>nor;
gotoxy(64,8);
cin>>e;
gotoxy(70,10);
cin>>jsd;
gotoxy(70,12);
cin>>jrd;
fb();
payment();
loading1();
cout<<"Your booking is successful......";
cout<<"\n\t\t\t  Your booking id: "<<nextid();
}
else
{
if(n==2)
{
cout<<"\n\t\t Enter the code of package:";
cin>>code;
if(code==1)
{ ofstream fout;
  fout.open("Goa.txt",ios::out);
  fout<<"\n\t You have booked 5 Days Goa Package for 4 people"<<endl;
  fout<<"\t Venue: HOTEL SUNRAYS"<<endl;
  fout<<"\t Mode of Transport: By Flight"<<endl;
  fout<<"\t Total Cost: Rs.23,000 "<<endl;
  fout<<"\t Thank You for chossing us"<<endl;
fout.close();
const int d=250;
char line[d];
ifstream fin;
fin.open("Goa.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
else if(code==3)
     {ofstream fout;
     fout.open("Shimla.txt",ios::out);
     fout<<"\n\t You have booked 6 Days Shimla Package for 2 people"<<endl;
     fout<<"\t Venue: HOTEL OLIVE"<<endl;
     fout<<"\t Mode of Transport: By Flight"<<endl;
     fout<<"\t Total Cost: Rs.26,550 "<<endl;
     fout<<"\t Thank You for chossing us"<<endl;
fout.close();
char line[d];
ifstream fin;
fin.open("Shimla.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
else if(code==5)
{ ofstream fout;
  fout.open("Amritsar.txt",ios::out);
  fout<<"\n\t You have booked 3 Days Amritsar Package for 6 people"<<endl;
  fout<<"\t Venue: SINGH'S HOTEL"<<endl;
  fout<<"\t Mode of Transport: By Flight"<<endl;
  fout<<"\t Total Cost: Rs.28,000 "<<endl;
  fout<<"\t Thank You for chossing us"<<endl;
fout.close();
char line[d];
ifstream fin;
fin.open("Amritsar",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
 else if(code==2)
{ ofstream fout;
  fout.open("Mumbai.txt",ios::out);
  fout<<"\n\t You have booked 4 Days Mumbai Package for 3 people"<<endl;
  fout<<"\t Venue: BLUE PALACE "<<endl;
  fout<<"\t Mode of Transport: By Bus "<<endl;
  fout<<"\t Total Cost: Rs.19,700 "<<endl;
  fout<<"\t Thank You for chossing us"<<endl;
fout.close();
char line[d];
ifstream fin;
fin.open("Mumbai.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
 else if(code==4)
{ ofstream fout;
  fout.open("Uttarakhand.txt",ios::out);
  fout<<"\n\t You have booked 5 Days Uttarakhand Package for 5 people"<<endl;
  fout<<"\t Venue: NANDAN KANAN "<<endl;
  fout<<"\t Mode of Transport: By Flight "<<endl;
  fout<<"\t Total Cost: Rs.24,800 "<<endl;
  fout<<"\t Thank You for chossing us"<<endl;
fout.close();
char line[d];
ifstream fin;
fin.open("Uttarakhand.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
 else if(code==6)
{ ofstream fout;
  fout.open("Delhi.txt",ios::out);
  fout<<"\n\t You have booked 3 Days Delhi Package for 5 people"<<endl;
  fout<<"\t Venue: KING'S HOTEL "<<endl;
  fout<<"\t Mode of Transport: By Bus"<<endl;
  fout<<"\t Total Cost: Rs.23,000 "<<endl;
  fout<<"\t Thank You for chossing us"<<endl;
fout.close();
char line[d];
ifstream fin;
fin.open("Delhi.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
}
cout<<"\t Enter your card no:";
cin>>cardn;
loading();
}
putd();
}
 //function for choosing mode of transport
void book::fb()
{
if(e==1)
{
gotoxy(46,14);
cout<<"Enter Flight Name:";
cin>>fname;
gotoxy(48,16);
cout<<"Enter Flight Number:";
cin>>fno;
gotoxy(46,18);
cout<<"Enter Departure Time: ";
cin>>tf;
}
else
if(e==2)
{
gotoxy(46,14);
cout<<"Enter Bus Name:";
cin>>bname;
gotoxy(46,16);
cout<<"Enter Bus No.:";
cin>>bno;
gotoxy(46,18);
cout<<"Enter Departure Time:";
cin>>tb;
}
}
//viewing of hotels
 class hotel
{
public:
int dname;
void getdest();
void showhotel();
};
void hotel::getdest()
{
fstream fout;
fout.open("Hotel.txt",ios::out|ios::trunc);
fout.seekg(0,ios::end);
fout<<"        1.  Agra                 6. Gangtok  "<<endl;
fout<<"        2.  Amritsar             7. Jaipur "<<endl;
fout<<"        3.  Chennai              8. Jodhpur "<<endl;
fout<<"        4.  Darjeeling           9. Kolkata "<<endl;
fout<<"        5.  Goa                 10. Kanyakumari  "<<endl;
fout.close();
//const int ds=50;
char line[h];
ifstream fin;
fin.open("Hotel.txt",ios::in);
cout<<"\n           Destinations provided:\n";
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
cout<<"\nEnter destination code:";
cin>>dname;
}

void hotel::showhotel()
{
if(dname==1)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Lantern      56,J.N Road       30         AC Rs.3500      AC Rs.4500"<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Mini Agra    61,Mumtaz Nagar   60	    AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Shahjahan    59,Mumtaz Nagar   70          AC Rs.4800     AC Rs.5800"<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==2)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Singh Palace  49,Singh Road    90	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Fortune       56,Ranjit Nagar  70	  AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Elite         59,Singh Road    60	  AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
else if(dname==3)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Meenakshi   50,J.N Road       30	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Crown       68,Tirupati Nagar 70	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Shree       27,Laxmi Nagar   90	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==4)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Prince Palace 90,J.T Road     80	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Pearl Palace  75,Ghanti Nagar 90	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Nirmal        34,Mishti Road   70	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==5)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Kings Palace  29,F.T Road     80	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Residency     78,H.J Road     30	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Jasmine       34,Lotus Road   56	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==6)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Royal Blu     24,G.F Road     50	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n President     6,Avenue Road   50	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Planet        49,Rosell Road  60	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==7)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Maharaja Palace 46,Maharaja Road  55	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Rose Valley     92,New Market     45	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Planet         21,M.G. Road       60	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=50;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==8)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Raj Vilas    67,New Town Road    50	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Avenue       69,Zohari Road      70	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Prince       23,M.T. Road        60	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=100;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==9)
 {    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Eastern Pride  67,Townhall Road   50	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Sunshine       21,Salt Lake Road  40	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Crown Palace   93,N.S.C.B Roa     70	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=100;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
 else if(dname==10)
{    fstream fout;
fout.open("Hotel.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n Hotel Name    Address      Availability          Price"<<endl;
fout<<"                                           Single Bed      Double Bed"<<endl;
fout<<"\n Meenakshi    92,Swamy Road      60	 AC Rs.3500      AC Rs.4500             "<<endl;
fout<<"				       Non-AC Rs.3000  Non-AC Rs.4000"<<endl;
fout<<"\n Sunshine     21,Surya Marg      50	 AC Rs.3100      AC Rs.4100          "<<endl;
fout<<"                                       Non-AC RS.2600  Non-AC Rs.3600"<<endl;
fout<<" Water Lily   93,M.B.S Ro        55	 AC Rs.4800     AC Rs.5800             "<<endl;
fout<<"                                       Non-AC Rs.4300  Non-AC Rs.5300"<<endl;
fout.close();
//const int h=100;
char line[h];
fstream fin;
fin.open("Hotel.txt",ios::in);
while(fin)
{fin.getline(line,h);
cout<<line<<endl;
}
fin.close();
 }
}
//view the flights
 class flight{
public:
int scode;
int dcode;
int tcode;
int fcode;
void getfdetails();
void getsrc();
void getdes();
void showf();
};
void flight::getsrc()
{
fstream fout;
fout.open("Flight.txt",ios::out);
fout.seekg(ios::beg);
fout<<"\nSources available are:"<<endl;
fout<<"\n1.Indore  2.Noida  3.Bengaluru "<<endl;
fout.close();
//const int s=50;
char line[f];
ifstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
cout<<"\nEnter source code:";
cin>>scode;
}
void flight::getdes(){
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0);
fout<<"        1.  Agra                 6. Gangtok  "<<endl;
fout<<"        2.  Amritsar             7. Jaipur "<<endl;
fout<<"        3.  Chennai              8. Jodhpur "<<endl;
fout<<"        4.  Darjeeling           9. Kolkata "<<endl;
fout<<"        5.  Goa                 10. Kanyakumari  "<<endl;
fout.close();
//const int ds=50;
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
cout<<"\n           Destinations provided:\n";
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
cout<<"\nEnter destination code:";
cin>>dcode;
}
void flight::getfdetails()
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"     1.A.M.  2.P.M. "<<endl;
fout.close();
//const int fs=50;
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
cout<<"\nFlight Timing Available:";
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
cout<<"Enter time code:";
cin>>tcode;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\nFlight you want to prefer: ";
fout<<"   1.Air India     2.Jet Airways "<<endl;
fout.close();
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
cout<<"Enter flight code:";
cin>>fcode;
}
void flight::showf()
{
if(scode==1 && dcode==1 && tcode==1 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Agra "<<endl;
fout<<"\n\t Flight No.: AI123     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 9:30 a.m. Arrival    :12:30 p.m."<<endl;
fout<<"\n\t Duration  : 3 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 3250  Economic:Rs 4000"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==2 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Amritsar "<<endl;
fout<<"\n\t Flight No.: AI663     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 9:00 p.m. Arrival    :12:30 a.m."<<endl;
fout<<"\n\t Duration  : 3 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 3800  Economic:Rs 4500"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==3 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Chennai "<<endl;
fout<<"\n\t Flight No.: JA297     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 p.m. Arrival    :5:00 a.m."<<endl;
fout<<"\n\t Duration  : 7 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5000  Economic:Rs 5900          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==4 && tcode==1 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Darjeeling "<<endl;
fout<<"\n\t Flight No.: AI511     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 8:00 a.m. Arrival    :4:00 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5200  Economic:Rs 6000         "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==5 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Goa   "<<endl;
fout<<"\n\t Flight No.: JA410     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 7:00 p.m. Arrival    :1:30 a.m."<<endl;
fout<<"\n\t Duration  : 6 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 4580  Economic:Rs 5790            "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==6 && tcode==1 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Gangtok "<<endl;
fout<<"\n\t Flight No.: AI812     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 6:00 a.m. Arrival    :2:30 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5899  Economic:Rs 7100          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==7 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Jaipur "<<endl;
fout<<"\n\t Flight No.: JA297     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 11:00 p.m. Arrival    :4:30 a.m."<<endl;
fout<<"\n\t Duration  : 5 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 4000  Economic:Rs 4700"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==8 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Jodhpur "<<endl;
fout<<"\n\t Flight No.: JA301     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 7:00 a.m. Arrival    :1:00 p.m."<<endl;
fout<<"\n\t Duration  : 6 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 4375  Economic:Rs 5255          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==9 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Kolkata "<<endl;
fout<<"\n\t Flight No.: AI945     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 9:30 p.m. Arrival    :5:30 a.m."<<endl;
fout<<"\n\t Duration  : 8 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5620  Economic:Rs 6500              "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==1 && dcode==10 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Indore    Destination:Kanyakumari "<<endl;
fout<<"\n\t Flight No.: JA471     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 a.m. Arrival    :7:00 a.m."<<endl;
fout<<"\n\t Duration  : 9 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 6000  Economic:Rs 6500             "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==1 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida      Destination:Agra "<<endl;
fout<<"\n\t Flight No.: JA430      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:30 a.m. Arrival    :12:30 p.m."<<endl;
fout<<"\n\t Duration  : 2 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 3350  Economic:Rs 4200               "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==2 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Amritsar "<<endl;
fout<<"\n\t Flight No.: AI755     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 8:00 p.m. Arrival    :12:30 a.m."<<endl;
fout<<"\n\t Duration  : 4 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 3890  Economic:Rs 4510            "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==3 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Chennai "<<endl;
fout<<"\n\t Flight No.: JA667     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 a.m. Arrival    :7:00 p.m."<<endl;
fout<<"\n\t Duration  : 9 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5600  Economic:Rs 6900          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==4 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Darjeeling "<<endl;
fout<<"\n\t Flight No.: JA520     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 8:00 a.m. Arrival    :6:00 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5290  Economic:Rs 6300         "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==5 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Goa   "<<endl;
fout<<"\n\t Flight No.: AI099     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 7:00 p.m. Arrival    :3:00 a.m."<<endl;
fout<<"\n\t Duration  : 8 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5580  Economic:Rs 6790            "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==6 && tcode==1 && fcode==1)
{
fstream fout;
fout.open("Flight.dat",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida    Destination:Gangtok "<<endl;
fout<<"\n\t Flight No.: AI666    Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 8:00 a.m. Arrival    :4:30 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5600  Economic:Rs 6430          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.dat",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==7 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.dat",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida    Destination:Jaipur "<<endl;
fout<<"\n\t Flight No.: JA337    Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 5:00 a.m. Arrival   :9:30 a.m."<<endl;
fout<<"\n\t Duration  : 4 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 4500  Economic:Rs 5000"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==8 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Jodhpur "<<endl;
fout<<"\n\t Flight No.: JA309     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 6:30 a.m. Arrival    :12:00 p.m."<<endl;
fout<<"\n\t Duration  : 5 hours 30 minutes      "<<endl;
fout<<"\n\t Cost      :Business :Rs 4805  Economic:Rs 5455          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==9 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Kolkata "<<endl;
fout<<"\n\t Flight No.: AI989     Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 7:30 p.m. Arrival    :5:30 a.m."<<endl;
fout<<"\n\t Duration  : 10 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5820  Economic:Rs 6800              "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==2 && dcode==10 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Noida     Destination:Kanyakumari "<<endl;
fout<<"\n\t Flight No.: JA487     Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 p.m. Arrival    :10:00 a.m."<<endl;
fout<<"\n\t Duration  : 12 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 6800  Economic:Rs 7300             "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==1 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Agra "<<endl;
fout<<"\n\t Flight No.: AI544      Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 9:30 p.m.  Arrival    :7:30 a.m."<<endl;
fout<<"\n\t Duration  : 10 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 6250  Economic:Rs 8000"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==2 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Amritsar "<<endl;
fout<<"\n\t Flight No.: JA400      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 p.m.  Arrival    :7:30 a.m."<<endl;
fout<<"\n\t Duration  : 9 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 6200  Economic:Rs 7120"<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==3 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Chennai "<<endl;
fout<<"\n\t Flight No.: JA207      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 11:00 a.m. Arrival    :1:00 p.m."<<endl;
fout<<"\n\t Duration  : 2 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 4000  Economic:Rs 4590          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==4 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Darjeeling "<<endl;
fout<<"\n\t Flight No.: AI001      Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 7:00 p.m.  Arrival    :5:00 a.m."<<endl;
fout<<"\n\t Duration  : 10 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5250  Economic:Rs 6150         "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==5 && tcode==2 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Goa   "<<endl;
fout<<"\n\t Flight No.: JA887      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 1:00 p.m.  Arrival    :6:30 p.m."<<endl;
fout<<"\n\t Duration  : 5 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5280  Economic:Rs 6090            "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==6 && tcode==1 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Gangtok "<<endl;
fout<<"\n\t Flight No.: AI380      Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 5:00 a.m.  Arrival    :3:30 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 6000  Economic:Rs 6780          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==7 && tcode==2 && fcode==1)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Jaipur "<<endl;
fout<<"\n\t Flight No.: AI197      Flight Name:Air India"<<endl;
fout<<"\n\t Departure : 2:00 p.m.  Arrival    :10:30 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours 30 minutes     "<<endl;
fout<<"\n\t Cost      :Business :Rs 5670  Economic:Rs 6775     "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==8 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Jodhpur "<<endl;
fout<<"\n\t Flight No.: JA301      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 6:00 a.m.  Arrival    :4:00 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 5875  Economic:Rs 6755          "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==9 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Kolkata "<<endl;
fout<<"\n\t Flight No.: JA900      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 9:30 a.m.  Arrival    :4:30 a.m."<<endl;
fout<<"\n\t Duration  : 7 hours     "<<endl;
fout<<"\n\t Cost      :Business :Rs 6720  Economic:Rs 7500              "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else if(scode==3 && dcode==10 && tcode==1 && fcode==2)
{
fstream fout;
fout.open("Flight.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Bengaluru  Destination:Kanyakumari "<<endl;
fout<<"\n\t Flight No.: JA942      Flight Name:Jet Airways"<<endl;
fout<<"\n\t Departure : 10:00 a.m. Arrival    :1:00 p.m."<<endl;
fout<<"\n\t Duration  : 3 hours      "<<endl;
fout<<"\n\t Cost      :Business :Rs 4800  Economic:Rs 5600             "<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("Flight.txt",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
else
{
fstream fout;
fout.open("exitf",ios::out);
fout.seekg(0,ios::end);
fout<<"\n\t Sorry! No flight is available."<<endl;
fout.close();
char line[f];
fstream fin;
fin.open("exitf",ios::in);
while(fin)
{fin.getline(line,f);
cout<<line<<endl;
}
fin.close();
}
}
//view the buses available
class bus
 {
public:
int srcb;
int desb;
int btype;
int btime;
void getbdes();
void getbsrc();
void getbdetails();
void showbus();
};
void bus::getbdes()
{
fstream fout;
fout.open("Bus.txt",ios::out);
fout.seekg(0,ios::end);
fout<<"        1.  Agra                 6. Gangtok  "<<endl;
fout<<"        2.  Amritsar             7. Jaipur "<<endl;
fout<<"        3.  Chennai              8. Jodhpur "<<endl;
fout<<"        4.  Darjeeling           9. Kolkata "<<endl;
fout<<"        5.  Goa                 10. Kanyakumari  "<<endl;
fout.close();
//const int ds=50;
char line[d];
fstream fin;
fin.open("Bus.txt",ios::in);
cout<<"\n           Destinations provided:\n";
while(fin)
{fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
cout<<"\nEnter destination code:";
cin>>desb;
}
void bus::getbsrc()
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"        1.  Chandigarh          7. Lucknow   "<<endl;
fout<<"        2.  Dispur              8. New Delhi  "<<endl;
fout<<"        3.  Guwahati            9. Pune      "<<endl;
fout<<"        4.  Hyderabad          10. Ranchi    "<<endl;
fout<<"        5.  Jaisalmer          11. Siliguri    "<<endl;
fout<<"        6.  Kolkata            12. Tirupati  "<<endl;
fout.close();
const int so=50;
char line[so];
fstream fin;
fin.open("Bus.txt",ios::in);
cout<<"\n           Sources provided:\n";
while(fin)
{fin.getline(line,so);
cout<<line<<endl;
}
fin.close();
cout<<"\nEnter source code:";
cin>>srcb;
}
void bus::getbdetails()
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\t1.Sleeper   2.Video "<<endl;
fout.close();
const int bs=60;
char line[bs];
fstream fin;
fin.open("Bus.txt",ios::in);
cout<<"\nType Of Bus Available:";
while(fin)
{fin.getline(line,bs);
cout<<line<<endl;
}
fin.close();
cout<<"Enter bus type code:";
cin>>btype;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\nBus Time you want to prefer: ";
fout<<"  1.A.M.    2.P.M. "<<endl;
fout.close();
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,bs);
cout<<line<<endl;
}
fin.close();
cout<<"Enter bus time code:";
cin>>btime;
}
void bus::showbus()
{
if(srcb==1 && desb==2 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Chandigarh   Destination:Amritsar "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Singh Travels"<<endl;
fout<<"\n\t Departure : 8:30 a.m.    Arrival    :4:30 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours      Cost       :Rs 1500 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}

 else if(srcb==1 && desb==2 && btype==2 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Chandigarh   Destination:Amritsar "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Singh Travels"<<endl;
fout<<"\n\t Departure : 10:30 p.m.   Arrival    :6:30 a.m."<<endl;
fout<<"\n\t Duration  : 8 hours      Cost       :Rs 1600 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
 }
 else if(srcb==3 && desb==9 && btype==1 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Guwahati     Destination:Kolkata "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Brahma Travels"<<endl;
fout<<"\n\t Departure : 10:00 p.m.   Arrival    :8:00 p.m."<<endl;
fout<<"\n\t Duration  : 22 hours     Cost       :Rs 2200 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
 }
 else if(srcb==4 && desb==3 && btype==2 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Hyderabad    Destination:Chennai  "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Balaji Travels"<<endl;
fout<<"\n\t Departure : 8:30 a.m.    Arrival    :6:30 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours     Cost       :Rs 1450 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
 else if(srcb==4 && desb==3 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Hyderabad    Destination:Chennai  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Balaji Travels"<<endl;
fout<<"\n\t Departure : 10:30 a.m.   Arrival    :9:30 p.m."<<endl;
fout<<"\n\t Duration  : 11 hours     Cost       :Rs 1250 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==5 && desb==7 && btype==2 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Jaisalmer    Destination:Jaipur  "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Maa Travels"<<endl;
fout<<"\n\t Departure : 8:30 a.m.    Arrival    :2:30 p.m."<<endl;
fout<<"\n\t Duration  : 6 hours      Cost       :Rs 900 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
 else if(srcb==5 && desb==7 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Jaisalmer    Destination:Jaipur  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Dhariwal Travels"<<endl;
fout<<"\n\t Departure : 9:30 a.m.    Arrival    :3:30 p.m."<<endl;
fout<<"\n\t Duration  : 6 hours      Cost       :Rs 700 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==5 && desb==8 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Jaisalmer    Destination:Jodhpur  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Dhariwal Travels"<<endl;
fout<<"\n\t Departure : 10:30 a.m.   Arrival    :5:30 p.m."<<endl;
fout<<"\n\t Duration  : 7 hours      Cost       :Rs 800 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==5 && desb==8 && btype==2 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Jaisalmer    Destination:Jodhpur  "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Maa Travels"<<endl;
fout<<"\n\t Departure : 8:30 a.m.    Arrival    :2:30 p.m."<<endl;
fout<<"\n\t Duration  : 6 hours      Cost       :Rs 900   "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==6 && desb==4 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Kolkata      Destination:Darjeeling  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Durga Travels"<<endl;
fout<<"\n\t Departure : 8:30 a.m.    Arrival    :6:30 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours     Cost       :Rs 800 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==6 && desb==4 && btype==2 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Kolkata      Destination:Darjeeling  "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Durga Travels"<<endl;
fout<<"\n\t Departure : 9:30 a.m.    Arrival    :7:30 p.m."<<endl;
fout<<"\n\t Duration  : 10 hours     Cost       :Rs 1000   "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==7 && desb==1 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Lucknow      Destination:Agra  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Tabbasum Travels"<<endl;
fout<<"\n\t Departure : 8:00 a.m.    Arrival    :1:00 p.m."<<endl;
fout<<"\n\t Duration  : 5 hours      Cost       :Rs 400 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==8 && desb==1 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : New Delhi    Destination:Agra  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Fast  Travels"<<endl;
fout<<"\n\t Departure : 9:00 a.m.    Arrival    :1:00 p.m."<<endl;
fout<<"\n\t Duration  : 5 hours      Cost       :Rs 700 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==8 && desb==1 && btype==1 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : New Delhi    Destination:Agra  "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Fast  Travels"<<endl;
fout<<"\n\t Departure : 2:00 p.m.    Arrival    :7:00 p.m."<<endl;
fout<<"\n\t Duration  : 5 hours      Cost       :Rs 700 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==9 && desb==5 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Pune         Destination:Goa   "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Shivaji  Travels"<<endl;
fout<<"\n\t Departure : 10:00 a.m.   Arrival    :11:00 p.m."<<endl;
fout<<"\n\t Duration  : 13 hours     Cost       :Rs 1500 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
 else if(srcb==9 && desb==5 && btype==2 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Pune         Destination:Goa   "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Uttara  Travels"<<endl;
fout<<"\n\t Departure : 7:00 p.m.    Arrival    :8:00 a.m."<<endl;
fout<<"\n\t Duration  : 13 hours     Cost       :Rs 1750 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==10 && desb==6 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Ranchi       Destination:Gangtok   "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Royal  Travels"<<endl;
fout<<"\n\t Departure : 7:00 a.m.    Arrival    :10:00 p.m."<<endl;
fout<<"\n\t Duration  : 15 hours     Cost       :Rs 1200 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==10 && desb==6 && btype==2 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Ranchi       Destination:Gangtok   "<<endl;
fout<<"\n\t Bus Type  : Video Coach  Bus Name   :Royal  Travels"<<endl;
fout<<"\n\t Departure : 8:00 p.m.    Arrival    :11:00 a.m."<<endl;
fout<<"\n\t Duration  : 15 hours     Cost       :Rs 1500 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==10 && desb==9 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Ranchi       Destination:Kolkata   "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Upsara  Travels"<<endl;
fout<<"\n\t Departure : 8:00 a.m.    Arrival    :3:00 p.m."<<endl;
fout<<"\n\t Duration  : 7 hours      Cost       :Rs 400 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==11 && desb==4 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Siliguri     Destination:Darjeeling   "<<endl;
fout<<"\n\t Bus Type  : Sleeper      Bus Name   :Maa Durga Travels"<<endl;
fout<<"\n\t Departure : 8:00 a.m.    Arrival    :12:00 p.m."<<endl;
fout<<"\n\t Duration  : 4 hours      Cost       :Rs 400 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==12 && desb==10 && btype==1 && btime==1)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Tirupati       Destination:Kanyakumari   "<<endl;
fout<<"\n\t Bus Type  : Sleeper        Bus Name   :Meenakshi  Travels"<<endl;
fout<<"\n\t Departure : 7:00 a.m.      Arrival    :3:00 p.m."<<endl;
fout<<"\n\t Duration  : 8 hours        Cost       :Rs 600 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
else if(srcb==12 && desb==10 && btype==2 && btime==2)
{
fstream fout;
fout.open("Bus.txt",ios::out|ios::ate|ios::trunc);
fout.seekg(0,ios::end);
fout<<"\n\t Source    : Tirupati       Destination:Kanyakumari   "<<endl;
fout<<"\n\t Bus Type  : Video Coach    Bus Name   :Meenakshi  Travels"<<endl;
fout<<"\n\t Departure : 4:00 p.m.      Arrival    :11:00 p.m."<<endl;
fout<<"\n\t Duration  : 7 hours        Cost       :Rs 900 "<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("Bus.txt",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
 else
 {
 fstream fout;
fout.open("exitb",ios::out);
fout.seekg(0,ios::end);
fout<<"\n\t Sorry! No Bus is available."<<endl;
fout.close();
char line[b];
fstream fin;
fin.open("exitb",ios::in);
while(fin)
{fin.getline(line,b);
cout<<line<<endl;
}
fin.close();
}
 }
 //view holiday packages
 class packages
{
public:
void display();
};
void packages::display()
{
fstream fout;
fout.open("Packages.txt",ios::out);
fout.seekg(ios::beg);
cout<<"\n\t Amazing Holiday Packages available for people in Indore ";
fout<<"\n\t\t   Holiday Packages provided: \n";
fout<<" \n\t 1. Goa trip"<<setw(30)<<"\t 2.Mumbai"<<endl;
fout<<" \t    4 People"<<setw(33)<<"\t   3 People"<<endl;
fout<<" \t    5 Days"<<setw(37)<<"\t   4 Days"<<endl;
fout<<" \t    HOTEL SUNRAYS"<<setw(35)<<"\t   BLUE PALACE"<<endl;
fout<<" \t    By Flight"<<setw(33)<<"\t   By Bus"<<endl;
fout<<" \t    Rs.23,000"<<setw(33)<<"\t   Rs.19,700"<<endl;
fout<<" \n\t 3. Shimla "<<setw(38)<<"\t 4.Uttarakhand"<<endl;
fout<<" \t    2 People"<<setw(33)<<"\t   5 People"<<endl;
fout<<" \t    6 Days"<<setw(37)<<"\t   5 Days"<<endl;
fout<<" \t    HOTEL OLIVE"<<setw(33)<<"\t   NANDAN KANAN"<<endl;
fout<<" \t    By Flight"<<setw(33)<<"\t   By Flight"<<endl;
fout<<" \t    Rs.26,550"<<setw(33)<<"\t   Rs.24,800"<<endl;
fout<<" \n\t 5. Amritsar"<<setw(33)<<"\t 6.Delhi"<<endl;
fout<<" \t    6 People"<<setw(33)<<"\t   5 People"<<endl;
fout<<" \t    3 Days"<<setw(33)<<"\t   3 Days"<<endl;
fout<<" \t    SINGH'S HOTEL"<<setw(33)<<"\t   KING'S HOTEL"<<endl;
fout<<" \t    By Flight"<<setw(33)<<"\t   By Bus"<<endl;
fout<<" \t    Rs.28,000"<<setw(33)<<"\t   Rs.23,000"<<endl;
 fout.close();
//const int d=250;
char line[d];
fstream fin;
fin.open("Packages.txt",ios::in);
while(fin)
{
fin.getline(line,d);
cout<<line<<endl;
}
fin.close();
}
void main()
{
clrscr();
destination d1;
hotel h1;
flight f1;
bus b1;
book a1;
packages p1;
int x;
int i;
while(x!=7)
{
clrscr();
cout<<char(201);
for(i=0;i<78;i++)
{
gotoxy(i,0);
cout<<char(205);
}
cout<<char(187);
for(i=2;i<24;i++)
{
gotoxy(1,i);
cout<<char(186);
}
gotoxy(1,24);
cout<<char(200);
for(i=0;i<78;i++)
{
cout<<char(205);
}
gotoxy(78,1);
for(i=2;i<24;i++)
{ gotoxy(80,i);
cout<<char(186);
}
gotoxy(80,24);
cout<<char(188);

gotoxy(27,5);

cout<<"\t  Travelino";
gotoxy(27,6);
cout<<"**************************";
gotoxy(10,8);
cout<<" Explore the world with us. Make travelling a fun experience. ";
gotoxy(12,11);
cout<<" Services provided by us:";
gotoxy(13,12);
cout<<" Enter the appropriate number:";
gotoxy(13,13);
cout<<" 1: Destinations provided";
gotoxy(13,14);
cout<<" 2: Holiday packages";
gotoxy(13,15);
cout<<" 3: Flights";
gotoxy(13,16);
cout<<" 4: Buses";
gotoxy(13,17);
cout<<" 5: Hotels";
gotoxy(13,18);
cout<<" 6: Create Account";
gotoxy(13,19);
cout<<" 7: Quit";
gotoxy(15,21);
cout<<"Enter your choice: ";
cin>>x;
clrscr();

switch(x)
{
case 1:
d1.desdisplay();
d1.getdata();
d1.showdata();
getch();
break;
case 2:
p1.display();
getch();
break;
case 3:
f1.getsrc();
f1.getdes();
f1.getfdetails();
f1.showf();
getch();
break;
case 4:
b1.getbdes();
b1.getbsrc();
b1.getbdetails();
b1.showbus();
getch();
break;
case 5:
h1.getdest();
h1.showhotel();
getch();
break;
case 6:
a1.getdtls();
getch();
break;
default:
cout<<"error";
getch();
}
}return;
}

