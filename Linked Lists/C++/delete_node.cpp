#include "basic_linked_list.C"

void delete_node(Node*n,int d) {

    while(n->get_next()!= nullptr){
        if(n->get_next()->get_data()==d){
            Node *temp=n->get_next()->get_next();
            delete n->get_next();
            n->set_next(temp);
        }
        n=n->get_next();
    }
}
//
// Created by mike on 8/27/16.
//

