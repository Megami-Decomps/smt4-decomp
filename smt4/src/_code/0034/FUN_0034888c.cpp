/* NON_MATCHING: status flag updates and the byte/bit clear (mvn + and) now match; retail pushes r4-r8 and hoists both the 1 (r7) and the 0 (r6) of the flag-clear loop into registers, ours hoists only the 1. */
#include "quest_center/QuestRuntime.h"
#include "code/Code0029.h"

extern "C" {
QuestRuntimeFlagBlock *gameGetFlagBlock();
QuestRuntimeDefinition *dataTable1bOr1cGetRecord(u32 id);
s32 table1bOr1cGetRecordValue(u32 id);
void FUN_0028eeb8(u32 id);
void FUN_0023ddbc(u32 flag, s32 value);

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
        for (u32 flag = 0x500; flag < 0x520; ++flag) {
            QuestRuntimeFlagBlock *block = gameGetFlagBlock();
            FUN_0023ddbc(flag, 0);
            s32 byte = flag / 8;
            s32 bit = flag % 8;
            u32 mask = ~(1u << bit);
            block->flagBytes[byte] &= mask;
        }
    } else if (!table1bOr1cGetRecordValue(id) && (dataTable1bOr1cGetRecord(id)->flags & 2)) {
        FUN_0028eeb8(id);
    }
    return 1;
}
}
