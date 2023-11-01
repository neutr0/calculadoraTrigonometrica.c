/* Olá, nós do grupo composto por: Lucas S., João Pedro S., Luan V., Mateus F. e Henrique M. inicialmente faríamos o "Cardápio de Carros";
No entanto, notamos que não seria possível realizá-lo, uma vez que seria necessário utilizar banco de dados. Dessa forma, decidimos mudar
o tema do trabalho para "Calculadora de Funções Trigonométricas, ou seja, desde a função seno até a função arco cotangente. 
Atenciosamente. */


#include <stdio.h>
#include <math.h>

//definindo PI como 3.14159265.

#define PI 3.14159265

float angulo, sen, coss, tg, op, cotg, sec, cossec, radiano;

//===================== FUNÇÕES E CÁLCULOS============================================

// void para criar a função que calculará o seno do ângulo determinado pelo usuário.

void Seno() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo); 
  sen = sin(angulo*PI/180); // Cálculo de seno utilizando o comando sin().

  //Exibindo o resultado do cálculo de seno.
  printf("\nO seno de %f = %f\n", angulo, sen); 
   
}

// void para criar a função que calculará o cosseno do ângulo determinado pelo usuário.

void Cosseno() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  coss = cos(angulo*PI/180); // Calculando o coseno do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nO cosseno de %f = %f\n", angulo, coss);
   
}
// void para criar a função que calculará a tangente o do ângulo determinado pelo usuário.
void Tangente() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  
  // Cálculos tangente.
  tg = tan(angulo*PI/180); 
  
  // Exibindo o Resultado.
  printf("\nA tangente de %f = %f\n", angulo, tg);
}
// void para criar a função que calculará a secante o do ângulo determinado pelo usuário.

 void Secante(){
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  sec = 1/cos(angulo*PI/180);
  // Calculando a secante do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA secante de %f = %f\n", angulo, sec);
 }

// void para criar a função que calculará a cossecante do ângulo determinado pelo usuário.

 void Cossecante() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  cossec = 1/sin(angulo*PI/180);
  // Calculando a cossecante do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA cossecante de %f = %f\n", angulo, cossec);

}
// void para criar a função que calculará a cotangente o do ângulo determinado pelo usuário.

void Cotangente() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  cotg = 1/sin(angulo*PI/180)/cos(angulo*PI); // Calculando a cotangente do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA cotangente de %f = %f\n", angulo, cotg);

} void ArcSen() {
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_sen = asin(valor) * (180.0 / PI);
        printf("\nO arco-seno de %lf é %.2f graus\n", valor, arco_sen);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}
// void para criar a função que calculará o arco-cosseno do ângulo determinado pelo usuário.
    
    void ArcCos(){
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0){
        double arco_cos = acos(valor) * (180.0 / PI);
        printf("\nO arco-cosseno de %lf é %.2f graus\n", valor, arco_cos);
    }else {
          printf("Valor fora do intervalo [-1, 1]\n");
    }} 
    void ArcTg() {
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_tan = atan(valor) * (180.0 / PI);
        printf("\nO arco-tangente de %lf é %.2f graus\n", valor, arco_tan);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}
