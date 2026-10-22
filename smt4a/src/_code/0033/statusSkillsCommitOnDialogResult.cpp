/* NON_MATCHING: root/loop register roles and shared-counter initialization differ; lower optimization may change allocation. */
#include "shard/Shard0034.h"

namespace {
union SkillIds {
    u16 ids[8];
    u32 words[4];
};
struct SkillDataView {
    u8 unk00[0x34];
    SkillIds skills;
    u8 skillFlags[8];
};
struct StagedSkill {
    u16 id;
    u8 unk02[2];
    u32 flags;
};
struct SkillCommitWork {
    StagedSkill staged[8];
    u8 unk40[0x10];
    PlayerData* demon;
    u8 unk54[0x64];
    u32 state;
    u32 timer;
    u8 unkC0[8];
    u32 dialog;
    u8 unkCC[8];
    u8 refreshNeeded;
};
struct SkillCommitMenu {
    u8 unk0000[0x598];
    s16 selectedDemon;
    u8 unk059A[0x1F12];
    SkillCommitWork work;
};

inline void copySkills(PlayerData* target, const StagedSkill* staged)
{
    SkillDataView* data = reinterpret_cast<SkillDataView*>(target);
    for (s32 word = 0; word < 4; ++word) {
        data->skills.words[word] = 0;
    }
    s32 count = 0;
    for (s32 slot = 0; slot < 8; ++slot) {
        if (staged[slot].id != 0) {
            data->skills.ids[count] = staged[slot].id;
            data->skillFlags[count] = static_cast<u8>(staged[slot].flags);
            ++count;
        }
    }
}
}

extern "C" {
s32 scrRunOpcodesStub(u32);
s32 messageMainGetValue(void);
PlayerData* gameGetPlayerData(void);
s32 countUnlockedSlots(void);
s32 getUnlockedSlotCount(const PlayerData*);
void statusReplaceSkills(u16*, u32);
void FUN_003343f0(u32);

void statusSkillsCommitOnDialogResult(void* object)
{
    SkillCommitMenu* menu = static_cast<SkillCommitMenu*>(object);
    SkillCommitWork* work = &menu->work;
    if (scrRunOpcodesStub(work->dialog) != 2) {
        return;
    }
    if (messageMainGetValue() != 0) {
        work->state = 1;
        work->timer = 0;
        return;
    }
    if (menu->selectedDemon < 0) {
        PlayerData* player = gameGetPlayerData();
        copySkills(player, work->staged);
        SkillDataView* data = reinterpret_cast<SkillDataView*>(player);
        statusReplaceSkills(data->skills.ids, static_cast<u8>(countUnlockedSlots()));
    } else {
        PlayerData* demon = work->demon;
        copySkills(demon, work->staged);
        SkillDataView* data = reinterpret_cast<SkillDataView*>(demon);
        statusReplaceSkills(data->skills.ids, static_cast<u8>(getUnlockedSlotCount(demon)));
    }
    if (work->refreshNeeded != 0) {
        FUN_003343f0(0);
        work->refreshNeeded = 0;
    }
    work->state = 5;
    work->timer = 0;
}
} // extern "C"
