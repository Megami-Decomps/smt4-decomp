#include "shard/Shard0033.h"

/* ObjB splits this selected-id field into byte arrays; a local view avoids altering their alignment. */
struct StatusSkillSelectionView {
    u8 unk0000[0x1390];
    s16 selectedId;
    u16 comparisonId;
    u8 unk1394[0x4c];
    u16 skills[8]; /* 0x13e0 */
};
struct StatusSkillSlotView {
    u8 unk00[0x67];
    u8 special;
};
struct StatusSkillComparison {
    u32 words[4];
};

extern "C" {
extern ObjBRef g_gameGlobals;
u32 countUnlockedSlots();
StatusSkillSlotView *slotRecordFindById(u32);
u32 getUnlockedSlotCount();
void *rt_memcpy(void *, const void *, u32);
void statusReplaceSkills(u16 *, u8);
s32 FUN_004bcaa8(u16, u16, u16 *, StatusSkillComparison *, u8);
void FUN_0035da20(StatusSkillComparison *, s32);

/* Copy the selected skills and refresh their comparison against the active unit. */
void statusCommitSelectedSkills(const u16 *skills)
{
    ObjB *session = g_gameGlobals.instance;
    StatusSkillSelectionView *selection = reinterpret_cast<StatusSkillSelectionView *>(session);
    u32 count = 8;
    if (selection->selectedId < 0)
        count = countUnlockedSlots();
    else if (selection->selectedId > 0 && session->unk2017 != 7) {
        slotRecordFindById(static_cast<u16>(selection->selectedId));
        count = getUnlockedSlotCount();
    }
    rt_memcpy(selection->skills, skills, count * sizeof(u16));
    statusReplaceSkills(selection->skills, static_cast<u8>(count));
    StatusSkillComparison comparison = {0, 0, 0, 0};
    if (selection->selectedId > 0 && session->unk2017 != 7 && session->unk2017 != 0x10) {
        StatusSkillSlotView *slot = slotRecordFindById(static_cast<u16>(selection->selectedId));
        u8 mode = session->unk2017;
        if (mode == 2 || mode == 0x11 || mode == 3)
            slot = slotRecordFindById(static_cast<u16>(selection->selectedId));
        s8 result = static_cast<s8>(FUN_004bcaa8(static_cast<u16>(selection->selectedId), selection->comparisonId,
                                               selection->skills, &comparison, slot != NULL && slot->special != 0));
        FUN_0035da20(&comparison, result);
    } else {
        FUN_0035da20(NULL, -1);
    }
}
}
