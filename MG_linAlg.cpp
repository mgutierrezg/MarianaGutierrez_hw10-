#include <iostream>
using namespace std;
//Funcion para tomar una matriz

double** get_Matrix(int N, int M);

//Funcion para multiplicar una matriz

double** matrix_product(double** m1, double** m2);

//Metodo para hacer matriz

double** get_Matrix(int N, int M){
  double **mat = new double*[N];
  //Inicializar

  int i;
  for(i=0; i<N; i++){
    mat[i] = new double[N];
  }

  int j;
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      cout<< "Ingrese el numero " << i << " , " << j << endl;
      double x;
      cin>>x;
      mat[i][j] = x;
     }
     
    
  }
  return mat;
}

int main(){
  //El usuario ingresa numero de filas
  cout << "Ingrese el numero de filas" << endl;
  int N;
  cin >> N;
  cout << "Ingrese el numero de columnas" << endl;
  int M;
  cin >> M;
  double **matriz = get_Matrix(N,M);
  cout << get_Matrix << endl;
  return 0;
}
