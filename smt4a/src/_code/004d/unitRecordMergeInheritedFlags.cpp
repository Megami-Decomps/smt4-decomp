#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ContentWordList.h"
#include <string.h>
#include "gamedata/SaveSlotRecord.h"

extern "C" {
void unitRecordBuild(u32 id, UnitRecord *record);
void unitRecordBuildFromSave(u32 id, UnitRecord *record);
void unitRecomputeDerivedStats(UnitRecord *record);

// Union inherited flags from the twelve selected saved or template unit records.
void unitRecordMergeInheritedFlags(u32, const ContentWordList *sources, UnitRecord *destination)
{
    memset(destination->inheritedFlags, 0, sizeof(destination->inheritedFlags));
    UnitRecord temporary;
    const UnitRecord *record = reinterpret_cast<const UnitRecord *>(sources);
    for (s32 index = 0; index < 12; ++index) {
        u16 id = sources->ids[index];
        if (id != 0) {
            u8 kind = sources->unk1a[index];
            if (kind == 1) {
                record = slotRecordFindById(id);
            } else if (kind == 3) {
                unitRecordBuildFromSave(id, &temporary);
                record = &temporary;
            } else if (kind == 2) {
                unitRecordBuild(id, &temporary);
                record = &temporary;
            }
            for (s32 byte = 0; byte < 0x40; ++byte) {
                destination->inheritedFlags[byte] |= record->inheritedFlags[byte];
            }
        }
    }
    unitRecomputeDerivedStats(destination);
}
}
