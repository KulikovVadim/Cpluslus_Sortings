 #include<iostream>;
 #include<chrono>;

template <typename T>
void bubbleSort(T arr[], int sizeOfArray) {

    for (int j = 0; j < sizeOfArray - 1; j++) {

        for (int i = 0; i < sizeOfArray - 1; i++) { 

            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]); //within the cycle of each element, if the element is bigger than the next, we change them
            }
        }
    }
    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << arr[i] << " ";          //array output
    }
}

template <typename T>
void SelectionSort(T arr[], int sizeOfArray) {
    int IndexOfMinElem;

    for (int i = 0; i < sizeOfArray; i++) {

        IndexOfMinElem = i; //for each i-th cycle, select a index

        for (int j = i; j < sizeOfArray; j++) { //start the sub-array cycle starting from our index

            if (arr[IndexOfMinElem] > arr[j]) {
                std::swap(arr[IndexOfMinElem], arr[j]); //go through the array and find an element that is smaller than our and swap
            }
        }
    }
    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << arr[i] << " ";            //array output
    }

}

template <typename T>
void insertionSort(T arr[], int sizeOfArray)
{
  
    for (int i = 1; i < sizeOfArray; i++)
    {
        int j = i; //select an element
        do
        {
            if (arr[j] < arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]); //compare the selected item with previous items and swap if the item on the left is larger
                j--;
            }
            else
                break;
        } while (j > 0);
    }

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << arr[i] << " ";           //array output
    }
}


int main()
{
    srand(time(NULL));

    int arr[100] = {};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);   //find the size of the array

    for (int i = 0; i < sizeOfArray; i++) {
        arr[i] = rand() % 100;                      //randomly generate array values from 0 to 100 (I could have done others, but I wanted to)
    }

    std::cout << "Not sorted array:" << std::endl;
    for (int i = 0; i < sizeOfArray; i++) {         //output the initial, unsorted array
        std::cout << arr[i] << " ";
    }
    

    std::cout << "\n\n" << "====================" << std::endl; //I display a line like this to make it easier to see the results

    bubbleSort(arr, sizeOfArray);

    std::cout << "\n\n" << "====================" << std::endl;

    SelectionSort(arr, sizeOfArray);

    std::cout << "\n\n" << "====================" << std::endl;

    insertionSort(arr, sizeOfArray);
    return 0;

}


