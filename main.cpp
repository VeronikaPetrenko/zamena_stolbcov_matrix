#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,p,q;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];
	for(int i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for(int j=0;j<m;j++){
			matrix[i][j]=((rand()%10));}
	cout<<"Ваша матрица: "<<endl;
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;	
	cout<<"Какие столбцы поменять местами: ";
	cin>>p>>q;
	cout<<endl;
	int temp;
	for (int i=0;i<n;i++){
		temp=matrix[i][p-1];
		matrix[i][p-1]=matrix[i][q-1];
		matrix[i][q-1]=temp;}
	cout<<"Изменённая матрица:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}	
	cout<<endl;
	system("PAUSE");
	return 0;
}
	

