#ifndef nota_h
#define nota_h

//COMPLETAR A ESTRUTURA
struct nota
{
    double N1;
    double N2;
    double N3;
    double N4;
    double N5;
    double M1;
    double M2;
};

//Manter como especificado
void lerNotas(struct nota *notas);
//Manter como especificado
void calculaMedia(struct nota *notas);
//Manter como especificado
void leExame(struct nota *notas);
//Manter como especificado
void recalculaMedia(struct nota *notas);
//Manter como especificado
void printResultado(struct nota notas);

#endif
