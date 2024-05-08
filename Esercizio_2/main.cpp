#include "SortingAlgorithm.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <bits/stdc++.h>

using namespace SortLibrary;
using namespace std;
using namespace std::chrono;

int main(int argc, char* argv[])
{
    cout << endl;
    cout << "argc: " << argc << "\n" << "argv[0]: " << argv[0] << endl;
    cout << endl;
    if (argc <= 2)
    {
        cerr << "The vector is empty, or too short. \nMake sure that you execute the program properly through a command terminal." << endl;
        return 1;
    }

    int VecSize = argc - 1;

    cout << "The size of the vector is: " << VecSize << endl;
    cout << "The given vector is: " << endl;
    vector<int> VecInput;
    VecInput.reserve(VecSize);
    cout << "[ ";
    for (int i = 1; i < VecSize+1; i++)
    {
        cout << argv[i] << " ";
        VecInput.push_back(stoi(argv[i]));
    }
    cout << "]" << endl;

    vector<int> VecInput_BubbleSort = VecInput;

    auto start_Input_bubble = steady_clock::now();
    BubbleSort(VecInput_BubbleSort);
    auto stop_Input_bubble = steady_clock::now();
    auto duration_Input_bubble = duration_cast<nanoseconds>(stop_Input_bubble - start_Input_bubble);

    cout << "Sorting time with Bubble Sort for the vector of size " << VecSize << " is : " << duration_Input_bubble.count() << " nanoseconds." << endl;

    vector<int> vect_Input_MergeSort = VecInput;

    auto start_Input_merge = steady_clock::now();
    MergeSort(vect_Input_MergeSort);
    auto stop_Input_merge = steady_clock::now();
    auto duration_Input_merge = duration_cast<nanoseconds>(stop_Input_merge - start_Input_merge);

    cout << "Sorting time with Merge Sort for the vector of size " << VecSize << " is : " << duration_Input_merge.count() << " nanoseconds" << endl;

    cout << endl;
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Random tests: Vector with the same size as the input vector." << endl;
    vector<int> random_vector(VecSize, 0);
    srand(time(0));
    generate(random_vector.begin(), random_vector.end(), rand);
    cout << "The size of the initial random vector is: " << VecSize << endl;
    cout << "The randomly generated vector is: " << endl;
    cout << "[ ";
    for (int i = 0; i < VecSize; i++)
    {
        cout << random_vector[i] << " ";
    }
    cout << "]" << endl;

    vector<int> vect_BubbleSort = random_vector;

    auto start_bubble = steady_clock::now();
    BubbleSort(vect_BubbleSort);
    auto stop_bubble = steady_clock::now();
    auto duration_bubble = duration_cast<nanoseconds>(stop_bubble - start_bubble);

    cout << "Sorting time with Bubble Sort for the random vector of size " << VecSize << " is : " << duration_bubble.count() << " nanoseconds." << endl;

    vector<int> vect_MergeSort = random_vector;

    auto start_merge = steady_clock::now();
    MergeSort(vect_MergeSort);
    auto stop_merge = steady_clock::now();
    auto duration_merge = duration_cast<nanoseconds>(stop_merge - start_merge);

    cout << "Sorting time with Merge Sort for the random vector of size " << VecSize << " is : " << duration_merge.count() << " nanoseconds" << endl;

    cout << endl;
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Random tests: Vector of size 100." << endl;
    VecSize = 100;
    vector<int> random_100vector(VecSize, 0);
    srand(time(0));
    generate(random_100vector.begin(), random_100vector.end(), rand);

    vector<int> vect_100BubbleSort = random_100vector;

    auto start_100bubble = steady_clock::now();
    BubbleSort(vect_100BubbleSort);
    auto stop_100bubble = steady_clock::now();
    auto duration_100bubble = duration_cast<nanoseconds>(stop_100bubble - start_100bubble);

    cout << "Sorting time with Bubble Sort for the random vector of size " << VecSize << " is : " << duration_100bubble.count() << " nanoseconds." << endl;

    vector<int> vect_100MergeSort = random_100vector;

    auto start_100merge = steady_clock::now();
    MergeSort(vect_100MergeSort);
    auto stop_100merge = steady_clock::now();
    auto duration_100merge = duration_cast<nanoseconds>(stop_100merge - start_100merge);

    cout << "Sorting time with Merge Sort for the random vector of size " << VecSize << " is : " << duration_100merge.count() << " nanoseconds" << endl;

    cout << endl;
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Random tests: Vector of size 500." << endl;
    VecSize = 500;
    vector<int> random_500vector(VecSize, 0);
    srand(time(0));
    generate(random_500vector.begin(), random_500vector.end(), rand);

    vector<int> vect_500BubbleSort = random_500vector;

    auto start_500bubble = steady_clock::now();
    BubbleSort(vect_500BubbleSort);
    auto stop_500bubble = steady_clock::now();
    auto duration_500bubble = duration_cast<nanoseconds>(stop_500bubble - start_500bubble);

    cout << "Sorting time with Bubble Sort for the random vector of size " << VecSize << " is : " << duration_500bubble.count() << " nanoseconds." << endl;

    vector<int> vect_500MergeSort = random_500vector;

    auto start_500merge = steady_clock::now();
    MergeSort(vect_500MergeSort);
    auto stop_500merge = steady_clock::now();
    auto duration_500merge = duration_cast<nanoseconds>(stop_500merge - start_500merge);

    cout << "Sorting time with Merge Sort for the random vector of size " << VecSize << " is : " << duration_500merge.count() << " nanoseconds" << endl;

    cout << endl;
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Bubble Sort is a sorting algorithm of time complexity O(n^2)" << endl;
    cout << "Merge Sort is a sorting algorithm of time complexity O(n*log(n))" << endl;
    cout << "The aforementioned time complexities show, alongside the tests performed on randomly generated vectors, that Bubble Sort is efficient with small vectors whereas Merge Sort is considerably faster with large vectors." << endl;
    return 0;
}
