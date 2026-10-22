#include "common.h"

struct ListEntry48816c {
    /* 0x0 */ s16 enabled;
    /* 0x2 */ s16 id;
};

struct List48816c {
    /* 0x00000 */ u8 unk00000[0x64];
    /* 0x00064 */ s8 current;
    /* 0x00065 */ u8 unk00065[0x204C3];
    /* 0x20528 */ ListEntry48816c entries[32];
    /* 0x205A8 */ s32 count;
};

extern "C" {

// Return the ID of the entry before (direction 1) or after (direction -1) the current one, or 0.
s32 listGetAdjacentEntryId(List48816c *list, s32 direction)
{
    for (s32 i = 0; i < list->count; i++) {
        if (list->entries[i].enabled != 0 && list->entries[i].id == list->current) {
            if (direction == 1) {
                if (i - 1 < 0) {
                    return 0;
                }
                return list->entries[i - 1].id;
            }
            if (direction == -1) {
                if (i + 1 >= list->count) {
                    return 0;
                }
                return list->entries[i + 1].id;
            }
        }
    }
    return 0;
}

} /* extern "C" */
