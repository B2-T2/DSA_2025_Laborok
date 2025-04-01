//
// Created by Balazs Tamas on 2025. 03. 25..
//

#ifndef SIMPLE_QUEUE_H
#define SIMPLE_QUEUE_H

typedef struct {
    int capacity; ///< A sor maximális kapacitása
    int front; ///< Az első elem indexe
    int rear; ///< Az utolsó elem indexe
    char **elements; ///< A sor elemeinek tárolására szolgáló tömb (karakterláncok)
    } Simple_Queue_t;
/**
* Létrehozza és inicializálja a sort a megadott kapacitással.
* Memóriát foglal az elemek tárolására.
*
* @param capacity A sor maximális kapacitása.
* @param queue A sor, amelyet inicializálunk.
*/
void createQueue(int capacity, Simple_Queue_t *queue);
/**
* Felszabadítja a sor által foglalt memóriát.
*
* @param queue A sor, amelyet megsemmisítünk.
*/
void destroyQueue(Simple_Queue_t *queue);
/**
* Ellenőrzi, hogy a sor megtelt-e.
*
* @param queue A vizsgált sor.
* @return true, ha a sor tele van, egyébként false.
*/
bool isFull(Simple_Queue_t queue);
/**
* Ellenőrzi, hogy a sor üres-e.
*
* @param queue A vizsgált sor.
* @return true, ha a sor üres, egyébként false.
*/
bool isEmpty(Simple_Queue_t queue);
/**
* Új elemet ad a sor végéhez, ha nincs tele.
*
* @param queue A sor, amelybe az elemet beszúrjuk.
* @param item A beszúrandó karakterlánc.
*/
void enqueue(Simple_Queue_t *queue, const char *item);
/**
* Eltávolítja és visszaadja a sor elején lévő elemet.
*
* @param queue A sor, amelyből az első elemet eltávolítjuk.
* @return A kiszolgált karakterlánc, vagy NULL, ha a sor üres.
*/
char *dequeue(Simple_Queue_t *queue);
/**
* Kiírja a sor aktuális elemeit.
*
* @param queue A kiírandó sor.
*/
void display(Simple_Queue_t queue);
/**
* Lekéri a sor elején lévő elemet anélkül, hogy eltávolítaná azt.
* @param queue A vizsgált sor.
* @return Az első elem karakterlánca, vagy NULL, ha a sor üres.
*/
char *peek(Simple_Queue_t queue);

#endif //SIMPLE_QUEUE_H
