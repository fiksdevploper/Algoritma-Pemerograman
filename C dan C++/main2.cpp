# include <stdio.h>  
# include <conio.h> 
 
main() 
{ 
    char nm1[50];  
    char nm2[50]; 
    
    puts("Masukan nama pertama = "); gets(nm1); 
    printf("Masukan nama kedua = "); scanf("%s",&nm2); 
    
    printf("\n\n"); 
    printf("Nama pertama = %s\n",nm1); 
    printf("Nama kedua = %s\n",nm2); 
    getch(); 
}