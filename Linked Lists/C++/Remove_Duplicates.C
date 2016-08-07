/*

    Remove Dups: Write code to remove duplicates from an unsorted linked list.

    FOLLOW UP
    How would you solve this problem if a temporary buffer is not allowed?

    ANSWER:
    instead of having a temporary buffer iterate through the rest of the linked list
    and if any node is equal to current remove.

    while(n->get_next() != nullptr) {

        Node *current= n;
        while (current->get_next()!=nullptr){
            if(current->->get_next()->get_data()==n->get_data(){

            current->set_next(current->get_next()->get_next());
        }
        current=current->get_next();
        }

        n=n->get_next();
    }

*/

#include "basic_linked_list.C"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    vector<int> Item_list;

    Node *head = new Node();

    head->set_data(5);
    head->append_to_tail(2);
    head->append_to_tail(3);
    head->append_to_tail(2);
    head->append_to_tail(4);
    head->append_to_tail(10);


    Node *print_temp = head;
    cout << "original linked list" << endl;

    while(print_temp->get_next() != nullptr) {

        cout << print_temp->get_data() << "->";
        print_temp = print_temp->get_next();

    }
    cout << print_temp->get_data() << endl;
    Node *n = head;

    while(n->get_next() != nullptr) {

        if(find(Item_list.begin(), Item_list.end(), n->get_next()->get_data()) == Item_list.end()) {
            Item_list.push_back(n->get_data());
        }
        else {

            n->set_next(n->get_next()->get_next());
        }


        n = n->get_next();
    }
    cout << "modified list" << endl;
    n = head;
    while(n->get_next() != nullptr) {

        cout << n->get_data() << "->";
        n = n->get_next();

    }
    cout << n->get_data()<<endl;

}
