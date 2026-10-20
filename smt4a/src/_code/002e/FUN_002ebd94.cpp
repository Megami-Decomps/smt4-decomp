#include "common.h"

extern "C" {

typedef struct ByteArray {
    /* 0x00 */ u8 *data;
} ByteArray;

typedef struct FlagTable {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ ByteArray *flags;
} FlagTable;

s32 FUN_002ebd34(void);

/* Clears the flag byte whose index FUN_002ebd34 returns. */
void FUN_002ebd94(FlagTable *table)
{
    s32 index = FUN_002ebd34();
    table->flags->data[index] = 0;
}

} /* extern "C" */
