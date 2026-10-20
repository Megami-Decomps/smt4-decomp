#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 *items;
} Table;

/* Returns item `index` of the table `(*ref)->items`. */
u32 tableOwnerGetEntry(Table **ref, s32 index)
{
    return (*ref)->items[index];
}

} /* extern "C" */
