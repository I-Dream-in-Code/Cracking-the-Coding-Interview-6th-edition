/*
 * **2.2 Return Kth to Last:**
 Implement an algorithm to find the kth to last element of a singly linked list.
 */


#include "basic_linked_list.C"
#include <iostream>

using namespace std;
int main(){

    int size=1;

    Node* head= new Node(0);
    head->append_to_tail(1);
    head->append_to_tail(2);
    head->append_to_tail(3);
    head->append_to_tail(4);
    head->append_to_tail(5);
    head->append_to_tail(6);
    head->append_to_tail(7);
    head->append_to_tail(8);
    head->append_to_tail(9);
    head->append_to_tail(10);


    int k;
    cout<<"Enter the kth to last node you want to return"<<endl;
    Node *n=head;
    while(n->get_next()!= nullptr){
        size++;
        cout<<n->get_data()<<"->";
        n=n->get_next();
    }
    cout<<n->get_data()<<endl;
    cin>>k;
    n=head;
    for(int i=1;i<size-k;i++){
        n=n->get_next();
    }
    cout<<n->get_data()<<endl;


}