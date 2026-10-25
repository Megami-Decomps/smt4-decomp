#include "shard/W6_W6Match5_RecordCallParameters.h"

extern "C" {

typedef struct TexTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 **entries;
} TexTable;

void FUN_0019b770(u8 *entry, RecordCallParameters *parameters, TexTable *table, s32 flag);
TexTable *asdTMTexTableCallFileC(u32 table, s32 id);

/* Looks up the entry for `id % 1000` (0x14 bytes each) in the texture table and passes it to FUN_0019b770. */
void FUN_00180280(u32 tableId, s32 id, RecordCallParameters *parameters)
{
    TexTable *table;

    table = asdTMTexTableCallFileC(tableId, id);
    FUN_0019b770(*table->entries + (id % 1000) * 0x14, parameters, table, 0);
}

} /* extern "C" */
