#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
int menu();
int input();
int search();
int data();
int del();
int modify();
int wrong();
class vaccine
{
	public:
		int code;
		char name[50];
		unsigned long int aadhar;
		char gender[50];
		int age;
		char pro[50];
		float bp;
		float b_temp;
		char add[50];
		unsigned long int phnno;
		int aadhar1()
		{
			return aadhar;
		}
	int enter()
	{    
	    cout<<"\n\n\n";
	  	cout<<"\n\t\t\tENTER NAME  : ";
		cin.ignore();
		gets(name);
		cout<<"\n\t\t\tENTER AADHAR NO : ";
		cin>>aadhar;
		cout<<"\n\t\t\tENTER GENDER  : ";
		cin>>gender;
		cout<<"\n\t\t\tENTER AGE : ";
		cin>>age;
		cout<<"\n\t\t\tENTER PROFFESSION : ";
		cin>>pro;
		cout<<"\n\t\t\tENTER BLOOD PRESSURE : ";
		cin>>bp;
		cout<<"\n\t\t\tENTER BODY TEMPERATURE : ";
		cin>>b_temp;
		cout<<"\n\t\t\tENTER PERMENENT ADDRESS : ";
		cin.ignore();
		gets(add);
		cout<<"\n\t\t\tENTER PHONE NO. : ";
		cin>>phnno;
		cout<<"\t\t\t***************************************************************\n";
        cout<<"\t\t\t***************************************************************\n";
        cout<<"\n\n\t\t\t\t\tfile recording data operation added successfully. :)\n";
        cout<<"\t\t\t----------------------------------------------------------------\n";
	}
    int display()
    { 
        cout<<"\t\t\t_________________________\n";
    	cout<<"\t\t\t|                        |\n";
    	cout<<"\t\t\t|       D.E.T.A.I.L.S    |\n";
    	cout<<"\t\t\t|________________________|\n";
		cout<<"\n\t\tNAME  : "<<name;
		cout<<"\n\t\tAADHAR NO : "<<aadhar;
		cout<<"\n\t\tGENDER  : "<<gender;
		cout<<"\n\t\tAGE : "<<age;
		cout<<"\n\t\tPROFFESSION : "<<pro;
		cout<<"\n\t\tBLOOD PRESSURE : "<<bp;
		cout<<"\n\t\tBODY TEMPERATURE : "<<b_temp;
		cout<<"\n\t\tPERMENENT ADDRESS : "<<add;
		cout<<"\n\t\tENTER PHONE NO. : "<<phnno;
	}

};
vaccine v;
int main()
{
	int p,c,l,code;
	char m;
	char n[30];
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"\t\t\t*                      ______________                 *\n";
	cout<<"\t\t\t*                     |    VACCINE   |                *\n";
	cout<<"\t\t\t*                     |  MANAGEMENT  |                *\n";
	cout<<"\t\t\t*                     |    SYSTEM    |                *\n";
	cout<<"\t\t\t*                     |______________|                *\n";
	cout<<"\t\t\t*                                                     *\n";
	cout<<"\t\t\t*         !!!!!!Get yourself vaccinated now!!!!!!!    *\n";
	cout<<"\t\t\t*                                                     *\n";
    cout<<"\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"\t\t\t\t\t\t\tpowered by ~\n";
	cout<<"\t\t\t\t\t\t\tPHCODE(priyanshi huria)\n";
	getch();
    system("cls");
    cout<<"\n\n\n\n\n";
    cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"\t\t\t\t%%                                         %%\n";
    cout<<"\t\t\t\t%%    ----ENTER USERNAME AND PASSWORD----  %%\n";
    cout<<"\t\t\t\t%%                                         %%\n";
    cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"\n\n\n";
    cout<<"\t\t\t\t login here :)\n";
    cout<<"\n\n\t\t\t\t\t*******************************************\n";
    cout<<"\t\t\t\t\tID/USERNAME ~ ";
    cin>>n;
    cout<<"\t\t\t\t\tPASSWORD ~ ";
    cin>>p;
    cout<<"\n\n\t\t\t\t\t**********************************************\n";
    if((strcmp(n,"priya")==0)&&(p==2002))	
    {
    	cout<<"\n\t\t\t\t\t\t      capture code : 4343\n";
    	cout<<"\t\t\t\t\t\t      enter capture code : ";
    	cin>>c;
    	cout<<"\n\n\t\t\t\t\t**********************************************\n";
    	if(c==4343)
    	{   
		   menu();   
		}
		 else
		{
			cout<<"\n\n\t\t\t                   !!!WARNING!!!                       \n";
			cout<<"\t\t\tyou have one more trial,otherwise you will be blocked\n\n\n";
			cout<<"\t\t\t******************************************************\n";
			cout<<"\n\t\t\t      capture code : 3728\n";
			cout<<"\t\t\t      enter capture code : ";
			cin>>l;
			cout<<"\n\t\t\t*****************************************************\n";
			if(l==3728)
			{
			    menu();
			}
			else
			{
			     cout<<"\t\t\t\t\t\tyou are blocked\n";
			}
			
		}
    	
	}
	else
	{
		cout<<"\t\tsorry,wrong username and password!!!!!\n";
	}
}
int input()
{
	
	ofstream f("tanu.txt",ios::app);
	v.enter();
	f.write((char*)&v,sizeof(v));
	f.close();
}
int search()
{
	int t,c=0;
	cout<<"\n\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t@                                                             @\n"; 
	cout<<"\t\t\t\t@              search your data with correct information      @\n";
	cout<<"\t\t\t\t@                                                             @\n";
    cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\n\t\t\t\t enter aadhar no. to find your details : ";
	cin>>t;
	ifstream s("tanu.txt",ios::app);
	while(s.read((char*)&v,sizeof(v)))
	{
		if(t==v.aadhar1())
		{
			v.display();
			c++;
		}
		if(c==0)
		{
			cout<<"\n\n\n\t\t\taadhar no. does not match\n";
		}
	}
	s.close();
}
int data()
{
    ifstream g("tanu.txt",ios::app);
    while(g.read((char*)&v,sizeof(v)))
    {cout<<"\n\n***************************************************\n";
	v.display();
	getch();
	cout<<"\n******************************************************\n";
    }
	g.close();
		
}
int del()
{
	int data;
	cout<<"\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t@                                                         @\n"; 
	cout<<"\t\t@                !!!delete page ,ALERT!!!                 @\n";
	cout<<"\t\t@                                                         @\n";
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\n\t\t\tdeleted data can't be restored                                                 \n";
	cout<<"\n\n\t\t\to delete any data of a person , enter aadhar number : ";
	 cin>>data;
	 ifstream g("tanu.txt",ios::app);
	 ofstream m("t.txt",ios::app);
	 if(g.read((char*)&v,sizeof(v)))
	 {
	 	if(data!=v.aadhar1())
	 	{
	 		m.write((char*)&v,sizeof(v));
		 }
		 cout<<"\n\n\t\tDELETED OPERATION PERFORMED SUCCESSFULLY :)\n";
	 }
	 else
	 {
	 	cout<<"\n\n\n\t\tsorry,aadhar no. does not match :( \n";
	 }
	 g.close();
	 m.close();
	 remove("tanu.txt");
	 rename("t.txt","tanu.txt");
}
int modify()
{
	int data;
     cout<<"\n\n\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t@                                                         @\n"; 
	cout<<"\t\t\t@          modify your data with correct information      @\n";
	cout<<"\t\t\t@                                                         @\n";
    cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\n\t\t!!!!fill the required enteries carefully    \n";
	cout<<"\n\n\t\tto modify any data of a person , enter aadhar number : ";
	 cin>>data;
	 ifstream g("tanu.txt",ios::app);
	 ofstream m("t.txt",ios::app);
	 if(g.read((char*)&v,sizeof(v)))
	 {
	 	if(data==v.aadhar1())
	 	{
	 		v.enter();
		 }
		 cout<<"\n\n\t\t\tupdate OPERATION PERFORMED SUCCESSFULLY :)\n";
	 }
	 else
	 {
	 	cout<<"\n\n\n\t\t\tsorry,aadhar no. does not match :( \n";
	 }
	 g.close();
	 m.close();
	 remove("tanu.txt");
	 rename("t.txt","tanu.txt");
}
int wrong()
{
	
	cout<<"\n\n\n                                THANKYOU FOR VISITING            \n";
	cout<<"\t\t\tOUR TEAM WILL CONTACT YOU SOON  :)     \n\n\n";
	
    cout<<"\n\n\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t@                                                         @\n"; 
	cout<<"\t\t\t@             ------stay home , stay safe------           @\n";
	cout<<"\t\t\t@                                                         @\n";
    cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		exit(0);
}
int menu()
{
	int code,n=200;
	char m;
		getch();
            system("cls");
            cout<<"\n\n\n\n";
            cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
            cout<<"\t\t\t\t%%                                              %%\n";
            cout<<"\t\t\t\t%%                   ----MENU---                %%\n";
            cout<<"\t\t\t\t%%                                              %%\n";
            cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
            cout<<"\n\n\t\t\t1.add new record \n\n\t\t\t2.search record \n\n\t\t\t3.veiw vaccine data \n\n\t\t\t4.delete any record \n\n\t\t\t5.update data \n\n\t\t\t6 exit\n";
            
          do
            {
			cout<<"\n\n\t\t\t\tenter code : ";
            cin>>code;
            switch(code)
            {
            	case 1: getch();
                        system("cls");
                        input();
                        break;
            	case 2: getch();
                        system("cls");
                        search();
                        break;
            	case 3: getch();
                        system("cls");
                        data();
                        break;
                case 4: getch();
                        system("cls");
                        del();
                        break;
				case 5: getch();
                        system("cls");
                        modify();
                        break; 		        
            	case 6: getch();
                        system("cls");
                        wrong();
                        break;    
			}
            cout<<"\n\n\t\tdo you want to enter more?? ";
            cin>>m;
            }
            while((m=='y')||(m=='Y'));
            if(code==1)
            {
            	n--;
			}
			cout<<"total vaccine available "<<n;
            wrong();
            
}
