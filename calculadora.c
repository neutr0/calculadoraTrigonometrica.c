#include <stdio.h>
#include <math.h>

//definindo PI como 3.14159265.

#define PI 3.14159265

float angulo, sen, coss, tg, sec, cossec, cotg, arcsen, arcocos, arctg, arcsec, arccossec, arcctg;

//===================== FUNÇÕES E CÁLCULOS============================================

// Utilizando void Seno para criar a função que deverá calcular o seno do ângulo determinado pelo usuário.
void Seno() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo); 
  sen = sin(angulo*PI/180); // Cálculo de seno utilizando o comando sin().

  //Exibindo o resultado do cálculo de seno.
  printf("\nO seno de %f = %f\n", angulo, sen); 
   
}

// void para criar a função que calculará o coseno do ângulo determinado pelo usuário.
void Cosseno() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  coss = cos(angulo*PI/180); // Calculando o coseno do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nO cosseno de %f = %f\n", angulo, coss);
   
}
// Função Tangente.
void Tangente() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  
  // Cálculos tangente.
  tg = tan(angulo*PI/180); 
  
  // Exibindo o Resultado.
  printf("\nA tangente de %f = %f\n", angulo, tg);
   
} void Secante() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  sec = 1/cos(angulo*PI/180); // Calculando a secante do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA secante de %f = %f\n", angulo, sec);

} void Cossecante() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  cossec = 1/sin(angulo*PI/180); // Calculando a cossecante do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA cossecante de %f = %f\n", angulo, cossec);

} void Cotangente() {
  printf("\nDigite o ângulo em graus: ");
  scanf("%f", &angulo);
  cotg = 1/sen(angulo*PI/180)/cos(angulo*PI); // Calculando a cotangente do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nA cotangente de %f = %f\n", angulo, cotg);


//============================ MENU ==============================
//Abaixo o Menu de escolha que o usuário irá ver e selecionar a função que deseja ser calculada, e depois determinará o ângulo.

int main() {
  int op;
  // Cabeçalho do Menu.
  printf("\n============== TRIGONOMETRIA CÁLCULO ==============\n");   
  
  printf ("Seja bem-vindo (a) a calculadora de funções trigonométricas");
  
  printf("\nMenu:\n"); // as opções serão listadas abaixo para que o usuário escolha.

  printf("\n 1-Seno"); // Escolher a opção 1, irá remeter à void Seno(). 

  printf("\n 2-Cosseno"); // Opção 2, irá remeter à void Cosseno().

  printf("\n 3-Tangente"); // Opção 3, remete à void Tangente().
  
  printf("\n 4-Secante");

  printf("\n 5-Cossecante");

  printf("\n 6-Cotangente");

  printf("\n 7-Arco Seno");

  printf("\n 8-Arco Cosseno");

  printf("\n 9-Arco Tangente");

  printf("\n 10-Arco Secante");

  printf("\n 11-Arco Cossecante");

  printf("\n 12-Arco Cotangente");
  

  printf("\n\nOpcao.: "); // Nesta linha será exibida a opção de digitar o número da opção da qual o usuário deseja obter o cálculo.
  scanf("%d", &op);

  //===========Após a escolha do usuário, se iniciação os processos para resolução============= 
  
  switch(op) {
    
  // Para void Seno(), teremos o caso 1 a ser resolvido.   
    case 1:
      Seno();
      break; // Break para parar o código. 
   
   // Para void Cosseno(), teremos o caso 2 rodando a resolução.
    case 2:
      Cosseno();
      break; // Break para impedir o código de continuar infinitamente.
   
   // Para void Tangente(), o caso 3 entrará em ação.
    case 3:
      Tangente();   
      break; // Break novamente para cessar o funcionamento da função.
    case 4:
      Secante();
      break;
    case 5:
      Cossecante();
      break;
    case 6:
      Cotangente ();
      break;
/*
    case 7:
      ArcSeno ();
      break;
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
    */
    
    
     
     // Caso seja digitada alguma opção que não existe no Menu, a seguinte mensagem será exibida. 
    default:  
      printf("\nErro! Opção inexistente.\n");   
      break;
      
  }
 
  return(0);

}
