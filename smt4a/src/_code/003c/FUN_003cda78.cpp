/* NON_MATCHING: the current-index literal (0x74c0) now matches; armcc folds the entry's +44 into the load displacement where retail adds it separately, and the cold-return placement/nop differ. */
#include "shard/W5_W5Match5_GameSaveViews.h"

struct SlotSelectionEntry {
    s8 slot;
    u8 unk01[0x14f];
};

struct SlotSelectionView {
    u8 unk0000[0x442c];
    u8 entries[0x74c0 - 0x442c];
    s32 current; // 0x74c0
};

struct DirectSkillView {
    u8 unk00[0x3a];
    u16 skill;
};

struct SkillCommandWork {
    u32 unk00;
    SlotSelectionView *selection;
    DirectSkillView *direct;
};

static __inline const u16 *slotSkillWords(const SlotRecord *record)
{
    return reinterpret_cast<const u16 *>(record->unk00 + 0x34);
}

extern "C" {
u32 FUN_003a7b74(void);
void scrSetResult(u32 value);
extern SkillCommandWork g_engineCleanupOwner;

// Publish the currently selected slot skill, or the direct skill when no list is active.
u32 FUN_003cda78(void)
{
    const SkillCommandWork *work = &g_engineCleanupOwner;
    u16 skill;
    if (work->selection != NULL) {
        SlotSelectionView *selection = work->selection;
        s32 current = selection->current;
        SlotRecord *record = gameGetSlotRecord(
            reinterpret_cast<const SlotSelectionEntry *>(selection->entries)[current].slot);
        u32 index = FUN_003a7b74();
        skill = slotSkillWords(record)[index];
    } else {
        if (work->direct == NULL)
            return 1;
        skill = work->direct->skill;
    }
    scrSetResult(skill);
    return 1;
}
}
