typedef struct cliente{
    int codigo;
    char nome[100];
    char empresa[50];
    char departamento[50];
    char telefone[11];
    char celular[11];
    char email[50];
}CLIENTE;

typedef struct elemento* Lista;

Lista *criaLista();

void insere_lista_ordenada(Lista *li);
void relatorioTotal(Lista *li);
void consultaCodigo(Lista *li);
void consultaNome(Lista *li);
