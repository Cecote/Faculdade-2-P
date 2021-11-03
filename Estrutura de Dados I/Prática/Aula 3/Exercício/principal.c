#include "nota.h"
#include <stdio.h>

int main()
{
  //estrutura que mantem as notas e as duas medias
  struct nota notas;
  //leia as 4 primeiras notas
  lerNotas(&notas);
  //calcule a media das 4 primeiras notas
  calculaMedia(&notas);
  //se for o caso de exame
  if (notas.M1 >= 5.0 && notas.M1 <= 6.9)
  {
    //leia a nota do exame
    leExame(&notas);
    //calcule a nova media
    recalculaMedia(&notas);
  }
  //imprima o resultado de acordo com a primeira media e a segunda media
  printResultado(notas);

  return 0; //nao remova
}
