#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp; /* 0x5738e8 */
s32 infoWinHasValue(void);

// True when a visible, unlocked help entry with kind 1 has a value set.
u32 FUN_004c8a9c(void)
{
    BtlHelpEntryA *entry = g_btlHelp.list->head;
    while (entry != NULL) {
        BtlHelpEntryA *next = entry->next;
        if (entry->dialogIndex >= 0 && entry->kind == 1 && (entry->flags & 1) == 0 && infoWinHasValue() != 0) {
            return 1;
        }
        entry = next;
    }
    return 0;
}

} /* extern "C" */
