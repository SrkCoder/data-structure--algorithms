#include<iostream>
#include <conio.h>
using namespace std;

int i=0;
class Donor{
    public:
    int age,entry_no;
    string name, b_type,acceptor_name,acceptor_b_type;
    long cont_no;
    void store_D_data();
    void show_D_data();
    void match_b_type();
    void show_d_list();
    }c[100];
void Donor::store_D_data(){
		
    cout<<"\n\n\t         ****Enter Donor's Data**** \n\n ";
    cout<<"\n\tEnter Donor's Entry Number ";
    cin>>c[i].entry_no;
    
    cout<<"\n\tEnter Donor's Name  ";
    cin.ignore();
    getline(cin,c[i].name);
    
    cout<<"\n\tEnter Donor's Age  ";
    cin>>c[i].age;
    
    cout<<"\n\tEnter Donor's Contact Number  ";
    cin>>c[i].cont_no;

    cout<<"\n\tEnter Donor's Blood Type In Capital Letters: ";
    cin.ignore();  
    getline(cin,c[i].b_type);
    cout<<"\n\tDonor Added sucessfully \n\n";
    i++;
    
    }
void Donor::show_D_data()
{
  if(i==0)
   {
	cout<<"\tNo Record Found!"<<endl;
   }
	else
	{
		cout<<"\n\tEnter Donor's Entry Number \n\n ";
        cin>>entry_no;
        for(int a=0;a<i;a++)
        {
        	if(entry_no==c[a].entry_no)
        	{
        		
        		cout<<"\n\t Donor's Name "<<c[a].name ;    
                cout<<"\n\t Donor's Age  "<<c[a].age;
                cout<<"\n\t Donor's Blood Type "<<c[a].b_type;
                cout<<"\n\t Donor's Contact Number "<<c[a].cont_no<<endl;
                 
			}
			else
			{
			  cout<<"\n\tEntery Number Does Not Match!"<<endl;
		    }
		}
	}
}    
void Donor::match_b_type()
{
if(i==0)
   {
	cout<<"\n\tNo Donor Found!"<<endl;
   }
	else
	 {
		cout<<"\n\tEnter Acceptor's Name:  ";
        cin>>acceptor_name;
        cout<<"\n\tEnter Acceptor's Blood Type In Capital Letters:  ";
        cin>>acceptor_b_type;
        cout<<"\n\t\t\t>>>>>>>>>AVAILABLE DONORS<<<<<<<<";
        for(int a=0;a<i;a++)
        {
        	if(acceptor_b_type=="AB+")	
        	  {
        	  	 cout<<"\n \t\t\t Donors Are ---->";
        		 cout<<"\n \tDonor's Name "<<c[a].name ;    
                 cout<<"\n \tDonor's Age  "<<c[a].age;
                 cout<<"\n \tDonor's Contact Number "<<c[a].cont_no;
                 cout<<"\n \tDonor's Blood Type In Capital Letters  "<<c[a].b_type;
			   }
			   else
			   {
			   	if(c[a].b_type=="O-")	
        	     {
        	  	 cout<<"\n \t\t\t Universal Donors Are ---->";
        		 cout<<"\n \tDonor's Name "<<c[a].name ;    
                 cout<<"\n \tDonor's Age  "<<c[a].age;
                 cout<<"\n \tDonor's Contact Number "<<c[a].cont_no;
                 cout<<"\n \tDonor's Blood Type In Capital Letters  "<<c[a].b_type;
			     }
			   }
        	if(acceptor_b_type==c[a].b_type)
        	{ 
			
			    cout<<"\n \t\t\tSame Blood Group Donors Are ----->";
        		cout<<"\n \tDonor's Name : "<<c[a].name ;    
                cout<<"\n \tDonor's Age   :"<<c[a].age;
                cout<<"\n \tDonor's Contact : Number "<<c[a].cont_no;
                cout<<"\n \tDonor's Blood Type In Capital Letters :  "<<c[a].b_type; 
			}
		cout<<endl;
		}
	}
	
}
void Donor::show_d_list()
    {
	    cout<<"\n\t\t\t<---------DONORS LIST--------->\n\n";
     for(int j=0;j<i;j++)
	   {
         cout<<"\n\t Donor's Entry Number : "<<c[j].entry_no;
         cout<<"\n\t Donor's Name : "<<c[j].name ;    
         cout<<"\n\t Donor's Age  : "<<c[j].age;
         cout<<"\n\t Donor's Blood Type : "<<c[j].b_type;
         cout<<"\n\t Donor's Contact Number : "<<c[j].cont_no;
       }
       cout<<endl;
    }
int main()
{ int x;
Donor obj;
  
srk: 

int choice;
        cout << "\t\t\t\t========== Blood Bank Management ==========" << endl;
        cout << "\t\t\t\t |1. Add Donor                            |" << endl;
        cout << "\t\t\t\t |2. Search Donor Record                  |" << endl;
        cout << "\t\t\t\t |3. Match Acceptor And Donor Bood Group  |" << endl;
        cout << "\t\t\t\t |4. Display Donor List                   |" << endl;
        cout << "\t\t\t\t |5. Exit                                 |" << endl;
     cout<< "\n\nEnter your choice : ";
     cin>>choice;
  switch(choice){
case 1:

obj.store_D_data();
break;
case 2:
 obj.show_D_data();
break;
case 3:
 obj.match_b_type();
break;
case 4:
 obj.show_d_list();
break;
case 5:
 exit(0);
break;
default:
cout << "invalid choice\n\n\n";
break;} 
    	goto srk;
	
    return 0;
}
