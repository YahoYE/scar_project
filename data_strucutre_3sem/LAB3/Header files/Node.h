#pragma once

//! \brief Структура узла для двусвязного списка.
struct Node
{
private:
    //! \brief Данные.
    int _data;
    //! \brief Указатель на следующий узел.
    Node* _nextNode;
    //! \brief Указатель на предыдущий узел.
    Node* _previousNode;

public:
    Node(int data = 0);

    int GetData() const;
    void SetData(int data);

    Node* GetNextNode() const;
    void SetNextNode(Node* node);

    Node* GetPreviousNode() const;
    void SetPreviousNode(Node* node);
};