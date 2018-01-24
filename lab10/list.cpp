#include "list.hpp"

List::Node* createNode(const List::value_type& data, List::Node* prev, List::Node* next)
{
    List::Node* node = new List::Node();
    node->Data = data;
    node->Prev = prev;
    node->Next = next;

    return node;
}

void destroyNode(List::Node** ptr)
{
    List::Node* node = *ptr;
    delete node;
    *ptr = nullptr;
}

List* initList()
{
    List* ls = new List();
    ls->Head = nullptr;
    ls->Tail = nullptr;
    return ls;
}

void destroyList(List** ls)
{
    List* list = *ls;

    List::Node* head = list->Head;
    while (head)
    {
        List::Node* tmp = head->Next;
        delete head;
        head = tmp;
    }
    delete list;

    *ls = nullptr;
}

List::Node* pushFront(List* const list, const List::value_type & data)
{
    List::Node* node = createNode(data, nullptr, list->Head);

    if (list->Head)
        list->Head->Prev = node;
    list->Head = node;

    if (list->Tail == nullptr)
        list->Tail = node;
    return node;
}

List::Node* pushBack(List* const list, const List::value_type & data)
{
    List::Node* node = createNode(data, list->Tail, nullptr);

    if (list->Tail)
        list->Tail->Next = node;
    list->Tail = node;

    if (list->Head == nullptr)
        list->Head = node;
    return node;
}

List::Node* insert(List* const list, List::Node* const where, const List::value_type& data)
{
    List::Node* newNode = createNode(data, where->Prev, where);
    List::Node* prev = where->Prev;
    if (prev)
        prev->Next = newNode;
    where->Prev = newNode;
    return newNode;
}

List::Node* erase(List* const list, List::Node* const where)
{
    List::Node* next = where->Next;
    List::Node* prev = where->Prev;

    if (list->Head == where)
        list->Head = next;
    if (list->Tail == where)
        list->Tail = prev;

    if (prev)
        prev->Next = next;

    delete where;

    return next;
}

std::size_t size(const List* const list)
{
    std::size_t size = 0;
    List::Node* head = list->Head;
    while (head)
    {
        ++size;
        head = head->Next;
    }
    return size;
}

void print(const List* const ls)
{
    List::Node* tmp = ls->Head;
    while (tmp)
    {
        std::cout << tmp->Data << std::endl;
        tmp = tmp->Next;
    }
}
