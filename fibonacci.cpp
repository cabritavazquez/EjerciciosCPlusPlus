
Diseñar un programa C++ que lea un número n por teclado y calcule el n-ésimo número de la serie de Fibonacci. 
Los dos primeros números de esta serie son el cero y el uno, y a partir de éstos cada número se calcula 
realizando la suma de los dos anteriores.

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){
    int n,fib = 1, ant1 = 1, ant2 = 0,temp;
    cout <<"Introduce un número:"<<endl;
    cin >> n;
    for (int i=3;i<n;i++){
        temp = fib;
        ant2 = ant1;
        ant1 = temp;
        fib = ant1 + ant2;
    }
    cout <<"El numero de Fibonacci de orden " << n << " es " << fib <<  endl;
    return 0;
}
