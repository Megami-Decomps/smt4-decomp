#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestRecord.h"
#include "code/Code0029.h"

extern "C" {
QuestRuntimeFlagBlock *gameGetFlagBlock();
s32 table1bOr1cGetRecordValue(u32 id);
void FUN_0028eeb8(u32 id);
void FUN_0023ddbc(u32 flag, s32 value);

/* Reports a game flag change to FUN_0023ddbc, then sets or clears the flag's bit. */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    QuestRuntimeFlagBlock *block = gameGetFlagBlock();

    FUN_0023ddbc(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->flagBytes[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->flagBytes[index] &= keep;
    }
}

/* Clears the selected quest's flags 0x500-0x51f. */
static __inline void clearSelectedQuestFlags(void)
{
    u32 flag;

    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Deactivates quest `id` (clears status flag 2, sets 0x1c) and releases its repeat slot, its selection flags or its record; 0 when it was not active. */
u8 FUN_0034888c(u32 id)
{
    QuestRuntimeStatus *status = &gameGetFlagBlock()->quests[id];
    if (!(status->flags & 2)) {
        return 0;
    }
    // Active quest slots lie immediately after the shared persistent-status prefix.
    struct RepeatSlot { u16 id; u8 unk02[12]; };
    struct ActiveQuests {
        u8 unk000[0x840];
        u16 selected;
        RepeatSlot repeated[4];
    };
    typedef char ActiveQuestOffsets[offsetof(ActiveQuests, selected) == 0x840 &&
        offsetof(ActiveQuests, repeated) == 0x842 && sizeof(RepeatSlot) == 0xe ? 1 : -1];
    ActiveQuests *active = reinterpret_cast<ActiveQuests *>(gameGetFlagBlock());
    status->flags = (status->flags & ~2) | 0x1c;
    status->stateFlags &= ~4;
    if (FUN_00298f88(id)) {
        if (dataTable1bOr1cGetRecord(id)->kind == 1) {
            for (s32 i = 0; i < 4; ++i) {
                if (active->repeated[i].id == id) {
                    active->repeated[i].id = 0;
                }
            }
        }
    } else if (reinterpret_cast<ActiveQuests *>(gameGetFlagBlock())->selected == id) {
        active->selected = 0;
        clearSelectedQuestFlags();
    } else if (!table1bOr1cGetRecordValue(id) && (dataTable1bOr1cGetRecord(id)->flags & 2)) {
        FUN_0028eeb8(id);
    }
    return 1;
}
}
