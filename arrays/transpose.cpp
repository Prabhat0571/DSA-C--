#include<iostream>
using namespace std;

void transPose(int arr[4][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i;j<col; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

}

void printarr(int arr[4][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

}

int main(){

    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16} 
    };

    int col=4;
    int row=4;
   
   cout<<"printing before transpose: "<<endl;
   printarr(arr, row, col);
   cout<<"printing after transpose: "<<endl;
   transPose(arr,row,col);
   printarr(arr,row,col);
}