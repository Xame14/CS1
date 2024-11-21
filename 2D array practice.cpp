#include <iostream> 
#include <iomanip> 
using namespace std; 

const int ROWS = 6; 
const int COLUMNS = 5;

// Function Prototypes
void printMatrix(int nums[][COLUMNS]); 
void sumRows(int nums[][COLUMNS]); 
void largestInRows(int nums[][COLUMNS]); 

int main() { 
    int board[ROWS][COLUMNS] = {
                            {23, 5, 6, 15, 18}, 
                            {4, 16, 24, 67, 10}, 
                            {12, 54, 23, 76, 11}, 
                            {1, 12, 34, 22, 8}, 
                            {81, 54, 32, 67, 33}, 
                            {12, 34, 76, 78, 9}
            
    }; 
    
    printMatrix(board); 
    cout << endl; 
    sumRows(board); 
    cout << endl; 
    largestInRows(board); 
    return 0; 
    
}

void printMatrix(int matrix[][COLUMNS]) {  
    int row, col; 
    for (int row = 0; row < ROWS; row++) { 
        for (int col = 0; col < COLUMNS; col++ ){
            cout << setw(5) << matrix[row][col] << " "; 
        }
        cout << endl;
    }
}


void sumRows(int nums[][COLUMNS]) { 
    int row, col; 
    int sum; 
    
    //Sum of each individual row  
    for (int row = 0; row < ROWS; row++ ) {  
        sum = 0; 
        for (int col = 0; col < COLUMNS; col++ ) 
            sum = sum + nums[row][col]; 
        cout << "Sum of row " << (row + 1) << " = " << sum << endl;
    }
}

void largestInRows(int nums[][COLUMNS]) { 
    int row, col; 
    int largest; 
    
    //Largest element in each row 
    for (int row = 0; row < ROWS; row++) { 
        
        //Assume that the first element of the row is the largest. 
        largest = nums[row][0]; 
        
        //Sequential search
        for (int col = 1; col < COLUMNS; col++) {
            if (largest < nums[row][col] ) 
                largest = nums[row][col]; 
        }
        cout << "The largest element of row " << (row + 1) << " = " << largest << endl;
    }
}
