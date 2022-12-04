/*
Header to include in source code:
* Class: CMSC140 CRN
* Instructor: Professor Koo
* Classwork/Homework/<8>
* Description: Develop a program to read as many test scores as the user wants from the keyboard (assuming at most 50 scores).
* Due Date: 12/02/21
* I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Kieran Yalla
*/

#include <iostream>
using namespace std;
//funtion to display the values in the array
void displayArray(int array[], int size){
    cout << "Original order scores are: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\n\n";
}
//perform selectionSort on the arraya and prints the array in descending order
void selectionSort(int array[], int size){
  int large;
  for (int i = 0; i < size - 1; i++){
      for (int j = i + 1; j < size; j++){
          if (array[j] > array[i]){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
      }
    } 
  }
  cout << "Scores ordered high to low: ";
  for (int i = 0; i < size; i++){
      cout << array[i] << " ";
  }
  cout << "\n\n";
}

//funtion finds the max value in array and returns it
int findMax(int array[], int size){
    int max = array[0]; //initially assume the first element as max
    for (int i = 0; i < size; i++){
        if (array[i] > max)
        max = array[i];
    }
    return max;
}
    
//funtion finds min value and returns it.
int findMin(int array[], int size){
    int min = array[0]; //initially assume first element as min
    for (int i = 0; i < size; i++){
        if (array[i] < min)
        min = array[i];
  }
  return min;
}
//funtion finds Average of the values and returns it
double findAvg(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    double avg;
    avg = ((1.0 * sum) / (1.0 * size));
    return avg;
}

//main funtion
int main(){
    int size;
    cout << "How many scores do you want to enter ? ";
    cin >> size;
    
  //if user enters size greaterthan 50 program by default takes the size as 50
  if (size > 50){
      cout << "Max size is 50.\n";
      size = 50;
  }

  //define array and take user inputs of values
  int scores_arr[size];
  for (int i = 0; i < size; i++){
      cout << "Enter score #" << i + 1 << ": ";
      cin >> scores_arr[i];
  }

  //calling the funtions by passing the values into it.
  displayArray(scores_arr, size);
  selectionSort(scores_arr, size);
  cout << "Highest score: " << findMax(scores_arr, size) << "\n\n";
  cout << "Lowest score: " << findMin(scores_arr, size) << "\n\n";
  cout << "Average of scores: " << findAvg(scores_arr, size);
  
  return 0;
}