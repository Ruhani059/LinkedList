#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "linkList_Header.hpp"
#include "linkList_Header.cpp"
using namespace std;

int main()
{
    int choice, key;
    linkList list;

    do{
        cout<<"1 -> Insert\t2 -> Search\t3 -> Delete\t4 -> Show\t-1 -> Exit\n\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cin>>key;
                list.insert(key);
                break;
            case 2:
                cin>>key;
                list.search(key);
                break;
            case 3:
                cin>>key;
                list.delete_by_value(key);
                break;
            case 4:
                list.show();
                cout<<endl;
                break;
            default :
                break;
        }
    }while(choice != -1);

    return 0;
}

