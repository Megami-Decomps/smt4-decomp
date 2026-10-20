#include "common.h"

extern "C" {

typedef struct Node431f04 {
    u8 unk00[4];
    int value;                     /* 0x04 */
    u8 unk08[4];
    struct Node431f04 *next;       /* 0x0C */
} Node431f04;

typedef struct Queue431f04 {
    Node431f04 *first;
} Queue431f04;

typedef struct List431f04 {
    u8 unk00[0x24];
    Queue431f04 queue;             /* 0x24 */
} List431f04;

/* Sums the values of the list's nodes. */
int FUN_00431f0c(List431f04 *list)
{
    Queue431f04 *queue = &list->queue;
    Node431f04 *node;
    int total = 0;

    for (node = queue->first; node != NULL; node = node->next) {
        total += node->value;
    }
    return total;
}

} /* extern "C" */
