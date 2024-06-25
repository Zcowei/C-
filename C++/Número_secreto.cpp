#include <iostream> // Inclui a biblioteca padrão de entrada e saída em C++, necessária para 
#include <cstdlib> // Inclui a biblioteca padrão C, que permite o uso da função rand() para geração de números aleatórios.

using namespace std; // Permite o uso direto das funções e objetivos do nomespace std, como cout e cin, sem precisar prefixar com std::.

int main() // Função principal onde a execução do programa começa.
{
    /*Gera um número secreto aleatório entre 1 e 100.
    rand() % 100 gera um número entre 0 e 90. adicionando 1, temos o intervalo de 1 a 100 */
    int numeroSecreto = rand() % 100 + 1;
    
    int tentativas = 8; // Define o número máximo de tentativas que o usuário tem para adivinhar o número.
    int palpite;        // Declara uma variável para armezenar o palpite do usuário.
    
    do   //Início de um loop do-while que continuará executando enquanto a condição do while for verdadeira.
    {
        //Exibe o número da tentativa atual e solicita au usuário que insira um número.
        cout << " Tentativa " << tentativas << ", digite um número:";
        
        cin >> palpite; // Lê o palpite do usuário e armazena na variável palpite.
        
        if (palpite < numeroSecreto) // Verifica se o palpite do usuário é menor que o número secreto.
        {
            cout << "Muito baixo!" << endl; //Informa ao usuário que o palpite é muito baixo.
        }    
            else if (palpite > numeroSecreto) // Verifica se o palpite do usuário é menor que o número secreto.
        {    
            cout << "Muito alto!" << endl; // Informa ao usuário que o palpite é muito alto.
        }    
            tentativas--; // decrementa o número de tentativas restantes.
        } while (palpite != numeroSecreto && tentativas > 0); // continua o loop enquanto o palpite não for o número secreto e houver tentativas restantes.
        
        if (palpite == numeroSecreto) // Após sair do loop, verifica se o usuário adivinhou o número secreto.
   {
            /*Informa ao usuário que ele acertou o número secreto e mostra quantas tentativas foram usadas
            Note que a variável tentativas aqui reflete as tentativas restante. Para mostrar quants tentativas foram usadas, usamos 8 - tentativas.*/
       cout << "Parabéns! Você acertou o número com " << 8 - tentativas << " tentativa(s)!" << endl;
   }
    else
    {
        // Informa ao usuário que ele não conseguiu adivinhar o número e revela qual era o número secreto.
        cout << "Você não conseguiu adivinhar o número. O número secreto era " << numeroSecreto << "!" << endl;
    }
    return 0; // Retorna 0 indicando que o programa terminou com sucesso.
}