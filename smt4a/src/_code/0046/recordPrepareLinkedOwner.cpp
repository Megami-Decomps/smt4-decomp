/* NON_MATCHING: everything matches (three-argument callee, multifile owner in r3) except armcc hoists `mov r1, r0` above the moveq/beq; retail moves it after the branch. */
#include "shard/W5_W5Match2_LocatedRecord.h"
extern "C" {
unsigned int FUN_001b3214(int id);
LocatedRecord *packageFindFileRefByName(void *owner, s32 index, u32 name);

/* Find a record by group and name and read its signed value, returning zero when absent. */
s32 recordPrepareLinkedOwner(void *owner, u32 id, u32 name)
{
    s32 index = FUN_001b3214(id);
    if (index != -1) {
        LocatedRecord *record = packageFindFileRefByName(owner, index, name);
        return record != NULL ? record->value : 0;
    }
    return 0;
}
}
