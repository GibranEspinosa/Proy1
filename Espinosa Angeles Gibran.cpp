//Gibran Espinosa
#include<iostream> 
using namespace std;
int main (){
 int opci,pex;
 do{
 	
 	
	cout<<"  Ingresa 1 para mostrar clientes"<<endl;
	cout<<"Ingresa 2 para despachar clientes"<<endl;
	cin>>opci; 
	
	switch(opci)
	{
		case 1:
		cout<<"___________"<<endl;
		cout<<"|Clientes  |"<<endl;
	    cout<<"|**********|"<<endl;
	    cout<<"|  juan    |"<<endl;
		cout<<"|  maria   |"<<endl;
		cout<<"|  josé    |"<<endl;
		cout<<"|  Arturo  |"<<endl;
		cout<<"|  Samuel  |"<<endl;
		cout<<"___________"<<endl;
		break;
		
		case 2:
			cout<<"__________________________"<<endl;
            cout<<"***Despacho a clientes***"<<endl;
		    cout<<""<<endl;
		break;
			}
			 cout<<"Desea Hacer Otro despacho o consulta?(1=si 2=n0) "<<endl; 
			 cin>>pex;
}while(pex==1);

	
	cout<<endl;
	system("pause");
	return 0;
 }

