#ifndef SORT_H
#define SORT_H
class Sort {
public:
	Sort() = default;
	~Sort() = default;
	// ð������
	void BubbleSort(int* arr, int len); 
	// ѡ������
	void SelectionSort(int* arr, int len);
	// ��������
	void InsertionSort(int* arr, int len);
	// ��������
	void QuickSort(int* arr, int left, int right);
private:
    void Swap(int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
};

#endif