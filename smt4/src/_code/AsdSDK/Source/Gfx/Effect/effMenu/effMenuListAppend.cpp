#include "util/EffMenuListAppend.h"

extern "C" {

extern EffMenuLists g_effMenuHandles;

/* Appends `node` to menu node list `list`. */
void effMenuListAppend(EffMenuNode *node, s32 list)
{
    EffMenuLists *lists = &g_effMenuHandles;
    EffMenuNode **tail = lists->tail;

    if (lists->head[list] == NULL) {
        lists->head[list] = node;
    } else {
        tail[list]->next = node;
    }
    tail[list] = node;
    node->next = NULL;
}

} /* extern "C" */
