/* NON_MATCHING: compiler unrolls the two-byte flag union to four bytes; clear/source register allocation differs. */
#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ContentWordList.h"

extern "C" {
UnitRecord *slotRecordFindById(u32 id);
void unitRecordBuild(u32 id, UnitRecord *record);
void FUN_0035ad50(u32 id, UnitRecord *record);
void FUN_004bcd90(UnitRecord *record);

// Union inherited flags from the twelve selected saved or template unit records.
void FUN_004da5c4(u32, const ContentWordList *sources, UnitRecord *destination)
{
    u32 *flags = reinterpret_cast<u32 *>(destination->inheritance.flags);
    for (u32 index = 0; index < 16; ++index) {
        flags[index] = 0;
    }
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
            for (s32 byte = 0; byte < 0x40; byte += 2) {
                destination->inheritance.flags[byte] |= record->inheritance.flags[byte];
                destination->inheritance.flags[byte + 1] = record->inheritance.flags[byte + 1] |
                    destination->inheritance.flags[byte + 1];
            }
        }
    }
    FUN_004bcd90(destination);
}
}
