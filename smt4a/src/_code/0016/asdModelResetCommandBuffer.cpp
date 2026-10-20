#include "shard/Block61a470.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern s32 DAT_005b40e0;
extern s32 DAT_005b40e4;

/* Resets the pool: clears its entry records and counters, then publishes its start and end in the two globals. Does nothing when there is no pool or it has neither a range nor entries. */
void asdModelResetCommandBuffer(void)
{
    Pool *pool;

    pool = DAT_0061a470.pool;
    if (pool == NULL) {
        return;
    }
    if (pool->start == 0 && pool->entries == NULL) {
        return;
    }
    sysMemClear(pool->entries, pool->entryCount * 0x1C);
    pool->unk0C = 0;
    pool->unk10 = 0;
    pool->entryCount = 0;
    pool->unk28 = 0;
    pool->unk14 = 0;
    pool->unk24 = 0;
    pool->unk34 = 0;
    pool->unk30 = 0;
    DAT_005b40e0 = pool->start;
    DAT_005b40e4 = DAT_005b40e0 + pool->length;
}

} /* extern "C" */
