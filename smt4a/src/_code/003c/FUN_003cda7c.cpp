/* NON_MATCHING: compiler synthesizes the large current-index address with ADDs and hoists the entry base; retail uses a literal offset and different cold-return placement. */
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

// Publish the currently selected slot skill, or the direct skill when no list is active.
u32 FUN_003cda7c(u32 unused, const SkillCommandWork *work)
{
    u16 skill;
    if (work->selection != NULL) {
        const SlotSelectionEntry *entries =
            reinterpret_cast<const SlotSelectionEntry *>(work->selection->entries);
        SlotRecord *record = gameGetSlotRecord(entries[work->selection->current].slot);
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
