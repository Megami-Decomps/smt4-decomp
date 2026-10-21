/* NON_MATCHING: current C compilation omits the retail ARM hint NOP after each record lookup; the original source/inlining shape remains unrecovered. */
#include "common.h"

struct QuestRecord;
struct QuestFlagEntry {
    u8 flags;     // 0x00
    u8 unk01[3];  // 0x01
};
struct QuestFlagState {
    u8 unk000[0x200];       // 0x000
    QuestFlagEntry entries[400]; // 0x200
};

extern "C" {
QuestRecord* dataTable1bOr1cGetRecord(u16 id);
QuestFlagState* gameGetFlagBlock(void);

// Counts existing subquests 100-399 whose saved flag bit 3 is set.
s32 QcUtility_CountFlaggedSubQuests(void)
{
    s32 count = 0;
    for (s32 id = 100; id < 400; ++id) {
        if (dataTable1bOr1cGetRecord(static_cast<u16>(id)) != NULL) {
            u16 index = static_cast<u16>(id);
            if ((gameGetFlagBlock()->entries[index].flags & 8) != 0) {
                ++count;
            }
        }
    }
    return count;
}
}
