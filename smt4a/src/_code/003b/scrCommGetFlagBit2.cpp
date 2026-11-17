#include "shard/Shard003B.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0x7 and shifted right by 2. */
u32 scrCommGetFlagBit2(void)
{
    u16 id = scrGetArg(0);
    Table00RecordA *rec = dataTable00FindById(id);

    scrSetResult((rec->flags & 0x7) >> 2);
    return 1;
}

} /* extern "C" */
