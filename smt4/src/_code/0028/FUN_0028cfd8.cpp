/* NON_MATCHING: readable rebuild of the skill usefulness check; retail evaluates the need/have masks with conditional ORs on the same registers, which armcc here allocates differently. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/ConsumableRecord.h"

struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x910B];
    /* 0x910B */ s8 count;
};

extern "C" {
SlotTable *gameGetSlotTable(void);
u32 FUN_0028d320(u32 amount);
void FUN_0023dc38(u16 *mask, u32 group);
s32 FUN_0033fe6c(s32 slot, s32 arg, const ConsumableRecord *skill);

/* Whether a healing skill is worth using: 1 invalid id, 2 not a usable healing skill, 0 when a
 * party member (or a stocked slot) would benefit, 3 when nobody would. */
u32 FUN_0028cfd8(u32 skillId)
{
    if (skillId == 0)
        return 1;
    ConsumableRecord *skill = itemTableGetItemRecord(skillId);
    if (skill == NULL)
        return 1;
    if ((skill->type != 2 && skill->type != 3) || skill->kind != 1)
        return 2;
    if (skill->skillId != 0)
        return FUN_0028d320(skill->skillId);
    BtlMainState *battle = btlGetMainState();
    if (battle->editorControl.flags & 0x2000000)
        return 0;
    for (s32 i = 0; i < 4; i++) {
        BtlEntry *member = &battle->entries[i];
        if (!(member->flags & 1) || (member->flags & 0x40))
            continue;
        u32 need = 0;
        u32 have = 0;
        if (skill->healHp != 0 || skill->curesHp != 0)
            need |= 1;
        if (skill->healMp != 0 || skill->curesMp != 0)
            need |= 2;
        if (skill->target & 0x7F)
            need |= 4;
        if ((need & 1) && !(member->groupMask & 2) && member->hp != member->maxHp)
            have = 1;
        if ((need & 2) && member->mp != member->maxMp)
            have |= 2;
        if ((need & 1) && (need & 2) && (have & 3))
            have |= 3;
        if (need & 4) {
            u16 mask = 0;
            FUN_0023dc38(&mask, skill->target & 0x7F);
            if (mask & member->groupMask)
                have |= 4;
        }
        if (need == have)
            return 0;
    }
    if ((skill->target & 0x7F) == 1) {
        SlotTable *slots = gameGetSlotTable();
        for (s32 slot = -1; slot < slots->count; slot++) {
            if (FUN_0033fe6c(slot, 0, skill) == 0)
                return 0;
        }
    }
    return 3;
}

} /* extern "C" */
