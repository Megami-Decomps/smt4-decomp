#include "shard/GameGlobals.h"

namespace {
struct StatusSkillMemberView {
    /* 0x00 */ u8 prefix[0x4B];
    /* 0x4B */ u8 available;
};
}

extern "C" {
void statusReplaceSkills(u16 *skills, u8 count);
void FUN_0026a978(const u32 *result, s32 selection);
StatusSkillMemberView *partyMemberFindById(u32 id);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 FUN_0026a9cc(u16 memberId, u32 level, const u16 *skills, u32 *result, s32 skip);
u32 FUN_0029aafc();
u32 flagCountUnlockedSlots();

// Replace the status skill list and recompute its party-member-specific selection data.
void statusReplaceSkillList(const u16 *skills)
{
    struct SkillSelectionView {
        /* 0x0000 */ u8 prefix[0x1300];
        /* 0x1300 */ s16 memberId;
        /* 0x1302 */ u16 secondaryId;
        /* 0x1304 */ u8 unk1304[0x44];
        /* 0x1348 */ u16 skills[8];
    };
    GameData *data = g_gameGlobals.data;
    SkillSelectionView *selection = reinterpret_cast<SkillSelectionView *>(data);
    u32 count = 8;
    if (selection->memberId < 0) {
        count = FUN_0029aafc();
    } else if (selection->memberId > 0 && data->unk1E66 != 6) {
        partyMemberFindById((u16)selection->memberId);
        count = flagCountUnlockedSlots();
    }
    rt_memcpy(selection->skills, skills, count * sizeof(u16));
    statusReplaceSkills(selection->skills, count);
    u32 result[4] = {0, 0, 0, 0};
    if (selection->memberId > 0 && data->unk1E66 != 6) {
        StatusSkillMemberView *member = partyMemberFindById((u16)selection->memberId);
        if (data->unk1E66 == 2 || data->unk1E66 == 3)
            member = partyMemberFindById((u16)selection->memberId);
        s8 selected = (s8)FUN_0026a9cc(selection->memberId, selection->secondaryId,
                                  selection->skills, result, member != NULL && member->available != 0);
        FUN_0026a978(result, selected);
    } else {
        FUN_0026a978(NULL, -1);
    }
}
}
