/* NON_MATCHING: retail uses separate conditional stores and saves five registers; compiled code groups the pair into STM and pads the call frame with R8. */
#include "battle/BattleUnitSlot.h"

struct BattleRecord {
    s32 first;  // 0x00
    s32 second; // 0x04
};
struct BattleRecordSet {
    u8 unk000[0x5a8]; // 0x000
    BattleRecord records[133]; // 0x5a8
};
struct BattleReference;

extern "C" {

// Clears every unit record matching the requested pair.
void FUN_0023c638(BattleReference* reference, s32 first, s32 second)
{
    BattleRecordSet* unit = reinterpret_cast<BattleRecordSet *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(reference)));
    for (s32 i = 0; i < 133; ++i) {
        if (unit->records[i].first == first && unit->records[i].second == second) {
            unit->records[i].first = -1;
            unit->records[i].second = 0;
        }
    }
}
}
