#include "common.h"

extern "C" {

u32 FUN_002ebd34(void);

typedef struct ByteArray {
    /* 0x00 */ u8 *data;
} ByteArray;

typedef struct FlagTable {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ ByteArray *flags;
} FlagTable;

/* Sets the flag byte whose index FUN_002ebd34 returns. */
void FUN_00105748(FlagTable *table)
{
    u32 index = FUN_002ebd34();
    table->flags->data[index] = 1;
}

} /* extern "C" */
