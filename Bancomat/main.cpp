#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int prelievo(int saldo);
int versamento(int saldo);
void estrattoConto(int saldo);
void addNode(struct nodomovimenti *node);
struct tm* getdate();

struct movimento{
    int operazione;
    struct tm *data;
};

struct nodomovimenti{
    struct movimento mv;
    struct nodomovimenti *next;
};

struct nodomovimenti *head = NULL;    //nodo iniziale della lista

int main(void) {

    int comand, saldo = 10000;

    while(true){
        printf("Premi 1 per PRELEVARE\n2 per VERSAMENTO\n3 per ESTRATTO CONTO \n4 per uscire\n");
        scanf("%d", &comand);
        if(comand == 4){
            break;      //uscita dal loop
        }
        switch(comand){
            case 1:
                saldo = prelievo(saldo);
                break;
            case 2:
                saldo = versamento(saldo);
                break;
            case 3:
                estrattoConto(saldo);
                break;
        }
    }
    return 0;
}

int prelievo(int saldo){

    int daPrelevare = 0;
    printf("Quanto vuoi prelevare?\n");
    scanf("%d", &daPrelevare);
    if(saldo > daPrelevare){
        saldo = saldo - daPrelevare;
        printf("Prelievo di %d completato!\n", daPrelevare);

        struct nodomovimenti *ptr = (struct nodomovimenti*)malloc(sizeof(struct nodomovimenti));

        ptr->mv.operazione = (daPrelevare * -1);
        ptr->mv.data = getdate();
        ptr->next = NULL;
        if(head == NULL)
            head = ptr;
        else
            addNode(ptr);
    } else{
        printf("Non hai abbastanza soldi per prelevare questa cifra, SALDO = %d\n", saldo);
    }
    return saldo;
}

int versamento(int saldo){

    int daVersare = 0;
    printf("Quanto vuoi versare?\n");
    scanf("%d", &daVersare);
    saldo = saldo + daVersare;

    struct nodomovimenti *ptr = (struct nodomovimenti*)malloc(sizeof(struct nodomovimenti));

    ptr->mv.operazione = daVersare;
    ptr->mv.data = getdate();
    ptr->next = NULL;
    if(head == NULL)
        head = ptr;
    else
        addNode(ptr);
    printf("Versamento di %d completato!\n", daVersare);
    return saldo;
}

void estrattoConto(int saldo){
    struct nodomovimenti *ptr = head;

    while(ptr != NULL)
    {
        printf("\n [%d] in data %s\n",ptr->mv.operazione, asctime (ptr->mv.data));
        ptr = ptr->next;
    }

    printf("SALDO TOTALE= %d\n", saldo);

    return;
}

void addNode(struct nodomovimenti *ptr){
    struct nodomovimenti *index = head;
    while(true){
        if(index->next == NULL){
            index->next = ptr;
            break;
        }else{
            index = index->next;
        }
    }
}

struct tm* getdate(){
    time_t curtime;
    struct tm *loc_time;
    curtime = time (NULL);
    loc_time = localtime (&curtime);
    printf("date= %s",asctime(loc_time));
    return loc_time;
}