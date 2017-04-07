#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#define T_NOTAS 3
#define T_MEDIAS 8

main() {
  setlocale(LC_ALL, "");
  float notas[T_NOTAS], medias[T_MEDIAS], media_turma = 0;
  int i, j;
  for (i = 0; i < T_MEDIAS; i++) {
    printf("Aluno %d: ", i + 1);
    for (j = 0; j < T_NOTAS; j++) {
      printf("\nDigite a nota %d do aluno %d: ", j + 1, i + 1);
      scanf("%f", & notas[j]);
    }
    printf("%0.2f %0.2f %0.2f\n\n", notas[0], notas[1], notas[2]);
    medias[i] = (notas[0] + notas[1] + notas[2]) / 3;
    media_turma += medias[i];
    printf("Média do aluno %d é: %0.2f, seu conceito é: ", i + 1, medias[i]);
    if (medias[i] >= 7) printf("APROVADO\n");
    else printf("REPROVADO\n");
  }
  printf("\nA média da turma é: %0.2f", media_turma / T_MEDIAS);
  system("pause");
}
