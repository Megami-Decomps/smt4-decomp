/* NON_MATCHING: quest-status load scheduling and packed flag clearing instructions differ. */
#include "quest_center/QuestRuntime.h"

extern "C" {
QuestRuntimeFlagBlock *gameGetFlagBlock();
QuestRuntimeDefinition *dataTable1bOr1cGetRecord(u32 id);
s32 FUN_00298f88(u32 id);
s32 FUN_00287894(u32 id);
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
    status->stateFlags &= ~4;
    status->flags = (status->flags & ~2) | 0x1c;
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
            block->flagBytes[flag >> 3] &= ~(1u << (flag & 7));
        }
    } else if (!FUN_00287894(id) && (dataTable1bOr1cGetRecord(id)->flags & 2)) {
        FUN_0028eeb8(id);
    }
    return 1;
}
}
