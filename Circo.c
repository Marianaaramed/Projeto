#include <stdio.h>

/// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

/// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    return 0;
}


/// Funções

void tela_principal(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Sistema de Gestão para um Circo                        ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///              = = = Sistema de Gestão pra um Circo = = =                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Cliente                                            ///\n");
    printf("///            2. Módulo Artista                                            ///\n");
    printf("///            3. Módulo Venda de Ingresso                                  ///\n");
    printf("///            4. Módulo Agendamento de Apresentações                       ///\n");
    printf("///            5. Módulo Relatórios                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}


void tela_sobre(void) {
    printf("\n");    
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = Sistema de Gestão para um Circo = = =                  ///\n");
    printf("///                                                                         ///\n");
    printf("///  Um sistema desenvolvido para gerenciar as operações de um circo,       ///\n");
    printf("///  incluindo controle de artistas, bilheteria, agendamento de             ///\n");
    printf("///  apresentações.                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}


void tela_equipe(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///              = = = Sistema de Gestão para um Circo = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto desenvolvido por:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            Mariana Araujo de Medeiros                                   ///\n");
    printf("///            Git: https://github.com/Got7mj/Projeto.git                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
} 
