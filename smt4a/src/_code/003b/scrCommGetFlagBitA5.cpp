#include "shard/Shard003B.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is bit 1 of the record's byte at +0xA5 (mask 3, shifted right by 1). */
u32 scrCommGetFlagBitA5(void)
{
    u16 id = scrGetArg(0);
    Table00RecordA *rec = dataTable00FindById(id);

    scrSetResult((rec->scriptFlags & 3) >> 1);
    return 1;
}

} /* extern "C" */
