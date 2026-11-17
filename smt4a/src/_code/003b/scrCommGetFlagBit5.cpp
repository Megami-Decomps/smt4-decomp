#include "shard/Shard003B.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0x3F and shifted right by 5. */
u32 scrCommGetFlagBit5(void)
{
    NkmEnemyRecordA *rec = nkmEnemyFindById((u16)scrGetArg(0));

    scrSetResult((rec->flags & 0x3F) >> 5);
    return 1;
}

} /* extern "C" */
