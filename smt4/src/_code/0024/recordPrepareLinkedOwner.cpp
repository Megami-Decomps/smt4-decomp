/* NON_MATCHING: only the position of `mov r1, r0` (retail after the -1 test) differs. */
#include "shard/W5_W5Match2_LocatedRecord.h"
extern "C" {
s32 FUN_002a6f48(s32 kind);
LocatedRecord *packageFindFileRefByName(void *owner,s32 index,s32 id);
/* Find a record by ID and read its signed value, returning zero when absent. */
s32 recordPrepareLinkedOwner(void *owner, s32 id, s32 name)
{
    s32 index = FUN_002a6f48(id);
    if (index == -1) {
        return 0;
    }
    LocatedRecord *record = packageFindFileRefByName(owner, index, name);
    return record != NULL ? record->value : 0;
}
}
