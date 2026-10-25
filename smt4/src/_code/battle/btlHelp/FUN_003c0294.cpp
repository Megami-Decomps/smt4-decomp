/* NON_MATCHING: Unlinking keeps the list owner in r0 and moves the entry into the free argument only after updating the links. */
#include "common.h"
#include "shard/dialogIsActive.h"

struct BtlHelpEntry {
    /* 0x000 */ u16 unk000;
    /* 0x002 */ u16 kind;
    /* 0x004 */ u8 unk004[0x29E];
    /* 0x2A2 */ s16 unk2A2;
    /* 0x2A4 */ BtlHelpEntry *prev;
    /* 0x2A8 */ BtlHelpEntry *next;
};
struct BtlHelpEntryList {
    /* 0x00 */ BtlHelpEntry *tail;
    /* 0x04 */ BtlHelpEntry *head;
    /* 0x08 */ u32 count;
};
extern "C" {
extern BtlHelpEntryList *DAT_00435d78;
void infoWinStartTimer(u32 value);
void asdMemFree(void *allocation);

/* Clears the help entry list, notifying the active information window when required. */
void FUN_003c0294(void)
{
    BtlHelpEntry *entry = DAT_00435d78->tail;
    while (entry != NULL) {
        BtlHelpEntry *previous = entry->prev;
        if (entry->unk2A2 >= 0 && entry->kind == 1 && dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        BtlHelpEntryList *list = DAT_00435d78;
        if (entry->next == NULL) {
            list->tail = entry->prev;
        } else {
            entry->next->prev = entry->prev;
        }
        if (entry->prev == NULL) {
            list->head = entry->next;
        } else {
            entry->prev->next = entry->next;
        }
        --list->count;
        asdMemFree(entry);
        entry = previous;
    }
}
}
