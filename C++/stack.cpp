/*
Write an interactive menu driven program in C++ to implement stack using linked list.
*/

#include<iostream>

using namespace std;

struct node{
    int info;
    node *link;
};

class sstack{
    node *top;
    public:
        sstack(){
            top = NULL;
       }
       void insert_stack();
       void delete_stack();
       void display_stack();
};

void sstack::insert_stack(){

    node *temp = new node;
    cout<<"Enter info : "; cin>>temp->info;
    temp->link = top;
    top = temp;
}

void sstack::delete_stack(){
    
    node *temp = top;

    if(top==NULL)
        cout<<"Underflow";
    else{

        cout<<"Deleting : "<<top->info;
        top = top->link;
        delete temp;
    }

}

void sstack::display_stack(){

    node *temp = top;
    while(temp!=NULL){
        cout<<temp->info<<endl;
        temp = temp->link;
    }

}


int main(){
    sstack Q;
    int choice = 0;
    while(choice!=4){

        cout<<"\n\t\t LINKED STACK \n";
        cout<<"\n1. Insert Node";
        cout<<"\n2. Delete Node";
        cout<<"\n3. Display Node";
        cout<<"\n4. Exit";
        cout<<"\nSelect your Chocie [1-4] : ";
        cin>>choice;

        switch(choice){
            case 1:
                Q.insert_stack();
                break;
            case 2:
                Q.delete_stack();
                break;
            case 3:
                Q.display_stack();
                break;
            case 4:
                cout<<"Exiting..";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }
}
