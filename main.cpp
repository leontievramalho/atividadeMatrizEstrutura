#include <iostream>
using namespace std;
void qum(){
	int numeros[50];
	for(int i=1; i<51; i++){
		numeros[i-1]=i;
	}
	for(int i=0; i<50; i++){
		if(numeros[i]%4 == 0){
			cout << " PIM ";
		} else{
			cout <<" "<< numeros[i] <<" ";
		}
	}
}

void qdois(){
	int num[20];
	float soma = 0;
	for(int i = 0; i<20; i++){
		cout << "valor " << i+1 << ": ";
		cin >> num[i];
		soma += num[i];
	}
	cout << "Media: " << soma/20;
}

void qtres(){
	int quantidade;
	cout << "Quantos numeros deseja informar? ";
	cin >> quantidade;
	int numeros[quantidade];
	int somaPar = 0;
	for(int i=0;i<quantidade;i++){
		cout << i+1 << " numero: ";
		cin >> numeros[i];
		if(numeros[i]%2==0){
			somaPar += numeros[i];
		}
	}
	cout << "Soma dos numeros pares: " << somaPar;
}

void qquatro(){
	float dinheiroJoao = 1000;
	float taxaJoao = 0.005;
	float dinheiroMaria = 100;
	float taxaMaria = 0.01;
	int meses = 0;
	while(dinheiroJoao >= dinheiroMaria){
		dinheiroJoao *= (1 + taxaJoao);
		dinheiroMaria *= (1 + taxaMaria);
		meses ++;
	}
	cout << "Meses necessarios para Maria ter mais dinheiro: " << meses;
}

void qcinco(){
	int numero;
	int fatorial=1;
	cout << "Numero: ";
	cin >> numero;
	for(int i = 1;i<=numero;i++){
		fatorial *= i;
	}
	cout << "Fatorial: " << fatorial;
}

void qseis(){
	int numeros[30];
	for(int i=0;i<30;i++){
		cout << i+1 << " numero: ";
		cin >> numeros[i];
	}
	for(int i=0;i<30;i++){
		if(numeros[i]%2==0){
			cout << numeros[i] << ", ";
		}
	}
	cout << endl;
	for(int i=0;i<30;i++){
		if(numeros[i]%2!=0){
			cout << numeros[i] << ", ";
		}
	}
}

void qsete(){
	int valores[100];
	for(int i=0;i<100;i++){
		cout << i+1 << " numero: ";
		cin >> valores[i];
	}
	cout << "posicoes do vetor com valores menores ou iguais a 10: " << endl;	
	for(int i=0;i<100;i++){
		if(valores[i]<=10){
			cout << "v[" << i <<"] = " << valores[i] << endl;
		}
	}
}

void qoito(){
	int matriz[5][10];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 10; j++){
			cout << "Elemento da linha " << i << " e coluna " << j << ": ";
			cin >> matriz[i][j];
		}
	}
	int escolha;
	do{
		cout << "Escolha um numero de 0 a 9: ";
		cin >> escolha;
	}while(escolha>9 && escolha < 0);
	int soma = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 10; j++){
			cout << matriz[i][j] << "   ";
			if(j==escolha){
				soma += matriz[i][j];
			}
		}
		cout << endl;
	}
	cout << "Soma da coluna " << escolha << ": " << soma;
}

qnove(){
	int linhas = 10;
	int colunas = 10;
	int matriz[linhas][colunas];
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			cout << "Elemento da linha " << i << " e coluna " << j << ": ";
			cin >> matriz[i][j];
		}
	}
	int maior = matriz[0][0];
	int linhaMaior = 0;
	int colunaMaior = 0;
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
				linhaMaior = i;
				colunaMaior = j;
			}
		}
	}
	cout << "Maior valor encontrado: " << maior << endl;
	cout << "Elementos da coluna: ";
	for(int i=0; i<linhas; i++){
		cout << matriz[i][colunaMaior] << " ";
	}
	cout << "\nElementos da linha: ";
	for(int j=0; j<colunas; j++){
		cout << matriz[linhaMaior][j] << " ";
	}
}

float media(float num1, float num2, float num3){
	return (num1+num2+num3)/3;
}

void qdez(){
	cout << media(3, 5, 7);
}

void exibirMedia(float num1, float num2, float num3){
	cout << media(num1, num2, num3);
}

void qonze(){
	exibirMedia(3, 5, 7);
}

int main(int argc, char** argv) {
	int questao;
	cout << "Qual questao deseja exibir? ";
	cin >> questao;
	switch(questao){
		case 1:
			qum();
			break;
		case 2:
			qdois();
			break;
		case 3:
			qtres();
			break;
		case 4:
			qquatro();
			break;
		case 5:
			qcinco();
			break;
		case 6:
			qseis();
			break;
		case 7:
			qsete();
			break;
		case 8:
			qoito();
			break;
		case 9:
			qnove();
			break;
		case 10:
			qdez();
			break;
		case 11:
			qonze();
			break;	
	}
	return 0;
}
