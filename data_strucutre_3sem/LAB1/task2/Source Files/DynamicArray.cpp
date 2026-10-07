#include "DynamicArray.h"
#include <algorithm>

DynamicArray::DynamicArray()
{
    _size = 0;
    _capacity = 8;
    _array = new int[_capacity];
}

DynamicArray::~DynamicArray()
{
    delete[] _array;
    _array = nullptr;
}

int DynamicArray::GetSize() const { return _size; }
int DynamicArray::GetCapacity() const { return _capacity; }

int* DynamicArray::GetArray()
{
    return _array;
}

int DynamicArray::GetElement(int index) const
{
    return _array[index];
}

void DynamicArray::Reallocate(int newCapacity)
{
    if (newCapacity < 4)
        newCapacity = 4;

    int* newArray = new int[newCapacity];
    int count = (_size < newCapacity) ? _size : newCapacity;

    for (int i = 0; i < count; ++i)
    {
        newArray[i] = _array[i];
    }

    delete[] _array;
    _array = newArray;
    _capacity = newCapacity;
}

void DynamicArray::AddElement(int index, int value)
{
    if (_size >= _capacity)
    {
        Reallocate(_capacity * _growthFactor);
    }

    for (int i = _size; i > index; --i)
    {
        _array[i] = _array[i - 1];
    }

    _array[index] = value;
    _size++;
}

void DynamicArray::InsertAtBeginning(int value)
{
    AddElement(0, value);
}

void DynamicArray::InsertAtEnd(int value)
{
    AddElement(_size, value);
}

bool DynamicArray::InsertAfterValue(int targetValue, int valueToInsert)
{
    int idx = LinearSearch(targetValue);
    if (idx == -1) return false;

    AddElement(idx + 1, valueToInsert);
    return true;
}

bool DynamicArray::RemoveByIndex(int index)
{
    if (index < 0 || index >= _size)
        return false;

    for (int i = index; i < _size - 1; ++i)
    {
        _array[i] = _array[i + 1];
    }
    _size--;

    if (_size > 0 && (_capacity / _size >= _growthFactor) && (_capacity / _growthFactor >= 4))
    {
        Reallocate(_capacity / _growthFactor);
    }

    return true;
}

bool DynamicArray::RemoveByValue(int value)
{
    int idx = LinearSearch(value);
    if (idx == -1) return false;
    return RemoveByIndex(idx);
}

int DynamicArray::LinearSearch(int value) const
{
    for (int i = 0; i < _size; ++i)
    {
        if (_array[i] == value) return i;
    }
    return -1;
}

int DynamicArray::BinarySearch(int value) const
{
    int left = 0;
    int right = _size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (_array[mid] == value)
            return mid;

        if (_array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void DynamicArray::QuickSortInternal(int left, int right)
{
    if (left >= right) return;

    int pivot = _array[left + (right - left) / 2];
    int i = left;
    int j = right;

    while (i <= j)
    {
        while (_array[i] < pivot) i++;
        while (_array[j] > pivot) j--;

        if (i <= j)
        {
            std::swap(_array[i], _array[j]);
            i++;
            j--;
        }
    }

    if (left < j) QuickSortInternal(left, j);
    if (i < right) QuickSortInternal(i, right);
}

void DynamicArray::SortArray()
{
    if (_size > 1)
    {
        QuickSortInternal(0, _size - 1);
    }
}