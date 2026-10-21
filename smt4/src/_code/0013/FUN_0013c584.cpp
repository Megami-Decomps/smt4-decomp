/* NON_MATCHING: temporaries after the rt_memclr call land in r0/r1 where retail uses r1/r2. */
#include "shard/W6_W6Match3_AppletMessageConfig.h"

extern "C" {


int wordTripleClear(u8 *sub);
int rt_memclr(u8 *buffer, int size);
int memClear(u8 *buffer, int size);

/* Resets the record to its initial state: tables cleared, index = -1. */
void FUN_0013c584(AppletMessageConfig *record)
{
    record->unk00 = 0;
    record->unk04 = 0;
    record->unk08 = 0;
    record->unk0a = 0;
    memClear(record->table, 0xed8);
    record->enabled = 1;
    record->unkEE5 = 0;
    record->unkEE6 = 0;
    rt_memclr(record->buffer, 0x89);
    record->index = -1;
    record->unkF74 = 0;
    wordTripleClear(record->sub);
}

} /* extern "C" */
