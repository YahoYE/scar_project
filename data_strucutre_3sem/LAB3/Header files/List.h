#pragma once
#include "Node.h"

//! \brief Структура двусвязного списка.
struct List
{
private:
    Node* _head;
    Node* _tail;
    int _size;

public:
    List();
    ~List();

    Node* GetHead() const;
    Node* GetTail() const;
    int GetSize() const;

    Node* GetNodeByIndex(int index) const;
    bool AddNode(Node* node, int index);
    bool RemoveNodeByIndex(int index);
    bool RemoveNodeByValue(int value);
    
    void InsertAtBeginning(int value);
    void InsertAtEnd(int value);
    bool InsertAfter(int targetValue, int newValue);
    bool InsertBefore(int targetValue, int newValue);

    void Sort();
    Node* FindNodeByValue(int value) const;
    int FindIndexByValue(int value) const;
    void Clean();
};