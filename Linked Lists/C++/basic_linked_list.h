struct Node{


public:
    Node* next;
    int data;

    Node();
    Node(int d);
    Node* get_next();
    int get_data();
    void set_data(int d);
    void set_next(Node* n);
    void append_to_tail(int d);
    Node* delete_node(int d);




};
