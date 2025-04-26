#include <iostream>
using namespace std;

float calculo(float n1, float n2, float n3){
    float media = (n1 + n2 + n3) / 3;
    return media;
}

int main() {

    string nome[5];
    float notas[5][3];
    float media[5];
    int i = 0; 
    while (i < 5) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome[i];
        int j = 0;
        while (j < 3) {
            cout << "Digite a nota " << j + 1 << " do aluno " << nome[i] << ": ";
            cin >> notas[i][j];
            j++;
        }
        media[i] = calculo(notas[i][0], notas[i][1], notas[i][2]);
        i++;

    }
    
    cout << "\nALUNO\tN1\tN2\tN3\tMEDIA\tSITUACAO\n";
    i = 0;
    while (i < 5) {
        cout << nome [i] <<"\t";
        int j = 0;
        while (j < 3) {
            cout << notas[i][j] << "\t";
            j++;
        }
        cout << media[i] << "\t";
        if (media[i] >= 6) {
            cout << "Aprovado\n";
        } else if (media[i] >= 5) {
            cout << "Recuperacao\n";
        } else {
            cout << "Reprovado\n";
        }
        cout << endl;
        i++;
    }

    float media_maior = media[0];
    int indice_maior = i;
    i = 1;
    while (i < 5){
        if (media[i] > media_maior) {
            media_maior = media[i];
            indice_maior = i;
        }
        i++;
    }
    
    cout << "\nAluno com maior media: " << nome[indice_maior] 
         << " com media " << media_maior << endl;

    return 0;
}
