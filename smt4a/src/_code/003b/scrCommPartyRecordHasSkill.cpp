#include "shard/W5_W5Match2_PairedIds.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 scrSetResult(s32 value);
const PairedIdList *FUN_003e4fdc(u32 id);
s32 recordContainsPairedId(const PairedIdList *record, u32 id);

u32 scrCommPartyRecordHasSkill(void)
{
    s32 recordId = scrGetArg(0);
    u32 skill = scrGetArg(1);
    const PairedIdList *record = FUN_003e4fdc((u16)recordId);
    if (record != NULL && skill != 0) {
        scrSetResult(recordContainsPairedId(record, skill) != 0);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
