#include<iostream>
using namespace std;
class Node {
	public:
	int data;
	Node *next;
	
};
class LinkedList{
	private:
	 Node *head ;
	 Node *tail;
public:	 
void insert(int data)
 {
	Node *temp = new Node();
	temp -> data = data ;
	if (head == NULL)
	{
		head = temp;
	}
	else 
	{
		tail -> next =  temp ; 
	}
	tail = temp;
 }
void Display()
 {
  Node* temp = head;
	while(temp)
	{
		cout << temp->data <<endl;
		temp = temp->next;
	}
  }
  void search(int to_find)
  {
  	Node * temp = head ;
  	while (temp)
  	{ 
  		if (temp->data == to_find)
  		{
  		cout << temp->data <<endl;
  		break;
  	    }
  		else
  		{
		temp = temp->next;
		}
			  }
  }
  void After(int to_find , int data)
  { 
     if (to_find == tail->data)
    {
    	insert(data);
	}
	else
	{
  	Node * temp = head ;
  	while (temp)
  	{ 
  		if (temp->data == to_find)
  		{ Node * after = new Node();
  		 after -> next = temp -> next;
  		 temp -> next = after;
  		 after -> data = data;
  		 break;
  	    }
  	    else
  	    {
		 temp = temp->next;
		  }
    }
   }
  }
 void Before(int to_find , int data)
  {  
    if (to_find == head->data)
    {
    	at_start(data);
	}
	else
	{
  	Node * temp = head ;
  	while (temp)
  	{   Node *prev ;
  		if (temp->data == to_find)
  		{ Node * before = new Node();
  		 before -> next = temp;
  		 prev -> next =before;
  		 before -> data = data;
		 break;
  	     }
  	      else
		 { 
  	       prev =temp;
  	     }
  	    temp = temp -> next;
    }
    }
  }
void at_start(int data){
	Node *temp = new Node();
	temp -> data = data ;
	temp ->next = head;
    head = temp;
}
 void Delete(int to_find)
  {  
    if (to_find == head->data)
    {
    	head = head ->next;
	}
	else
	{
  	Node * temp = head ;
  	while (temp)
  	{   Node *prev ;
  		if (temp->data == to_find)
  		{ prev->next = temp-> next;
		 break;
  	     }
  	      else
		 { 
  	       prev =temp;
  	     }
  	    temp = temp -> next;
    }
    }
  }

};
int main ()
{ 
 int data, input , input1 , to_find  ;
  LinkedList list; 
    	
	start:
	cout << ">>>>>>>>>>>>>LINKED LIST<<<<<<<<<<<<\n";
	cout <<" 1. insert \n";
	cout << "2. display \n";
    cout << "3. search \n";
	cout <<" 4. insert node anywhere you want \n";
	cout <<" 5. delete a node \n";
	cout << ">>>>>>>>>>>>>LINKED LIST<<<<<<<<<<<<\n";
	cin>> input;
	 switch (input){
	 	case 1:
	 	 cin>> data ;
         list.insert(data);	
	     goto start;
		 break;
		 	
	    case 2:
	    	cout << ">>>>>>>>>>>>>all items<<<<<<<<<<<<\n";
         list.Display();
		 goto start;	
	     break;
	   	case 3:
	     cout << "enter the value you  want to search"<< endl;
	 	 cin>>to_find ;
         list.search(to_find);	
	     goto start;
		 break;
	    case 4:
	    	start1:
	    	
	    	cout << "1. insert after a value(node) \n";
	        cout << "2. insert before a value(node) \n";
	        cout << "3. goto main menu \n"; 
			cin>> input1;   
		  switch (input1){
		
		 case 1:
	     cout << "enter the value you  want to insert node after that "<< endl;
	 	 cin>>to_find ;
	 	 cout << "enter the value you  want to store in  new inserting node  "<< endl;
	 	 cin>> data; 
         list.After(to_find,data);	
	     goto start1;
		 break; 
		 case 2:
	     cout << "enter the value you  want to insert node before that "<< endl;
	 	 cin>>to_find ;
	 	 cout << "enter the value you  want to store in new inserting node  "<< endl;
	 	 cin>> data;
         list.Before(to_find,data);	
	     goto start1;
		 break;
         
		 case 3:
   	     goto start;
   	     break;
		 } 
		 case 5 :
		 	cout << "enter the value(node) you  want to delete"<< endl;
		 	cin>> to_find;
		 	list.Delete(to_find);
		 	goto start;
		 break;
	    default:
   	     exit(0);
   	     break;
	 }
	 return 0;
 }
