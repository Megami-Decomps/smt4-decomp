/* NON_MATCHING: 2 lines: armcc moves the index into r1 (`mov r1, r0`) above the -1 test, retail after it. Compiled in a
 * multifile run with packageKindToRecordKind (retail keeps r2/r3 across the call, as packageFileDisableByKindName does): 14 lines alone. */
#include "shard/W5_W5Match2_LocatedRecord.h"
#include "addon/aocMain.h"
extern "C" {
LocatedRecord *packageFindFileRefByName(void *owner, s32 index, u32 name);

/* Find a record by group and name and read its signed value, returning zero when absent. */
s32 recordPrepareLinkedOwner(void *owner, u32 id, u32 name)
{
    s32 index = packageKindToRecordKind(id);
    if (index == -1) {
        return 0;
    }
    LocatedRecord *record = packageFindFileRefByName(owner, index, name);
    return record != NULL ? record->value : 0;
}
}
