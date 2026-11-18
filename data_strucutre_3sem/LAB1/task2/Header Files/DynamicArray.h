#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

//! \brief Структура динамического массива.
struct DynamicArray
{
private:
    //! \brief Текущий логический размер массива.
    int _size;

    //! \brief Вместимость буфера массива.
    int _capacity;

    //! \brief Коэффициент масштабирования массива.
    const int _growthFactor = 2;

    //! \brief Минимальная вместимость буфера массива.
    const int _minCapacity = 4;

    //! \brief Указатель на выделенную динамическую память.
    int* _array;

    //! \brief Внутренний метод изменения емкости буфера.
    //! \param newCapacity Новая вместимость буфера.
    void Reallocate(int newCapacity);

    //! \brief Внутренняя рекурсивная процедура быстрой сортировки (Вариант 4).
    //! \param left Левая граница подмассива.
    //! \param right Правая граница подмассива.
    void QuickSortInternal(int left, int right);

public:
    //! \brief Конструктор по умолчанию с начальной емкостью буфера.
    DynamicArray();

    //! \brief Деструктор для освобождения выделенной памяти.
    ~DynamicArray();

    //! \brief Возвращает текущий логический размер.
    //! \return Размер массива.
    int GetSize() const;

    //! \brief Возвращает текущую вместимость.
    //! \return Вместимость массива.
    int GetCapacity() const;

    //! \brief Возвращает указатель на массив.
    //! \return Указатель на внутренний буфер данных.
    int* GetArray() const;

    //! \brief Возвращает элемент по индексу.
    //! \param index Индекс требуемого элемента.
    //! \return Значение элемента.
    int GetElement(int index) const;

    //! \brief Добавляет элемент в произвольное место массива со сдвигом.
    //! \param index Позиция для вставки.
    //! \param value Значение элемента.
    void AddElement(int index, int value);

    //! \brief Вставка элемента в самое начало массива.
    //! \param value Значение элемента.
    void InsertAtBeginning(int value);

    //! \brief Вставка элемента в конец массива.
    //! \param value Значение элемента.
    void InsertAtEnd(int value);

    //! \brief Вставка нового значения после первого найденного целевого значения.
    //! \param targetValue Значение, после которого выполняется вставка.
    //! \param valueToInsert Значение для вставки.
    //! \return true при успехе, false если targetValue не найден.
    bool InsertAfterValue(int targetValue, int valueToInsert);

    //! \brief Удаляет элемент массива по передаваемому индексу.
    //! \param index Индекс удаляемого элемента.
    //! \return true при успешном удалении, иначе false.
    bool RemoveByIndex(int index);

    //! \brief Удаляет первое найденное вхождение переданного значения.
    //! \param value Удаляемое значение.
    //! \return true при успешном удалении, иначе false.
    bool RemoveByValue(int value);

    //! \brief Линейный поиск индекса элемента по передаваемому значению.
    //! \param value Искомое значение.
    //! \return Индекс первого совпадения либо -1.
    int LinearSearch(int value) const;

    //! \brief Бинарный поиск индекса элемента в отсортированном массиве.
    //! \param value Искомое значение.
    //! \return Индекс элемента либо -1.
    int BinarySearch(int value) const;

    //! \brief Сортировка массива алгоритмом Quick Sort.
    void SortArray();
};

#endif