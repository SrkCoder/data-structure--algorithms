#include<iostream>
using namespace std;
int c=0;
class Node {
public:
    int reg,product;
    string brand,model,type,condition,engine;
    long price;
    Node* next;
};
class Car {
private:
    Node* head=NULL;
public:
    void swap(long *ptr1,long *ptr2) {
        long temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }
    void swap(int *ptr1,int *ptr2) {
        int temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }
    void swap(string *ptr1,string *ptr2) {
        string temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }

    void insertcar(int reg,string model,string brand,string type,string condition,long price,string engine) {
        Node* new_car=new Node();
        Node* temp=head;
        new_car->reg=reg;
        new_car->product=reg;
        new_car->model=model;
        new_car->brand=brand;
        new_car->type=type;
        new_car->condition=condition;
        new_car->engine=engine;
		new_car->price=price;
        if(head==NULL) {
            head=new_car;
        }
        else {
            while(temp->next) {
                temp=temp->next;
            }
            temp->next=new_car;
        }
        cout<<"\t\t CAR ADDED SUCCESSFULLY*****\n";
    }
    void display() {
        Node* temp=head;
        c=0;
        while(temp) {
            c++;

            cout<<"\tCar registration no is:";
            cout<<"\t"<<temp->reg<<endl;
            cout<<"\tproduct no is:";
            cout<<"\t"<<temp->product<<endl;
            cout<<"\tCar model no is:";
            cout<<"\t"<<temp->model<<endl;
            cout<<"\tCar brand name is:";
            cout<<"\t"<<temp->brand<<endl;
            cout<<"\tCar type   is:";
            cout<<"\t\t"<<temp->type<<endl;
            cout<<"\tCar condition is:";
            cout<<"\t"<<temp->condition<<endl;
            cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
			cout<<"\tCar price is:";
            cout<<"\t"<<temp->price<<endl;
            temp=temp->next;

            cout<<"\t**********************\n";
            cout<<endl;
        }
        if(c==0) {
            cout<<"\t*****CARS NOT EXIST*****\n";
        }

    }
    void NewCar(string condition) {
        Node* temp=head;
        c=0;
        while(temp) {
            if(temp->condition==condition) {
                c++;
                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
                cout<<"\t"<<temp->engine<<endl; 
			    cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
                cout<<endl;
            }

            temp=temp->next;
        }

        if(c==0)
        {   cout<<"not found"<<endl;
        }

    }
    void TypeCar(string type) {
        Node* temp=head;
        c=0;
        while(temp) {
            if(temp->type==type) {
                c++;
                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
				cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
                cout<<endl;
            }

            temp=temp->next;
        }

        if(c==0)
        {   cout<<"not found"<<endl;
        }

    }
    void CarModel(string model) {
        Node* temp=head;
        c=0;
        while(temp) {
            if(temp->model==model) {
                c++;
                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
                cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
                cout<<endl;
            }

            temp=temp->next;
        }

        if(c==0)
        {   cout<<"not found"<<endl;
        }

    }
    void CarName(string type) {
        Node* temp=head;
        c=0;
        while(temp) {
            if(temp->brand==type) {
                c++;
                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
                cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
                cout<<endl;
            }

            temp=temp->next;
        }

        if(c==0)
        {   cout<<"not found"<<endl;
        }

    }
    void Engine(string enginetype) {
        Node* temp=head;
        c=0;
        while(temp) {
            if(temp->engine==enginetype) {
                c++;
                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
                cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
                cout<<endl;
            }

            temp=temp->next;
        }

        if(c==0)
        {   cout<<"not found"<<endl;
        }

    }
    void purchase(int cart) {
        Node* temp=head;
        Node* previous=NULL;
        while(temp) {
            if(temp->reg==cart) {
                cout<<"Following car added to the cart successfully...\n";

                cout<<"\tCar registration no is:";
                cout<<"\t"<<temp->reg<<endl;
                cout<<"\tproduct no is:";
                cout<<"\t"<<temp->product<<endl;
                cout<<"\tCar model no is:";
                cout<<"\t"<<temp->model<<endl;
                cout<<"\tCar brand name is:";
                cout<<"\t"<<temp->brand<<endl;
                cout<<"\tCar type   is:";
                cout<<"\t "<<temp->type<<endl;
                cout<<"\tCar condition is:";
                cout<<"\t"<<temp->condition<<endl;
                cout<<"\tCar engine type is:";
            cout<<"\t"<<temp->engine<<endl;
                cout<<"\tCar price is:";
                cout<<"\t"<<temp->price<<endl;
                cout<<"\t****************\n";
				if(previous) {
                    previous->next=temp->next;
                }
                else {
                    head=temp->next;
                }
                delete temp;
                
                return;
            }
            previous=temp;
            temp=temp->next;
        }
        cout<<"product does not exist in store...\n";
    }

