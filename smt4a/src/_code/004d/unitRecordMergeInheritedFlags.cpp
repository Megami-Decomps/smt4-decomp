#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ContentWordList.h"
#include <string.h>

extern "C" {
UnitRecord *slotRecordFindById(u32 id);
void unitRecordBuild(u32 id, UnitRecord *record);
void FUN_0035ad50(u32 id, UnitRecord *record);
void FUN_004bcd90(UnitRecord *record);

// Union inherited flags from the twelve selected saved or template unit records.
void unitRecordMergeInheritedFlags(u32, const ContentWordList *sources, UnitRecord *destination)
{
    memset(destination->inheritance.flags, 0, sizeof(destination->inheritance.flags));
    UnitRecord temporary;
    const UnitRecord *record = reinterpret_cast<const UnitRecord *>(sources);
    for (s32 index = 0; index < 12; ++index) {
        u16 id = sources->ids[index];
        if (id != 0) {
            u8 kind = sources->unk1a[index];
            if (kind == 1) {
                record = slotRecordFindById(id);
            } else if (kind == 3) {
                FUN_0035ad50(id, &temporary);
                record = &temporary;
            } else if (kind == 2) {
                unitRecordBuild(id, &temporary);
                record = &temporary;
            }
            for (s32 byte = 0; byte < 0x40; ++byte) {
                destination->inheritance.flags[byte] |= record->inheritance.flags[byte];
            }
        }
    }
    FUN_004bcd90(destination);
}
}
