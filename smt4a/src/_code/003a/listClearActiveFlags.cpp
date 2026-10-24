#include "common.h"

/* One 0x40-byte entry of a list; only its first (active) flag is named. */
struct ListFlagEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x3F];
};

/* An owner with an entry count at +0x4850 and the entries from +0x4870. */
struct ListFlagOwner {
    /* 0x0000 */ u8 unk0000[0x4850];
    /* 0x4850 */ s32 count;
    /* 0x4854 */ u8 unk4854[0x1C];
    /* 0x4870 */ ListFlagEntry entries[1];
};

extern "C" {

/* Clears the active flag of every entry. */
void listClearActiveFlags(ListFlagOwner *owner)
{
    for (s32 i = 0; i < owner->count; i++) {
        owner->entries[i].active = 0;
    }
}

} /* extern "C" */
