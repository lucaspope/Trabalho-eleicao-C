#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <iostream>

main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int opcao, c1=0, c2=0, c3=0, c4=0, vbranco=0, total, nulo=0;	
	float total1, total2, total3, total4, total5, total6;
	
	do {
		printf(".########....##..........########....####.....######......#######.....########.....######....\n"); Sleep(50);
		printf(".##..........##..........##...........##.....##....##....##.....##....##..........##....##... \n"); Sleep(50);
		printf(".##..........##..........##...........##.....##..........##.....##....##..........##.........\n"); Sleep(50);
		printf(".######......##..........######.......##.....##..........##.....##....######.......######....\n"); Sleep(50);
		printf(".##..........##..........##...........##.....##..........##.....##....##................##...\n"); Sleep(50);
		printf(".##..........##..........##...........##.....##....##....##.....##....##..........##....##...\n"); Sleep(50);
		printf(".########....########....########....####.....######......#######.....########.....######....\n"); Sleep(50);
		printf("_____________________________________________________________________________________________ \n");
		
		printf("Digite 1 para votar no Jão Ramelão \n");
		printf("Digite 2 para votar no Marcinho Vida Loka \n");
		printf("Digite 3 para votar no Jean Wyllys \n");
		printf("Digite 4 para votar no Lulinha da galera \n");
		printf("Digite 5 para anular seu voto. \n");
		printf("Digite 6 para votar em branco. \n");
		printf("Digite 0 para encerrar a votação. (recomendado!) \n Sua opção:  ");
		scanf("%d", &opcao);
		
	
	if (opcao == 1){
		printf("Você votou no Jão Ramelão. Obrigado por contribuir com a democracia!");
		c1 += 1;
		Sleep(1000);
		system("cls");
	}
	else if (opcao == 2){
		printf("Você votou em Marcinho Vida Loka. Obrigado por contribuir com a democracia!");
		c2 += 1;
		Sleep(1000);
		system("cls");
	}
	else if (opcao == 3) {
		printf("você votou em Jean Wyllys... ");
		c3 += 1;
		Sleep(1000);
		system("cls");
	}
	else if (opcao == 4) {
		printf("Porra, no lulinha? puta que pariu hein!");
		c4 += 1;
		Sleep(1000);
		system("cls");
	}
	else if (opcao == 5) {
		printf("Você anulou seu voto!");
		nulo += 1;
		Sleep(1000);
		system("cls");
	}
	else if (opcao == 6) {
		printf("Você votou em branco!");
		vbranco += 1;
		Sleep (1000);
		system("cls");
}
	}  while(opcao != 0 );

system("cls");
printf("Saindo... \n");
Sleep(600);	

total = c1 + c2 + c3 + c4 + vbranco + nulo;

total1 = (float)c1/(float)total * 100;
total2 = (float)c2/(float)total * 100;
total3 = (float)c3/(float)total * 100;
total4 = (float)c4/(float)total * 100;
total5 = (float)nulo/(float)total * 100;
total6 = (float)vbranco/(float)total * 100;


cout << "Votos do canditado 1: " << c1 << " - Percentual de votos: " << total1 << "%" << endl;
cout << "Votos do canditado 2: " << c2 << " - Percentual de votos: " << total2 << "%" << endl;
cout << "Votos do canditado 3: " << c3 << " - Percentual de votos: " << total3 << "%" << endl;
cout << "Votos do canditado 4: " << c4 << " - Percentual de votos: " << total4 << "%" << endl;
cout << "Votos brancos: " << vbranco << " - Percentual de votos: " << total5 << "%" << endl;
cout << "Votos nulos:  " << nulo << " - Percentual de votos: " << total6 << "%" << endl;

	

}
