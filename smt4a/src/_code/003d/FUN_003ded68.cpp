#include "shard/W5_W5Match7_DataRecord.h"
extern "C" {
ItemEligibilityStateA* gameGetPlayerData(void);
s32 FUN_001ada74(s32);
s32 FUN_003df390(s32);
s32 partyEntryFlagsBit3(s32);
s32 partyEntryFlagsBit1(s32);

// Tests the entry's flags, availability, and nonzero player-state threshold.
u32 FUN_003ded68(s32 id)
{
    if (partyEntryFlagsBit3(id) != 0) {
        return 0;
    }
    if (partyEntryFlagsBit1(id) != 0 && FUN_001ada74(id) != 0) {
        return 0;
    }
    if (FUN_003df390(id) != 0) {
        ItemDataRecord* record = FUN_001ad9b4(id);
        if (record != NULL) {
            u32 value = gameGetPlayerData()->value;
            if (record->eligibilityThreshold != 0 && record->eligibilityThreshold <= (s32)value) {
                return 1;
            }
        }
    }
    return 0;
}
}
