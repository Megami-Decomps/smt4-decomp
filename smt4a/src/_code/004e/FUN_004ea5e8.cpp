/* NON_MATCHING: retail computes both field cursors from the unit base and saves only LR. */
#include "common.h"

struct UnitCountPair {
    s32 first;  // 0x00
    s32 second; // 0x04
};

struct UnitCountTable {
    u8 unk000[0x5b8]; // 0x000
    UnitCountPair records[133]; // 0x5b8
};

extern "C" UnitCountTable* btlUnitGet(u32 unitId);

// Count records with a nonnegative first value and a positive second value.
extern "C" s32 FUN_004ea5e8(u32 unitId)
{
    UnitCountTable* unit = btlUnitGet(unitId);
    const UnitCountPair* record = unit->records;
    s32 count = 0;
    for (s32 remaining = 133; remaining != 0; --remaining, ++record) {
        if (record->first >= 0 && record->second > 0) {
            ++count;
        }
    }
    return count;
}
