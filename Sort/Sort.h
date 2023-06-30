#ifndef SORT_H
#define SORT_H
class Sort {
public:
	// ð������
	void BubbleSort(int* arr, int len); 
	// ѡ������
	void SelectionSort(int* arr, int len);
	// ��������
	void InsertionSort(int* arr, int len);
    // ��������
    void QuickSort(int* arr, int left, int right); // right ָ������б߽�+1
private:
    void Swap(int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
};

#endif 