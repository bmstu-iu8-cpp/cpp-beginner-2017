#include "list.hpp"

int main()
{
    List* l = initList();

    pushBack(l, 1);
    erase(l, l->Head);

    pushBack(l, 2);
    pushBack(l, 3);
    pushFront(l, -1);
    pushFront(l, -2);
    pushFront(l, -3);
    print(l);
    erase(l, l->Head->Next->Next);
    print(l);
    erase(l, l->Tail);
    print(l);

    insert(l, l->Head->Next, 100);
    print(l);

    destroyList(&l);

    return 0;
}
