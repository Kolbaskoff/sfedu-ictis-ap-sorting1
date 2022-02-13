#include "iostream"

using namespace std;


//test data

//utilities algs
int *newArrayFromTemplate(const int *arr, int size);

int testResult(const int *expected, const int *current, int size);

void *printArray(const int *arr, int size);

void swap(int *a1, int *a2);

// Function to perform a test
int performTest(int testData[], int expectedData[], int testDataSize, const char *algName,
                void(*sortAlg)(int *arr, int size));

//Sorting algs
void quickSort(int *arr, int size);

void selectionSort(int *arr, int size);

void insertionSort(int *arr, int size);

void bubbleSort(int *arr, int size);

/**
 * Implementation of QuickSort
 */
namespace QuickSortNS {
    int partitioning(int *arr, int lo, int hi);

    void quicksort(int *arr, int low, int high);

    //TODO Implement function to partition the array based on https://en.wikipedia.org/wiki/Quicksort
    int partitioning(int *arr, int lo, int hi) {
        //PUT YOUR CODE HERE
    }

    //TODO Implement function quick sort function based on https://en.wikipedia.org/wiki/Quicksort
    void quicksort(int *arr, int low, int high) {
        //PUT YOUR CODE HERE
    }

}


/**
 * Implementation of Selection Sort
 */
namespace SelectionSortNS {
    int *min(int *arr, int from, int to);

    void sort(int *arr, int size);

    //TODO Implement function to find address of the minimum element of the array in the range [from, to]
    int *min(int *arr, int from, int to) {
        //PUT YOUR CODE HERE
    }

    //TODO implement Selection sorting algorithm based on https://en.wikipedia.org/wiki/Selection_sort
    void sort(int *arr, int size) {
        //PUT YOUR CODE HERE
    }

}

int testResult(const int *expected, const int *current, int size) {
    int retVal = 0;
    for (int i = 0; i < size; i++) {
        retVal += (expected[i] == current[i]) ? 0 : 1;
    }
    return retVal;
}

int *newArrayFromTemplate(const int *arr, const int size) {
    int *newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    return newArr;
}

void *printArray(const int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return nullptr;
}

void deleteArr(const int *arr) {
    delete[] arr;
}


void swap(int *a1, int *a2) {
    if (a1 == nullptr || a2 == nullptr || a1 == a2) {
        return;
    }
    int tmp = *a1;
    *a1 = *a2;
    *a2 = tmp;
}

//TODO implement Bubble Sort alg based on https://en.wikipedia.org/wiki/Bubble_sort
void bubbleSort(int *arr, int size) {
//PUT YOUR CODE HERE
}

//TODO implement Insertion sort alg based on https://en.wikipedia.org/wiki/Insertion_sort
void insertionSort(int *arr, int size) {
//PUT YOUR CODE HERE
}

void quickSort(int *arr, int size) {
    QuickSortNS::quicksort(arr, 0, size - 1);
}

void selectionSort(int *arr, int size) {
    SelectionSortNS::sort(arr, size);
}


int performTest(int testData[], int expectedData[], int testDataSize, const char *algName,
                void(*sortAlg)(int *arr, int size)) {
    int *arr = newArrayFromTemplate(testData, testDataSize);
    sortAlg(arr, testDataSize);
    int check = testResult((int *) expectedData, arr, testDataSize);
    deleteArr(arr);

    if (check != 0) {
        cerr << "[FAIL] " << algName << " is incorrect. Number of errors " << check << endl;
        return 1;
    } else {
        cout << "[OK] " << algName << " passed Successfully" << endl;
        return 0;
    }
}

int main() {
    int TEST_ARRAY[] = {4, 2, 1, 5, 1, 6, 1, 3, 5, 6, 8, 9, 12, 66, 11, 6, 22, 123, 0, 98};
    int CHECK_ARRAY[] = {0, 1, 1, 1, 2, 3, 4, 5, 5, 6, 6, 6, 8, 9, 11, 12, 22, 66, 98, 123};
    const int TEST_ARRAY_SIZE = 20;

    int result = 0;
    result += performTest(TEST_ARRAY, CHECK_ARRAY, TEST_ARRAY_SIZE, "Bubble", bubbleSort);
    result += performTest(TEST_ARRAY, CHECK_ARRAY, TEST_ARRAY_SIZE, "Insertion", insertionSort);
    result += performTest(TEST_ARRAY, CHECK_ARRAY, TEST_ARRAY_SIZE, "Selection", selectionSort);
    result += performTest(TEST_ARRAY, CHECK_ARRAY, TEST_ARRAY_SIZE, "Quick", quickSort);
    return result;
}
