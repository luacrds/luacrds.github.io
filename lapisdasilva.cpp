#include <iostream>
#include<cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int n,a=0,b=0,c=0,d=0,e=0,f=0,i; 
	
	do
	{
	
	system ("cls");
	
	printf("\t\t ####      #####        ######      ###                \n");
	printf("\t\t#           ##          ##   #     #   #               \n");
	printf("\t\t#           ##          #### #    #     #              \n");
	printf("\t\t#           ##          ##       #  ###  #             \n");	
	printf("\t\t ####      #####        ##      #         #            \n");
	printf("\n\t\t\t\t***** VOTA√á√ÉO PARA  PRESIDENTE CIPA *****\n\n\n");



	printf("\t\t\t\t _________________________________________________\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|      CANDIDATOS                                 |\n");
	printf("\t\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|    12345  -  LAPIS DA SILVA                     |\n");
	printf("\t\t\t\t|    67890  -  BUIU                               |\n");
	printf("\t\t\t\t|    98765  -  CEBOLA                             |\n");
	printf("\t\t\t\t|    43210  -  BATATA                             |\n");
	printf("\t\t\t\t|    48444  -  NULO                               |\n");
	printf("\t\t\t\t|    00000  -  BRANCO                             |\n");
	printf("\t\t\t\t|_________________________________________________|\n");
	
	cout << "lapis da silva "<< a << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl << "buiu "  << b << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"cebola " << c << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"batata " << d << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"nulo "   << e << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"branco " << f << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	
	cout << endl << endl << "Informe o n˙mero do seu candidato!" << endl;
	cin >> n;
	
	if(n >= 0)
	{
		if(n == 12345)
			
			a++;
			
			if(n == 67890)
			
			b++;
			
			if(n == 98765)
			
			c++;
			
			if(n == 43210)
			
			d++;
			
			if(n != 48444 && n != 12345 && n!= 67890 && n!= 98765 && n!=43210 && n!=00000)
			
			e++;
			
			if(n == 00000)
			
			f++;
	}
}
	while (n >= 0);
	
	system("cls");
	
	cout << "lapis da silva "<< a << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl << "buiu "  << b << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"cebola " << c << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"batata " << d << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"nulo "   << e << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	cout << endl <<"branco " << f << "Votos"; for (i-1;i<=a;i++) cout << "\xB2";
	
	if(a>b && a>c && a>d)
	
	cout << endl << endl <<"O candidato eleito È o Lapis da Silva" << endl;
	
	else
	
	if (b>a && b>c && b>d)
	
		cout << endl << endl <<"O candidato eleito È o Buiu" << endl;
		
		else
		
		if (c>a && c>b && c>d)
		
		cout << endl << endl <<"O candidato eleito È o cebola" << endl;
		
		else
		
		if (d>a && d>b && d>c)
		cout << endl << endl <<"O candidato eleito È o batata" << endl;
	
	return 0;
	
	
}
