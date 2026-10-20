#include "shard/Shard0036.h"

extern "C" {

extern void FUN_002d23f0(u32 handle);

extern RecHolder *g_mapIf;

/* Fires FUN_002d23f0 for every active type-3 record of the table. */
void recTableFireType3(void)
{
    RecHolder *table = g_mapIf;
    s32 i;

    for (i = 0; i < 0x80; i++) {
        Rec194 *rec = &table->recs[i];

        if (rec->active != 0 && rec->type == 3) {
            FUN_002d23f0(rec->handle);
        }
    }
}

} /* extern "C" */