// void para criar a função que calculará o arco-sec do ângulo determinado pelo usuário.

   void ArcSec(){
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_sec = 1/acos(valor) * (180.0 / PI);
        printf("\nO arco-tangente de %lf é %.2f graus\n", valor, arco_sec);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");

    }}
   void ArcCossec(){
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_cossec = 1/sin(valor) * (180.0 / PI);
        printf("\nO arco-cossecante de %lf é %.2f graus\n", valor, arco_cossec);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }} 
   void ArcCotang(){
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_cotang = 1/atan(valor) * (180.0 / PI);
        printf("\nO arco-tangente de %lf é %.2f graus\n", valor, arco_cotang);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}
    void mostrarOPgraus(){

  printf("\n 1-Seno");
  // Opção 1, remete à void Seno().

  printf("\n 2-Cosseno"); 
  // Opção 2, remete à void Cosseno().

  printf("\n 3-Tangente");
  // Opção 3, remete à void Tangente().
  
  printf("\n 4-Secante");
  // Opção 4, remete à void Secante()

  printf("\n 5-Cossecante");
  // Opção 5, remete à void Cossecante()

  printf("\n 6-Cotangente");
  // Opção 6, remete à void Cotangente()

  printf("\n 7-Arco Seno");
  // Opção 7, remete à void ArcSen()

  printf("\n 8-Arco Cosseno"); // Opção 8, remete à void ArcCos()
  // Opção 8, remete à void ArcCos()

  printf("\n 9-Arco Tangente");
  // Opção 9, remete à void ArcTg()

  printf("\n 10-Arco Secante"); 
  // Opção 10, remete à void ArcSec()

  printf("\n 11-Arco Cossecante"); 
  // Opção 11, remete à void ArcCossec()

  printf("\n 12-Arco Cotangente"); 
  // Opção 12, remete à void ArcCotg()

  } void mostrarOPradianos (){
    
  printf("\n 1-Seno");
  // Opção 1, remete à void Seno().

  printf("\n 2-Cosseno"); 
  // Opção 2, remete à void Cosseno().

  printf("\n 3-Tangente");
  // Opção 3, remete à void Tangente().
  
  printf("\n 4-Secante");
  // Opção 4, remete à void Secante()

  printf("\n 5-Cossecante");
  // Opção 5, remete à void Cossecante()

  printf("\n 6-Cotangente");
  // Opção 6, remete à void Cotangente()

  printf("\n 7-Arco Seno");
  // Opção 7, remete à void ArcSen()

  printf("\n 8-Arco Cosseno"); // Opção 8, remete à void ArcCos()
  // Opção 8, remete à void ArcCos()

  printf("\n 9-Arco Tangente");
  // Opção 9, remete à void ArcTg()

  printf("\n 10-Arco Secante"); 
  // Opção 10, remete à void ArcSec()

  printf("\n 11-Arco Cossecante"); 
  // Opção 11, remete à void ArcCossec()

  printf("\n 12-Arco Cotangente"); 
  // Opção 12, remete à void ArcCotg()
    
  }
     void senoR (){
    double FsenoR;
  printf("\nDigite o ângulo em radianos: ");
  scanf("%f", &radiano);
  angulo = radiano*180/PI;
  FsenoR = sin(angulo*180/PI); // Cálculo de seno utilizando o comando sin().

  //Exibindo o resultado do cálculo de seno.
  printf("\nO seno de %lf = %f\n", radiano, FsenoR); 
    
} void cossenoR() {
  double FcossR;
  printf("\nDigite o ângulo em radianos: ");
  scanf("%f", &radiano);
  angulo = radiano*180/PI;
  FcossR = cos(angulo*180/PI); // Calculando o cosseno do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nO cosseno de %lf = %f\n", radiano, FcossR);
} 
void tangenteR(){
    double FtangR;
    printf("\nDigite o ângulo em radianos: ");
    scanf("%f", &radiano);
    angulo = radiano*180/PI;
    FtangR = tan(angulo*PI/180); 
    printf("\nO cosseno de %lf = %f\n", radiano, FtangR);

}
void SecanteR(){
    double FsecR;
    printf("\nDigite o ângulo em radianos: ");
    scanf("%f", &radiano);
    angulo = radiano*180/PI;
    FsecR = 1/cos(angulo*PI/180);
    // Calculando a secante do ângulo.
  
    // Logo após os cálculos, o resultado é exibido.
     printf("\nA secante de %f rad's = %f\n", radiano, FsecR);
 }
 void CossecanteR() {
    double FcossecR;
    printf("\nDigite o ângulo em radianos: ");
    scanf("%f", &radiano);
    angulo = radiano*180/PI;
    FcossecR = 1/sin(angulo*PI/180);
    // Calculando a cossecante do ângulo.
  
    // Logo após os cálculos, o resultado é exibido.
    printf("\nA cossecante de %f rad's = %f\n", radiano, FcossecR);}

    void CotangenteR() {
        double FcotgR;
        printf("\nDigite o ângulo em radianos: ");
        scanf("%f", &radiano);
        angulo = radiano*180/PI;
        FcotgR = 1/sin(angulo*PI/180)/cos(angulo*PI); 
        // Calculando a cotangente do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA cotangente de %f rad's = %f\n", radiano, FcotgR);}

 void arcSenR() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double Arcs = asin(angulo) * (180.0 / PI);
        printf("\nO arco-seno de %lf é %.2f graus\n", radiano, Arcs);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}

    void arccosR() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double Arcos = acos(angulo) * (180.0 / PI);
        printf("\nO arco-cosseno de %lf é %.2f graus\n", radiano, Arcos);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}
    
     void arcTgR() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double Arctg = atan(angulo) * (180.0 / PI);
        printf("\nO arco-tangente de %lf é %.2f graus\n", radiano, Arctg);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }} 
    
     void arcsec() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double Arcsecante = 1/cos(angulo) * (180.0 / PI);
        printf("\nO arco-secante de %lf é %.2f graus\n", radiano, Arcsecante);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}

    void arccossecante() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double Arcossecante = 1/sin(angulo) * (180.0 / PI);
        printf("\nO arco-cossecante de %lf é %.2f graus\n", radiano, Arcossecante);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}

     void arccotangente() {
     printf("Digite um valor entre -1 e 1: ");
     scanf("%f", &radiano);
    angulo = radiano*180/PI;
    if (-1.0 <= angulo && angulo <= 1.0) {
        double arccotan = 1/tan(angulo) * (180.0 / PI);
        printf("\nO arco-cotangente de %lf é %.2f graus\n", radiano, arccotan);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");
    }}






