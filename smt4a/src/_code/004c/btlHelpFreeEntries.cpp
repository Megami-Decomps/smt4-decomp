#include "battle/btlHelp.h"

extern "C" {

void asdMemFree(void *ptr);
void dialogClose(s32 immediate);
s32 dialogIsActive(void);

extern BtlHelpListA *g_btlHelp;

/* Unlinks a help entry from the help list. */
static __inline BtlHelpEntryA *btlHelpListRemove(BtlHelpListA *list, BtlHelpEntryA *entry)
{
    if (entry->prev == NULL) {
        list->head = entry->next;
    } else {
        entry->prev->next = entry->next;
    }
    if (entry->next == NULL) {
        list->tail = entry->prev;
    } else {
        entry->next->prev = entry->prev;
    }
    list->count--;
    return entry;
}

/* Frees every help entry, closing the dialog an open message-type entry still shows. */
void btlHelpFreeEntries(void)
{
    BtlHelpEntryA *entry = g_btlHelp->head;
    while (entry != NULL) {
        BtlHelpEntryA *next = entry->next;
        if (entry->dialogIndex >= 0 && entry->kind == 1 && dialogIsActive()) {
            dialogClose(1);
        }
        asdMemFree(btlHelpListRemove(g_btlHelp, entry));
        entry = next;
    }
}

} /* extern "C" */
