#include "shard/Shard0033.h"

extern "C" {

extern void asdMemFree(void *ptr);

/* Frees the node chain, the buffer and the list itself. */
void nodeListFree(NodeList *list)
{
    Node40 *node = list->head;
    Node40 *next;

    while (node != NULL) {
        next = node->next;
        asdMemFree(node);
        node = next;
    }
    if (list->buffer != NULL) {
        asdMemFree(list->buffer);
    }
    asdMemFree(list);
}

} /* extern "C" */
