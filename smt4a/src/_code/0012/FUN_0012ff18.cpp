/* NON_MATCHING: retail jumps to a bottom test and keeps the node in r0 until the first call; built pre-tests the head into r4. */
#include "common.h"

extern "C" {

/* Singly linked node; the word at 8 is a separately allocated payload. */
typedef struct Node {
    struct Node *next;  /* 0x00 */
    u8 unk04[4];
    void *payload;      /* 0x08 */
} Node;

typedef struct {
    Node *head;         /* 0x00 */
} NodeList;

int asdOperatorDeleteArray(void *block);

/* Frees every node of the list and its payload. */
void FUN_0012ff18(NodeList *list)
{
    Node *node;

    while ((node = list->head) != NULL) {
        list->head = node->next;
        asdOperatorDeleteArray(node->payload);
        asdOperatorDeleteArray(node);
    }
}

} /* extern "C" */
