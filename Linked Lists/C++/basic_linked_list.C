#include "basic_linked_list.h"

Node::Node() {

    data= 0;
    next = nullptr;

}
Node::Node(int d) {

    data = d;
    next=nullptr;
}
int Node::get_data() {
    return data;
}
void Node::set_next(Node* n){
next=n;
}
Node* Node::get_next() {
    return next;
}
void Node::set_data(int d) {
    data = d;
}
void Node::append_to_tail(int d) {
    Node* end = new Node(d);

    Node* n = this;

    while (n->next != nullptr) {
        n = n->next;
    }
    n->next = end;

}

void Node::delete_node(int d) {
    Node *n=this;
    while(n->get_next()!= nullptr){
        if(n->get_next()->get_data()==d){
            Node *temp=n->get_next()->get_next();
            delete n->get_next();
            n->set_next(temp);
        }
        n=n->get_next();
    }
}


