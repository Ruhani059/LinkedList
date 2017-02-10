#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "linkList_Header.hpp"
using namespace std;


linkList::linkList()
{
    head = NULL;
}

linkList::~linkList()
{
    destroy_linkList();
    cout<<"Deleted\n";
}

void linkList::destroy_linkList(node *link)
{
    if(link!=NULL)
    {
        destroy_linkList(link->next);
        delete link;
    }
}

void linkList::destroy_linkList()
{
    destroy_linkList(head);
}

void linkList::insert(int key , node *link)
{
    if(link->next!=NULL)
    {
        insert(key,link->next);
    }
    else
    {
        link->next = new node;
        link->next->data = key;
        link->next->next = NULL;
    }
}

void linkList::insert(int key)
{
    if (head == NULL)
    {
        head = new node;
        head->data = key;
        head->next = NULL;
    }
    else
    {
        insert(key,head);
    }
}

void linkList::delete_by_value(int key,node *link)
{
    static node *prev_link;
    if (link!=NULL)
    {
        if(key!=link->data)
        {
            prev_link = link;
            delete_by_value(key,link->next);
        }
        else
        {
            prev_link->next = link->next;
            delete link;
            cout<<"deleted\n";
        }
    }
}

void linkList::delete_by_value(int key)
{
    if (key == head->data)
    {
        node *link;
        link = head;
        head = head->next;
        delete link;
    }
    else
    {
        delete_by_value(key,head);
    }
}

void linkList::search(int key,node *link)
{
    if (link!=NULL)
    {
        if(key!=link->data)
        {
            search(key,link->next);
        }
        else
        {
            cout<<"search hit\n";
        }
    }
}

void linkList::search(int key)
{
    search(key,head);
}

void linkList::show(node *link)
{
    if(link!=NULL)
    {
        cout<<link->data<<" ";
        show(link->next);
    }
}

void linkList::show()
{
    show(head);
}