    void low() {
        if (!head || !head->next)
            return;

        bool swapped;
        Node* khtm = NULL;

        do {
            swapped = false;
            Node* current = head;

            while (current->next ) {
                if (current->price > current->next->price) {
                    // Swap data values
                    swap(&current->price,&current->next->price);
                    swap(&current->reg,&current->next->reg);
                    swap(&current->product,&current->next->product);
                    swap(&current->brand,&current->next->brand);
                    swap(&current->model,&current->next->model);
                    swap(&current->type,&current->next->type);
                    swap(&current->condition,&current->next->condition);
                    swap(&current->engine,&current->next->engine);
					swapped = true;
                }
                current = current->next;
            }
            khtm = current;
        } while (swapped);
    }
    void high() {
        if (!head || !head->next)
            return;

        bool swapped;
        Node* khtm = NULL;

        do {
            swapped = false;
            Node* current = head;

            while (current->next ) {
                if (current->price < current->next->price) {
                    // Swap data values
                    swap(&current->price,&current->next->price);
                    swap(&current->reg,&current->next->reg);
                    swap(&current->product,&current->next->product);
                    swap(&current->brand,&current->next->brand);
                    swap(&current->model,&current->next->model);
                    swap(&current->type,&current->next->type);
                    swap(&current->condition,&current->next->condition);
                    swap(&current->engine,&current->next->engine);
					swapped = true;
                }
                current = current->next;
            }
            khtm = current;
        } while (swapped);
    }
};
int main() {
    Car list;
    int reg,choice,count;
    string brand,model,type,condition,engine;
    long price;
start:
    cout<<"\t\t\t********* SRK WHEELS ***********\n";
    cout<<"\t\t\t1. ENTER CAR DATA\n";
    cout<<"\t\t\t2. SELL A CAR\n";
    cout<<"\t\t\t3. DISPLAY CARS\n";
    cout<<"\t\t\t4. SEARCH CAR \n";
    cout<<"\t\t\t5. ADD TO CART\n";
    cout<<"\t\t\t6. Budget\n";
    cout<<"\t\t\t7. EXIT\n";
    cout<<"enter your choice : ";
    cin>>choice;

    switch(choice) {
    case 1:
        count++;
        reg=count;
        cout<<"Enter car brand name (in small alphabet) \n";
        cin.ignore();
        getline(cin,brand);

        cout<<"Enter car model(in small alphabet)  \n";
        cin>>model;

        cout<<"Enter car type (family,4seater,jeep,sports) \n";
        cin>>type;
        cout<<"Enter car engine type (1000cc,1300cc,diesel,electric) \n";
        cin.ignore();
        getline(cin,engine);
        
        
        condition="new";
        cout<<"Enter car price (in digits) \n";
        cin>>price;
        list.insertcar(reg, model, brand,type, condition,price,engine);
        goto start;
    case 2:
        count++;
        reg=count;
        cout<<"Enter car brand name (in small alphabet) \n";
        cin.ignore();
        getline(cin,brand);

        cout<<"Enter car model(in small alphabet)  \n";
        cin>>model;

        cout<<"Enter car type (family,4seater,jeep,sports) \n";
        cin>>type;
        cout<<"Enter car engine type (1000cc,1300cc,diesel,electric) \n";
        cin.ignore();
        getline(cin,engine);
        condition="old";
        cout<<"Enter car price (in digits) \n";
        cin>>price;
        list.insertcar(reg, model, brand,type, condition,price,engine);
        goto start;
    case 3:
        cout<<"\t*****ALL CARS*****\n";
        list.display();
        goto start;
    case 4:
start1:
	    cout<<"\t1.SEARCH VIA BRAND NAME\n";
        cout<<"\t2.NEW CARS\n";
        cout<<"\t3.OLD CARS\n";
        cout<<"\t4.BODY TYPE\n";
        cout<<"\t5.CATEGORY\n";
        cout<<"\t6.BRAND NAME\n";
        cout<<"\t7.MODEL\n";
        cout<<"\t8.goto main menu\n";
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice) {
      case 1:
        cout<<"Enter car brand name (in small alphabet) \n";
        cin.ignore();
        getline(cin,brand);        
                list.CarName(brand);
                goto start1;
        case 2:
            cout<<"\t\t******* NEW CARS ********\n";
            condition="new";
            list.NewCar(condition);
            goto start1;
        case 3:
            cout<<"\t\t******* OLD CARS ********\n";
            condition="old";
            list.NewCar(condition);
            goto start1;
        case 4:
        	typ:
        	cout<<"\t1.FAMILY CARS\n";
            cout<<"\t2.4 SEATER\n";
            cout<<"\t3.JEEP\n";
            cout<<"\t4.SPORTS CARS\n";
            cout<<"\t5.goto main menu\n";
		    cout<<"enter your choice : ";
            cin>>choice;
        	switch(choice){
			  case 1:
			  	cout<<"\t\t******* FAMILY CARS ********\n";
            type="family";
            list.TypeCar(type);
            goto typ;
              case 2:
			  	cout<<"\t\t******* 4 SEATERS ********\n";
            type="4seater";
            list.TypeCar(type);
            goto typ;
            case 3:
			  	cout<<"\t\t******* JEEPS ********\n";
            type="jeep";
            list.TypeCar(type);
            goto typ;
            case 4:
			  	cout<<"\t\t******* SPORTS CARS ********\n";
            type="sports";
            list.TypeCar(type);
            goto typ;
			  default:
			  	goto start1;
			}
            
        
        case 5:
        	eng:
        	cout<<"\t1.1000cc Cars\n";
            cout<<"\t2.1300cc Cars\n";
            cout<<"\t3.DIESEL\n";
            cout<<"\t4.ELECTRIC CARS\n";
            cout<<"\t5.goto main menu\n";
		    cout<<"enter your choice : ";
            cin>>choice;
            switch(choice){
            	case 1:
            		cout<<"1000 CC CARS\n";
            		engine="1000cc";
            		list.Engine(engine);
            		goto eng;
			    case 2:
            		cout<<"1300 CC CARS\n";
            		engine="1300cc";
            		list.Engine(engine);
            		goto eng;
            		case 3:
            		cout<<"DIESEL CARS\n";
            		engine="diesel";
            		list.Engine(engine);
            		goto eng;
            		case 4:
            		cout<<"ELECTRIC CARS\n";
            		engine="electric";
            		list.Engine(engine);
            		goto eng;
            		default:
            			goto start1;
			}
		case 6:
        	
start2:
            cout<<"\t1.HONDA\n";
            cout<<"\t2.SUZUKI\n";
            cout<<"\t3.TOYOTA\n";
            cout<<"\t4.goto main menu\n";
            cout<<"enter your choice : ";
            cin>>choice;
            switch(choice) {
            case 1:
                cout<<"\t******* HONDA *******\n";
                brand="honda";
                list.CarName(brand);
                goto start2;
            case 2:
                cout<<"\t******* SUZUKI *******\n";
                brand="suzuki";
                list.CarName(brand);
                goto start2;
            case 3:
                cout<<"\t******* TOYOTA *******\n";
                brand="toyota";
                list.CarName(brand);
                goto start2;
            default:
                goto start;
            }
        case 7:
start3:
            cout<<"\t1.CIVIC\n";
            cout<<"\t2.CULTUS\n";
            cout<<"\t3.GRANDE\n";
            cout<<"\t4.goto main menu\n";
            cout<<"enter your choice : ";
            cin>>choice;
            switch(choice) {
            case 1:
                model="civic";
                list.CarModel(model);
                goto start3;
            case 2:
                model="cultus";
                list.CarModel(model);
                goto start3;
            case 3:
                model="grande";
                list.CarModel(model);
                goto start3;
            default:
                goto start;
            }
            goto start1;

        default:
            goto start;
        }
    case 5:
        cout<<"Enter product no :\n";
        cin>>reg;
        list.purchase(reg);
        goto start;
    case 6:
    cout<<"\t1.LOW TO HIGH\n";
				cout<<"\t2.HIGH TO LOW\n";
			    cout<<"enter your choice : ";
				cin>>choice;
		   	switch(choice){
		   	case 1:
		   		cout<<"\t*****LOW TO HIGH******\n";
		   	   list.low();
               list.display();		
		   	    goto start;	
			case 2:
				cout<<"\t*****HIGH TO LOW*****\n";
		   	   list.high();
               list.display();		
		   	    goto start;
			   }
		       
        
        goto start;
    }

}
