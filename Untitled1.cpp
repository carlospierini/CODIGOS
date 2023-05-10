#include <iostream>


using namespace std;

float produto, total;
int departamento, cor_pro;
int main(){
	
	
cout<< "Digite qual é o valor do produto: ";
cin>>produto;

cout<<"De qual departamento é o produto? \n 1 \n 2 \n 3\n";
cin>>departamento;

cout<<"De qual cor é a etiqueta do produto? \n 1-Azul \n 2-Branca\n 3-Verde \n 4-Preta\n";
cin>>cor_pro;
	
	

	if(departamento==1){
		
	switch(cor_pro){

	
	case 1: 
	total = produto *0.94; cout<<"o valor do produto é: "<< total; 
	break;

	
	
	case 2: 
	total = produto *0.93;cout<<"o valor do produto é: "<< total;	
	break;
	
	
	case 3:
	total = produto *0.92;
	cout<<"o valor do produto é: ", total;	
	break;
	
	case 4:
	total = produto *0.91;
	cout<<"o valor do produto é: ", total;	
	break;
	}
	 
}
	
	
	else if(departamento==2){
	switch(cor_pro){
	
	
	case 1:
	 total = produto *0.937;
	cout<<"o valor do produto é: ", total;	
	break;
	
	case 2:{
	total = produto *0.926;
	cout<<"o valor do produto é: ", total;	
	break;}
	case 3: total = produto *0.918;
	cout<<"o valor do produto é: ", total;	
	break;
	case 4: total = produto *0.909;
	cout<<"o valor do produto é: ", total;
	break;
	} 
	}
	
	
	else if(departamento==3) {
	switch(cor_pro){
	
	
	case 1: total = produto *0.944;
	cout<<"o valor do produto é: ", total;	
	break;
	case 2: total = produto *0.933;
	cout<<"o valor do produto é: ", total;	
	break;
	case 3: total = produto *0.922;
	cout<<"o valor do produto é: ", total;	
	break;
	case 4: total = produto *0.891;
	cout<<"o valor do produto é: ", total;
		break;
		defult :cout<<"Digitou o numero errado";
	}
} 
	else 
	{
		cout<<"Digitou o numero errado";
	}
	return 0;
}


