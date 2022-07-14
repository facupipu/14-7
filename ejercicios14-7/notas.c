#include <stdio.h>

int main(void) {

int choice;
FILE *fp;
int c;
char notas[100] = "";
while (1) {
  printf("Hola, soy la app de notas\n");
  printf("1) Ver notas\n");
  printf("2) Agregar notas\n");
  printf("3) Borrar todas las notas\n");
  printf("4) Salir\n");
  printf("Elegí algo\n");
  scanf("%d", &choice);
  int c = getchar();
  switch (choice) {
    case 1:
     fp= fopen ("notas.txt", "r");
     printf("-----Notas-----\n");
     while ((c = fgetc(fp)) != EOF) {
       printf("%c", c);
     };
     printf("-----Fin-----\n");
     fclose(fp);
     break;
    case 2:
      fp = fopen("notas.txt", "a");
      printf("Que queres antar? ");
      fgets(notas, 100, stdin);
      fprintf(fp, "%s", notas);
      fclose(fp);
      break;
    case 3:
      fp = fopen("notas.txt", "w");
      fclose(fp);
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Opcion incorrecta\n");
  };
};
  return 0;
};
