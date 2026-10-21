#include "common.h"

struct ListEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s8 id;
    /* 0x05 */ u8 unk05[7];
    /* 0x0c */ ListEntry *next;
};
struct EntryList { u8 unk00[8]; ListEntry *head; };
/* Counts entries with the requested identifier. */
extern "C" u32 FUN_00344f2c(const EntryList *list, s32 id)
{
    u32 count = 0;
    for (ListEntry *entry = list->head; entry; entry = entry->next) {
        if (entry->id == id)
            ++count;
    }
    return count;
}
