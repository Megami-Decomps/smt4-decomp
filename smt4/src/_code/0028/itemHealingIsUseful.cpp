/* NON_MATCHING: 138 lines, all register allocation: retail keeps the party loop bound in fp (add fp, r2, #4), the shared zero in r9 (need/have init and the in-loop return) and the skill in r4. */
#include "battle/SkillUseNeeds.h"
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
s32 FUN_0033fe6c(s32 slot, s32 fromParty, const ConsumableRecord *skill, u32 useAmounts);

/* Whether a healing skill is worth using: 1 invalid id, 2 not a usable healing skill, 0 when a
 * party member (or a stocked slot) would benefit, 3 when nobody would. */
u32 itemHealingIsUseful(u32 skillId)
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
        if (skill->healHp != 0)
            need |= 1;
        if (skill->curesHp != 0)
            need |= 1;
        if (skill->healMp != 0)
            need |= 2;
        if (skill->curesMp != 0)
            need |= 2;
        if (skill->target & 0x7F)
            need |= 4;
        if ((need & 1) && !(member->data.statusFlags & 2) && member->data.hp != member->data.maxHp)
            have = 1;
        if ((need & 2) && member->data.mp != member->data.maxMp)
            have |= 2;
        if ((need & 1) && (need & 2)) {
            if ((have & 1) && !(have & 2))
                have |= 2;
            if (!(have & 1) && (have & 2))
                have |= 1;
        }
        if (need & 4) {
            u16 mask = 0;
            statusCureEventAddMask(&mask, skill->target & 0x7F);
            if (mask & member->data.statusFlags)
                have |= 4;
        }
        if (need == have)
            return 0;
    }
    if ((skill->target & 0x7F) == 1) {
        SlotTable *slots = gameGetSlotTable();
        for (s32 slot = -1; slot < slots->count; slot++) {
            if (FUN_0033fe6c(slot, 0, skill, 0) == 0)
                return 0;
        }
    }
    return 3;
}

} /* extern "C" */
