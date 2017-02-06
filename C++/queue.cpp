/*
Write an interactive menu driven program in C++ to implement queue using linked list.
Node is storing Patient's information as Patient number, name, address and contact no.
*/

#include<iostream>

using namespace std;

struct node{
    int number;
    char name[50];
    char addr[100];
    char contact[10];

    node *link;
};

class qqueue{
    node *front, *rear;
    public:
        qqueue(){
            rear = NULL;
            front = NULL;
       }
       void insert_queue();
       void delete_queue();
       void display_queue();
};

void qqueue::insert_queue(){

    node *temp = new node;
    cout <<"Patient No : "; cin>>temp->number;
    cout<<"Name : "; cin>>temp->name;
    cout<<"Address : "; cin>>temp->addr;
    cout<<"CONTACT No. : "; cin>>temp->contact;
    temp->link = NULL;

    if(rear == NULL){ //if empty
        rear = temp;
        front = temp;
    }
    else{
        rear ->link = temp;
        rear = temp;
    }
}

void qqueue::delete_queue(){

    if(front==NULL)
        cout<<"Queue underflow\n";
    else if(rear == front){
        node *temp = front;
        cout<<"Deleting node : "<<temp->name;
        rear = NULL;
        front = NULL;
        delete temp;
   }
   else{
       node *temp = front;
       cout <<"Deleting node : "<<temp->name;
       front = front -> link;
       delete temp;
  }
}

void qqueue::display_queue(){
    
    if(front == NULL)
        cout<<"Queue underflow";
    else{
        node *temp = front;
        while(temp!=NULL){
            cout<<"\n Name : "<<temp->name;
            temp = temp->link;
        }
    }
}



int main(){
    qqueue Q;
    int choice = 0;
    while(choice!=4){

        cout<<"\n\t\t LINKED QUEUE \n";
        cout<<"\n1. Insert Node";
        cout<<"\n2. Delete Node";
        cout<<"\n3. Display Node";
        cout<<"\n4. Exit";
        cout<<"\nSelect your Chocie [1-4] : ";
        cin>>choice;

        switch(choice){
            case 1:
                Q.insert_queue();
                break;
            case 2:
                Q.delete_queue();
                break;
            case 3:
                Q.display_queue();
                break;
            case 4:
                cout<<"Exiting..";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }
}
