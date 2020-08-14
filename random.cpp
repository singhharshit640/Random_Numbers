#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    int array[10], i, j, a;
  srand((unsigned) time(0));
  int randomNumber;
  cout<<"Random Numbers between 1 - 500 are "<<endl;
  for (int index = 0; index < 10; index++) {
    randomNumber = (rand() % 500) + 1;
    array[index] = randomNumber;
    cout << randomNumber << " ";
  }
  for (i = 0; i < 10; ++i)
        {

            for (j = i + 1; j < 10; ++j)
            {

                if (array[i] > array[j])
                {

                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;

                }

            }

        }
        cout<<"\n\nThe numbers arranged in ascending order are given below \n";
        for (i = 0; i < 10; ++i)
            cout<< array[i] << " ";

}
