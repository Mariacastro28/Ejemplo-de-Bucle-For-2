#include <iostream>

using namespace std;
int main() {
	int par = 0;
	
for( int i =2 ; i <= 90; i++){
	 if( i % 2 == 0)
	  par +=i;
}
      cout<<endl;
      cout<<"La suma de todos los pares: "<<par<<endl;
	 	return 0;
}