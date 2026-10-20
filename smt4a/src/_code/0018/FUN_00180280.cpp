#include "common.h"

extern "C" {

typedef struct TexTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 **entries;
} TexTable;

void FUN_0019b770(u8 *entry, u32 arg, TexTable *table, s32 flag);
TexTable *asdTMTexTableCallFileC(void);

/* Looks up the entry for `id % 1000` (0x14 bytes each) in the texture table and passes it to FUN_0019b770. */
void FUN_00180280(u32 unused, s32 id, u32 arg)
{
    TexTable *table;

    table = asdTMTexTableCallFileC();
    FUN_0019b770(*table->entries + (id % 1000) * 0x14, arg, table, 0);
}

} /* extern "C" */
