#pragma once

//! \brief Структура динамического массива (ООП).
struct DynamicArray
{
private:
    int _size;
    int _capacity;
    const int _growthFactor = 2;
    int* _array;

    void Reallocate(int newCapacity);
    void QuickSortInternal(int left, int right);

public:
    DynamicArray();
    ~DynamicArray();

    int GetSize() const;
    int GetCapacity() const;

    //! \brief Возвращает указатель на массив.
    int* GetArray();

    int GetElement(int index) const;

    void AddElement(int index, int value);
    void InsertAtBeginning(int value);
    void InsertAtEnd(int value);
    bool InsertAfterValue(int targetValue, int valueToInsert);

    bool RemoveByIndex(int index);
    bool RemoveByValue(int value);

    void SortArray();
    int LinearSearch(int value) const;
    int BinarySearch(int value) const;
};