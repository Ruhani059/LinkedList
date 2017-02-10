#ifndef linkList_HEADER_HPP_INCLUDED
#define linkList_HEADER_HPP_INCLUDED

struct node
{
    int data;
    node *next;
};

class linkList
{
private:
    node *head;
    void insert (int key,node *link);
    void delete_by_value (int key,node *link);
    void search (int key,node *link);
    void destroy_linkList(node *link);
    void show (node *link);
public:
    linkList();
    ~linkList();
    void insert (int key);
    void delete_by_value (int key);
    void search (int key);
    void show ();
    void destroy_linkList();
};

#endif // linkList_HEADER_HPP_INCLUDED
