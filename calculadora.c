#include <stdio.h>
#include <math.h>

//definindo PI como 3.14159265.

#define PI 3.14159265

float angulo, sen, coss, tg;

//===================== FUNÇÕES E CÁLCULOS============================================

// Utilizando void Seno para criar a função que deverá calcular o seno do ângulo determinado pelo usuário.
void Seno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo); 
  sen = sin(angulo*PI/180); // Cálculo de seno utilizando o comando sin().

  //Exibindo o resultado do cálculo de seno.
  printf("\nO seno de %f = %f\n", angulo, sen); 
   
}

// void para criar a função que calculará o coseno do ângulo determinado pelo usuário.
void Cosseno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  coss = cos(angulo*PI/180); // Calculando o coseno do ângulo.
  
  // Logo após os cálculos, o resultado é exibido.
  printf("\nO cosseno de %f = %f\n", angulo, coss);
   
}
// Função Tangente.
void Tangente() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  
  // Cálculos tangente.
  tg = tan(angulo*PI/180); 
  
  // Exibindo o Resultado.
  printf("\nA tangente de %f = %f\n", angulo, tg);
   
}

//============================ MENU ==============================
//Abaixo o Menu de escolha que o usuário irá ver e selecionar a função que deseja ser calculada, e depois determinará o ângulo.

int main() {
  int op;
  // Cabeçalho do Menu.
  printf("\n============== TRIGONOMETRIA CALCULO ==============\n");   

  printf("\nMenu:\n"); // as opções serão listadas abaixo para que o usuário escolha.

  printf("\n 1-Seno"); // Escolher a opção 1, irá remeter à void Seno(). 

  printf("\n 2-Cosseno"); // Opção 2, irá remeter à void Cosseno().

  printf("\n 3-Tangente"); // Opção 3, remete à void Tangente().

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
     
     // Caso seja digitada alguma opção que não existe no Menu, a seguinte mensagem será exibida. 
    default:  
      printf("\nErro! Opcao inexistente.\n");   
      break;
      
  }
 
  return(0);

}
