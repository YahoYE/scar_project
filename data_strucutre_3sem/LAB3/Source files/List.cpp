#include "List.h"

List::List() : _head(nullptr), _tail(nullptr), _size(0) {}

List::~List()
{
    Clean();
}

Node* List::GetHead() const { return _head; }
Node* List::GetTail() const { return _tail; }
int List::GetSize() const { return _size; }

Node* List::GetNodeByIndex(int index) const
{
    if (index < 0 || index >= _size)
    {
        return nullptr;
    }

    // Оптимизация: идем с ближайшего конца списка
    Node* current = nullptr;
    if (index < _size / 2)
    {
        current = _head;
        for (int i = 0; i < index; ++i)
        {
            current = current->GetNextNode();
        }
    }
    else
    {
        current = _tail;
        for (int i = _size - 1; i > index; --i)
        {
            current = current->GetPreviousNode();
        }
    }
    return current;
}

bool List::AddNode(Node* node, int index)
{
    if (node == nullptr || index < 0 || index > _size)
    {
        return false;
    }

    if (_size == 0)
    {
        _head = node;
        _tail = node;
        node->SetNextNode(nullptr);
        node->SetPreviousNode(nullptr);
    }
    else if (index == 0)
    {
        node->SetNextNode(_head);
        node->SetPreviousNode(nullptr);
        _head->SetPreviousNode(node);
        _head = node;
    }
    else if (index == _size)
    {
        node->SetPreviousNode(_tail);
        node->SetNextNode(nullptr);
        _tail->SetNextNode(node);
        _tail = node;
    }
    else
    {
        Node* nextNode = GetNodeByIndex(index);
        Node* prevNode = nextNode->GetPreviousNode();

        node->SetNextNode(nextNode);
        node->SetPreviousNode(prevNode);
        prevNode->SetNextNode(node);
        nextNode->SetPreviousNode(node);
    }

    _size++;
    return true;
}

bool List::RemoveNodeByIndex(int index)
{
    if (index < 0 || index >= _size)
    {
        return false;
    }

    Node* toDelete = nullptr;

    if (_size == 1)
    {
        toDelete = _head;
        _head = nullptr;
        _tail = nullptr;
    }
    else if (index == 0)
    {
        toDelete = _head;
        _head = _head->GetNextNode();
        _head->SetPreviousNode(nullptr);
    }
    else if (index == _size - 1)
    {
        toDelete = _tail;
        _tail = _tail->GetPreviousNode();
        _tail->SetNextNode(nullptr);
    }
    else
    {
        toDelete = GetNodeByIndex(index);
        Node* prevNode = toDelete->GetPreviousNode();
        Node* nextNode = toDelete->GetNextNode();

        prevNode->SetNextNode(nextNode);
        nextNode->SetPreviousNode(prevNode);
    }

    delete toDelete;
    _size--;
    return true;
}

bool List::RemoveNodeByValue(int value)
{
    int index = FindIndexByValue(value);
    if (index == -1)
    {
        return false;
    }
    return RemoveNodeByIndex(index);
}

void List::InsertAtBeginning(int value)
{
    AddNode(new Node(value), 0);
}

void List::InsertAtEnd(int value)
{
    AddNode(new Node(value), _size);
}

bool List::InsertAfter(int targetValue, int newValue)
{
    Node* target = FindNodeByValue(targetValue);
    if (target == nullptr)
    {
        return false;
    }

    if (target == _tail)
    {
        InsertAtEnd(newValue);
        return true;
    }

    Node* newNode = new Node(newValue);
    Node* nextNode = target->GetNextNode();

    newNode->SetPreviousNode(target);
    newNode->SetNextNode(nextNode);
    target->SetNextNode(newNode);
    nextNode->SetPreviousNode(newNode);

    _size++;
    return true;
}

bool List::InsertBefore(int targetValue, int newValue)
{
    Node* target = FindNodeByValue(targetValue);
    if (target == nullptr)
    {
        return false;
    }

    if (target == _head)
    {
        InsertAtBeginning(newValue);
        return true;
    }

    Node* newNode = new Node(newValue);
    Node* prevNode = target->GetPreviousNode();

    newNode->SetNextNode(target);
    newNode->SetPreviousNode(prevNode);
    prevNode->SetNextNode(newNode);
    target->SetPreviousNode(newNode);

    _size++;
    return true;
}

void List::Sort()
{
    if (_size < 2) return;

    bool swapped;
    do
    {
        swapped = false;
        Node* current = _head;
        while (current->GetNextNode() != nullptr)
        {
            Node* next = current->GetNextNode();
            if (current->GetData() > next->GetData())
            {
                int temp = current->GetData();
                current->SetData(next->GetData());
                next->SetData(temp);
                swapped = true;
            }
            current = next;
        }
    } while (swapped);
}

Node* List::FindNodeByValue(int value) const
{
    Node* current = _head;
    while (current != nullptr)
    {
        if (current->GetData() == value)
        {
            return current;
        }
        current = current->GetNextNode();
    }
    return nullptr;
}

int List::FindIndexByValue(int value) const
{
    Node* current = _head;
    int index = 0;
    while (current != nullptr)
    {
        if (current->GetData() == value)
        {
            return index;
        }
        current = current->GetNextNode();
        index++;
    }
    return -1;
}

void List::Clean()
{
    Node* current = _head;
    while (current != nullptr)
    {
        Node* next = current->GetNextNode();
        delete current;
        current = next;
    }
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}