/* NON_MATCHING: readable rebuild of the skill usefulness check; retail evaluates the need/have masks with conditional ORs on the same registers, which armcc here allocates differently. */
#include "common.h"
#include "battle/BtlMainAccess.h"

/* A skill record as the check reads it. */
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 amount;          /* nonzero: a different check applies */
    /* 0x64 */ u16 healHp;
    /* 0x66 */ u16 healMp;
    /* 0x68 */ u8 curesHp;
    /* 0x69 */ u8 curesMp;
    /* 0x6A */ u8 ailmentKind;      /* low seven bits: the ailment group */
    /* 0x6B */ u8 usableOutside;
    /* 0x6C */ u8 unk6C;
    /* 0x6D */ u8 category;         /* 2 or 3: a healing skill */
};

struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x910B];
    /* 0x910B */ s8 count;
};

extern "C" {
SkillRecord *dataTable08Sub1GetRecord(u32 id);
SlotTable *gameGetSlotTable(void);
u32 FUN_0028d320(u32 amount);
void FUN_0023dc38(u16 *mask, u32 group);
s32 FUN_0033fe6c(s32 slot, s32 arg, const SkillRecord *skill);

/* Whether a healing skill is worth using: 1 invalid id, 2 not a usable healing skill, 0 when a
 * party member (or a stocked slot) would benefit, 3 when nobody would. */
u32 FUN_0028cfd8(u32 skillId)
{
    if (skillId == 0)
        return 1;
    SkillRecord *skill = dataTable08Sub1GetRecord(skillId);
    if (skill == NULL)
        return 1;
    if ((skill->category != 2 && skill->category != 3) || skill->usableOutside != 1)
        return 2;
    if (skill->amount != 0)
        return FUN_0028d320(skill->amount);
    BtlMainStateExt *battle = btlGetMainStateExt();
    if (battle->stateFlags & 0x2000000)
        return 0;
    for (s32 i = 0; i < 4; i++) {
        BtlUnitEntry *member = &battle->units[i];
        if (!(member->flags & 1) || (member->flags & 0x40))
            continue;
        u32 need = 0;
        u32 have = 0;
        if (skill->healHp != 0 || skill->curesHp != 0)
            need |= 1;
        if (skill->healMp != 0 || skill->curesMp != 0)
            need |= 2;
        if (skill->ailmentKind & 0x7F)
            need |= 4;
        if ((need & 1) && !(member->flagMask & 2) && member->hp != member->hpMax)
            have = 1;
        if ((need & 2) && member->mp != member->mpMax)
            have |= 2;
        if ((need & 1) && (need & 2) && (have & 3))
            have |= 3;
        if (need & 4) {
            u16 mask = 0;
            FUN_0023dc38(&mask, skill->ailmentKind & 0x7F);
            if (mask & member->flagMask)
                have |= 4;
        }
        if (need == have)
            return 0;
    }
    if ((skill->ailmentKind & 0x7F) == 1) {
        SlotTable *slots = gameGetSlotTable();
        for (s32 slot = -1; slot < slots->count; slot++) {
            if (FUN_0033fe6c(slot, 0, skill) == 0)
                return 0;
        }
    }
    return 3;
}

} /* extern "C" */
