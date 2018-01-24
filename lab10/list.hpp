#pragma once

struct List
{
    using value_type = int;

    struct Node
    {
        value_type Data;
        Node* Next;
        Node* Prev;
    };

    Node* Head;
    Node* Tail;
};

List::Node* createNode(const List::value_type& data, List::Node* prev, List::Node* next);

void destroyNode(List::Node** ptr);

List* initList();

void destroyList(List** ls);

List::Node* pushFront(List* const list, const List::value_type & data);

List::Node* pushBack(List* const list, const List::value_type & data);

List::Node* insert(List* const list, List::Node* const where, const List::value_type& data);

List::Node* erase(List* const list, List::Node* const where);

std::size_t size(const List* const list);

void print(const List* const ls);
