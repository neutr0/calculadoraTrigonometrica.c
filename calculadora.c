#include <stdio.h>
#include <math.h>

//definindo PI como 3.14159265.

#define PI 3.14159265

float angulo, sen, coss, tg;

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
    }
// void para criar a função que calculará o arco-sec do ângulo determinado pelo usuário.

   void ArcSec() {
    double valor;
     printf("Digite um valor entre -1 e 1: ");
     scanf("%lf", &valor);
    if (-1.0 <= valor && valor <= 1.0) {
        double arco_sec = 1/acos(valor) * (180.0 / PI);
        printf("\nO arco-tangente de %lf é %.2f graus\n", valor, arco_sec);
    } else {
        printf("Valor fora do intervalo [-1, 1]\n");

    } 



//============================ MENU ==============================
//Abaixo o Menu de escolha que o usuário irá ver e selecionar a função que deseja ser calculada, e depois determinará o ângulo.

int main() {
  int op;
  // Cabeçalho do Menu.
  printf("\n============== TRIGONOMETRIA CÁLCULO ==============\n");   
  
  printf ("Seja bem-vindo (a) a calculadora de funções trigonométricas");
  
  printf("\nMenu:\n"); // as opções serão listadas abaixo para que o usuário escolha.

  printf ("Com essa calculadora é possível determinar, por meio das funções trigonométricas, quaisquer valores do círculo trigonométrico, tanto em graus como em radianos");
  
  printf ("Escolha se deseja calcular em radiano ou graus: ");
  
  printf("\n 1-Seno");
  // Opção 3, remete à void Seno().

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
  

  printf("\n\nOpcao.: "); // Nesta linha será exibida a opção de digitar o número da opção da qual o usuário deseja obter o cálculo.
  scanf("%d", &op);

  //===========Após a escolha do usuário, se iniciação os processos para resolução============= 
  
  switch(op) {
    
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
      ArcSeno ();
      break;
  // Break novamente para cessar o funcionamento da função.

    case 8:
      ArcCos ();
      break;
    case 9:
      ArcTg ();
      break;
    case 10:
      ArcSec ();
      break;
    case 11:
      ArcCossec ();
      break;
    case 12;
      ArcCotang ();
      break;
    
    
     
     // Caso seja digitada alguma opção que não existe no Menu, a seguinte mensagem será exibida. 
    default:  
      printf("\nErro! Opção inexistente.\n");   
      break;
      
  }
 
  return(0);

}
