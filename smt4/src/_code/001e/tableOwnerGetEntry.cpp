#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 *entries;
} Table;

u32 tableOwnerGetEntry(Table **owner, s32 index)
{
    return (*owner)->entries[index];
}

} /* extern "C" */
