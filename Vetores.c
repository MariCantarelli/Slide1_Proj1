//Declaração
int a[5]; //a[0], a[1], a[2] ... a[4]
float b[100]; //b[0], b[1] ... b[100]
double c[345]; //c[0], c[1] ... c[345]
char nome[50]; //string

//Atribição
a[5] = a[0];
b[5] = b[2];
c[i] = c[j];

//Zerar o vetor 
for (i = 0; i < 10; i++){
    a[i] = 0;
}

//Zerar o vetor(outro jeito)
i = 0;
while (i < 10){
    a[i++] = 0;
}

//Leitura pela entrada padrão 
scanf("%d", &a[10]);

//Declaração e inicialização 
int a[5] = {40, 5, 14, 1, 4}; 

//Passagem de parámetros 
void zera_vetor(int v[], int n){
    int i;
    for (i = 0; i < n; i++){
        v[i] = 0;
    }
} 

//Mostrar todos os elementos do vetor 
void mostra_vetor (int v[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", v[i]); 
    }
    
}

