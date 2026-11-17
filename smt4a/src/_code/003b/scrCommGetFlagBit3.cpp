#include "shard/Shard003B.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0xf and shifted right by 3. */
u32 scrCommGetFlagBit3(void)
{
    u16 id = scrGetArg(0);
    NkmEnemyRecordA *rec = nkmEnemyFindById(id);

    scrSetResult((rec->flags & 0xf) >> 3);
    return 1;
}

} /* extern "C" */