//============================ MENU ==============================
//Abaixo o Menu de escolha que o usuário irá ver e selecionar a função que deseja ser calculada, e depois determinará o ângulo.

int main() {
  int op, op2, num1 = 1, num2 = 2;
  // Cabeçalho do Menu.
  printf("\n============== TRIGONOMETRIA CÁLCULO ==============\n");   
  
  printf ("\nSeja bem-vindo (a) a calculadora de funções trigonométricas");
  
  printf("\nMenu:\n"); // as opções serão listadas abaixo para que o usuário escolha.

  printf ("\nCom essa calculadora é possível determinar, por meio das funções trigonométricas, quaisquer valores do círculo trigonométrico, tanto em graus como em radianos");
  
  printf ("\nEscolha se deseja calcular em radiano ou graus: ");

  printf ("\n 1-Graus");

  printf ("\n 2-Radianos");
  

  printf("\n\nOpcao.: "); // Nesta linha será exibida a opção de digitar o número da opção da qual o usuário deseja obter o cálculo.
  scanf("%d", &op);
  
  //===========Após a escolha do usuário, se iniciação os processos para resolução============= 
  
  switch(op){
  
  case 1:
  mostrarOPgraus();
  break;

  case 2:
  mostrarOPradianos();
  break;



  default:
  break;
  }
 if (op==2){
  printf("\n\nOpcao.: "); // Nesta linha será exibida a opção de digitar o número da opção da qual o usuário deseja obter o cálculo.
  scanf("%d", &op2);
 
  switch (op2){
   
  // Para void Seno(), teremos o caso 1 a ser resolvido.   
    case 1:
      senoR();
      break; 
  // Break para parar o código. 
   
  // Para void Cosseno(), teremos o caso 2 rodando a resolução.
    case 2:
      cossenoR();
      break;
  // Break para impedir o código de continuar infinitamente.
   
   
  // Para void Tangente(), o caso 3 entrará em ação.
    case 3:
      tangenteR();   
      break;
  // Break novamente para cessar o funcionamento da função.
    
  // Para void Tangente(), o caso 4 entrará em ação.
    case 4:
      SecanteR();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para void Cossecante(), o caso 5 entrará em ação.
    case 5:
      CossecanteR();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para void Cotangente(), o caso 6 entrará em ação.
    case 6:
      CotangenteR ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcSen(), o caso 7 entrará em ação.
    case 7:
      arcSenR();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCos(), o caso 8 entrará em ação.
    case 8:
      arccosR ();
      break;
  // Break novamente para cessar o funcionamento da função. 

  // Para ArcTg(), o caso 9 entrará em ação.
    case 9:
      arcTgR ();
      break;
  // Break novamente para cessar o funcionamento da função.  
    
  // Para ArcSec(), o caso 7 entrará em ação.
    case 10:
      arcsec ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCossec(), o caso 11 entrará em ação.
    case 11:
      arccossecante ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCotang(), o caso 12 entrará em ação.
    case 12:
      arccotangente ();
      break;
  // Break novamente para cessar o funcionamento da função.
     
  // Caso seja digitada alguma opção que não existe no Menu, a seguinte mensagem será exibida. 
    default:  
      printf("\nErro! Opção inexistente.\n");   
      break;
  }
  } else if (op==1){
    printf("\n\nOpcao.: "); // Nesta linha será exibida a opção de digitar o número da opção da qual o usuário deseja obter o cálculo.
    scanf("%d", &op2);
 
  switch (op2){
   
  // Para void Seno(), teremos o caso 1 a ser resolvido.   
    case 1:
      Seno();
      break; 
  // Break para parar o código. 
   
  // Para void Cosseno(), teremos o caso 2 rodando a resolução.
    case 2:
      Cosseno();
      break;
  // Break para impedir o código de continuar infinitamente.
   
   
  // Para void Tangente(), o caso 3 entrará em ação.
    case 3:
     Tangente();   
      break;
  // Break novamente para cessar o funcionamento da função.
    
  // Para void Tangente(), o caso 4 entrará em ação.
    case 4:
      Secante();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para void Cossecante(), o caso 5 entrará em ação.
    case 5:
      Cossecante();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para void Cotangente(), o caso 6 entrará em ação.
    case 6:
     Cotangente ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcSen(), o caso 7 entrará em ação.
    case 7:
      ArcSen();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCos(), o caso 8 entrará em ação.
    case 8:
      ArcCos ();
      break;
  // Break novamente para cessar o funcionamento da função. 

  // Para ArcTg(), o caso 9 entrará em ação.
    case 9:
      ArcTg ();
      break;
  // Break novamente para cessar o funcionamento da função.  
    
  // Para ArcSec(), o caso 7 entrará em ação.
    case 10:
    ArcSec ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCossec(), o caso 11 entrará em ação.
    case 11:
      ArcCossec ();
      break;
  // Break novamente para cessar o funcionamento da função.

  // Para ArcCotang(), o caso 12 entrará em ação.
    case 12:
      ArcCotang ();
      break;
  // Break novamente para cessar o funcionamento da função.
     
  // Caso seja digitada alguma opção que não existe no Menu, a seguinte mensagem será exibida. 
    default:  
      printf("\nErro! Opção inexistente.\n");   
      break;
  } 
  }
  return(0);

}
/*

===================================== CASOS TESTES ======================================================================


void FcossecR() {
    double FcossecR;
    printf("\nDigite o ângulo em radianos: ");
    scanf("%f", &radiano);
    angulo = radiano*180/PI;
    FcossecR = 1/sin(angulo*PI/180);
    // Calculando a cossecante do ângulo.
  
    // Logo após os cálculos, o resultado é exibido.
    printf("\nA cossecante de %f rad's = %f\n", radiano, FcossecR);}*/


