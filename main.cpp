#include <iostream>
using namespace std;

int main (int argc, const char *argv[]){
  //variables used for inplace sorting
  int location_swap = 0;
  int looking_for;
  int temp;

  //Input Arrays given
  //Input 1
  int array_to_be_sorted_1[10] = {1,0,-1,0,0,1,1,-1,0,1};
  int sort_by_1[3] = {0,1,-1};
  //Input 2
  int array_to_be_sorted_2[11] = {4,2,10,10,7,2,10,7,4,2,4};
  int sort_by_2[4] = {2,4,7,10};
  //Input 3
  int array_to_be_sorted_3[10] = {9,-2,9,23,23,-2,9,23,9,-2};
  int sort_by_3[3] = {9,-2,23};

  cout << "=========== ALGORITHM 1 - Inplace Sorting ===========\n\n";
//=========================Input 1============================================

//Nested for Loops to Inplace Sort for Input Array 1
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      looking_for = sort_by_1[i];
      if(looking_for == array_to_be_sorted_1[j]){
        temp = array_to_be_sorted_1[location_swap];
        array_to_be_sorted_1[location_swap] = array_to_be_sorted_1[j];
        array_to_be_sorted_1[j] = temp;
        location_swap++;
      }
    }
  }
  //For Loop That Prints Out Result of Sorted Array
  cout << "Sorted Array 1 is: [ ";
  for(int k = 0; k < 10; k++){
    cout << array_to_be_sorted_1[k] << " ";
  }
  cout << "]\n";

  //===========================Input 2==========================================

  //Nested for Loops to Inplace Sort for Input Array 2
  location_swap = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 11; j++){
      looking_for = sort_by_2[i];
      if(looking_for == array_to_be_sorted_2[j]){
        temp = array_to_be_sorted_2[location_swap];
        array_to_be_sorted_2[location_swap] = array_to_be_sorted_2[j];
        array_to_be_sorted_2[j] = temp;
        location_swap++;
        }
    }
  }
    //For Loop That Prints Out Result of Sorted Array
  cout << "Sorted Array 2 is: [ ";
  for(int k = 0; k < 11; k++){
    cout << array_to_be_sorted_2[k] << " ";
  }
  cout << "]\n";

  //===========================Input 3==========================================

  //Nested for Loops to Inplace Sort for Input Array 3
  location_swap = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      looking_for = sort_by_3[i];
      if(looking_for == array_to_be_sorted_3[j]){
        temp = array_to_be_sorted_3[location_swap];
        array_to_be_sorted_3[location_swap] = array_to_be_sorted_3[j];
        array_to_be_sorted_3[j] = temp;
        location_swap++;
        }
    }
  }
    //For Loop That Prints Out Result of Sorted Array
  cout << "Sorted Array 3 is: [ ";
  for(int k = 0; k < 10; k++){
    cout << array_to_be_sorted_3[k] << " ";
  }
  cout << "]\n";
  cout << "\n=====================================================\n";


  cout << "Done!\n";
}
