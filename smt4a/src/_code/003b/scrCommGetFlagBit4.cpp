#include "shard/Shard003B.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0x1f and shifted right by 4. */
u32 scrCommGetFlagBit4(void)
{
    u16 id = scrGetArg(0);
    NkmEnemyRecordA *rec = nkmEnemyFindById(id);

    scrSetResult((rec->flags & 0x1f) >> 4);
    return 1;
}

} /* extern "C" */
