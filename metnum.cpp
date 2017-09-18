#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/* 3411151026 - WULAN DEWI
	Kelas SIE-A */
	
int main()
{
	system("cls");
	int X, Y, pilih, hasil, i;
	
	menu:
		system("cls");
		printf("\tSilahkan Pilih \n");
		printf("\t 1. Penjumlahan \n");
		printf("\t 2. Pengurangan \n");
		printf("\t 3. Perkalian \n");
		printf("\t 4. Pangkat \n");
		printf("\t 5. Fungsi \n");
		printf("\t\n");
		printf ("\tMasukkan Pilihan : ");
  		scanf("%d",&pilih);
  
  switch (pilih){
	 case 1: 
	 	system("cls");
		printf ("Masukkan X : ");
		scanf ("%d",&X);
		printf ("Masukkan Y : ");
		scanf ("%d",&Y);
		hasil = X+Y;
		printf("Hasilnya Adalah : %d",hasil);	 	
		getch();
	 	goto menu;
	 	break;
	case 2: 
	 	system("cls");
	 	printf ("Masukkan X : ");
	 	scanf ("%d",&X);
	 	printf ("Masukkan Y : ");
	 	scanf ("%d",&Y);
	 	hasil = X-Y;
	 	printf("Hasilnya : %d",hasil);
	 	getch();
	 	goto menu;
	 	break;
	case 3: 
	 	system("cls");
	 	printf ("Masukkan X : ");
	 	scanf ("%d",&X);
	 	printf ("Masukkan Y : ");
	 	scanf ("%d",&Y);
	 	hasil = X*Y;
	 	printf("Hasilnya : %d",hasil); 
	 	getch();
	 	goto menu;
		break;	
	case 4: 
	 	system("cls");
	 	printf ("Masukkan X : ");
	 	scanf ("%d",&X);
	 	printf ("Masukkan Y : ");
	 	scanf ("%d",&Y);
	 	hasil=1;
	 	 for (i=1; i<=Y;i++){
            hasil = hasil * X;
		}
	 	printf("Hasilnya : %d",hasil);
	 	getch();
	 	goto menu;
		break;	
	case 5: 
	 	system("cls");
	 	printf ("Masukkan X : ");
	 	scanf ("%d",&X);
	 	printf ("Masukkan Y : ");
	 	scanf ("%d",&Y);
	 	 for (i=X; i<=Y;i++){
            hasil = (2*(i*i))-((3*Y)+1);
            printf("Hasil : %d \n",hasil);
        getch();
	 	goto menu;
		break;
	
	 default:
	 	system("cls");
	 	printf ("Pilihan Anda Salah");
	 	getch();
		 goto menu;
	 	break;
  }
  return 0;
}

}
