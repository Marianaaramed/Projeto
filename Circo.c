#include <stdio.h>
#include <stdlib.h>

/// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_menu_artista(void);
void tela_cadastrar_artista(void);
void tela_consultar_artista(void);
void tela_alterar_artista(void);
void tela_excluir_artista(void);


/// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_menu_artista();
    tela_cadastrar_artista();
    tela_consultar_artista();
    tela_alterar_artista();
    tela_excluir_artista();
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
    printf("///            1. Módulo Artista                                            ///\n");
    printf("///            2. Módulo Espetáculo                                         ///\n");
    printf("///            3. Módulo Venda de Ingresso                                  ///\n");
    printf("///            4. Módulo Relatórios                                         ///\n");
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


void tela_menu_artista(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = =  Menu Artista = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar um novo artista                                 ///\n");
    printf("///            2. Pesquisar os dados de um artista                          ///\n");
    printf("///            3. Atualizar o cadastro de um artista                        ///\n");
    printf("///            4. Excluir um artista do sistema                             ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_cadastrar_artista(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Cadastrar Artista = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            ID (apenas números):                                         ///\n");
    printf("///            Nome completo:                                               ///\n");
    printf("///            E-mail:                                                      ///\n");
    printf("///            Celular (apenas números):                                   ///\n");
    printf("///            Cargo:                                                       ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_consultar_artista(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Pesquisar Artista = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o ID (apenas números):                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_excluir_artista(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Excluir Artista = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o ID (apenas números):                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
