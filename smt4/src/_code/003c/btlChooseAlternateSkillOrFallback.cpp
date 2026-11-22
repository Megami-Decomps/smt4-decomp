/* NON_MATCHING: final fallback actor-command register assignment (r0/r1/r2/r3) differs around btlActionGetSlot. */
#include "battle/btlAction.h"
#include "battle/BtlUnitWork.h"
#include "gamedata/SkillDataLookup.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

struct AlternateActionBattle {
    u8 unk0000[0x84];
    s32 actor;
    u8 unk0088[0x4418];
    u32 flags; // 0x44a0
};
struct AlternateActionContext { AlternateActionBattle *battle; };
struct AlternateActionActor { u32 flags; };
struct AlternateActionCommand {
    u8 unk000[0x14c];
    u16 type, skill;
};
struct AlternateActionChoice {
    u32 flags;
    u8 unk04[0x1c];
    AlternateActionActor *actor;
    u32 unk24;
    AlternateActionCommand *command;
    u16 target;
};
struct AlternateActionSkill {
    u8 unk00[0x28];
    union {
        u32 flags;
        struct { u32 low : 5; u32 category : 4; u32 target : 2; u32 high : 21; } bits;
    } kind;
};
extern "C" {
s32 randRange(u32);
void btlEntryGetPassiveSkillIds(AlternateActionActor *, u16 *);
void qsort(void *, s32, s32, s32 (*)(const void *, const void *));
s32 FUN_00333670(const void *, const void *);
s32 halfwordKeyDescendingCompare(const void *, const void *);
u32 btlSubmitAction(s32, AlternateActionActor *, s32);
void btlUnitSetParam(AlternateActionContext *, s32, s32);
void FUN_00229b10(AlternateActionContext *, AlternateActionChoice *);
void FUN_00227b14(BtlUi *ui, u16, s32, s32);

u32 btlChooseAlternateSkillOrFallback(AlternateActionContext *context, AlternateActionChoice *choice)
{
    s32 roll = randRange(1);
    s32 count = 0;
    if (!(context->battle->flags & 0x40000) && roll == 1) {
        u16 skills[10] = {0};
        btlEntryGetPassiveSkillIds(choice->actor, skills);
        for (s32 i = 0; i < 9; ++i) {
            if (skills[i]) {
                const AlternateActionSkill *skill = reinterpret_cast<const AlternateActionSkill *>(skillDataFindById(skills[i]));
                if (skill && skill->kind.bits.target != 0 && skill->kind.bits.target != 1)
                    ++count;
                else
                    skills[i] = 0;
            }
        }
        if (count) {
            qsort(skills, 9, 2, FUN_00333670);
            btlSubmitAction(10, choice->actor, 1);
            qsort(skills, count, 2, halfwordKeyDescendingCompare);
            s32 index = randRange((count - 1) & 0xffff);
            choice->command->type = 2;
            choice->command->skill = skills[index];
            choice->flags |= 0x8000;
            const AlternateActionSkill *skill = reinterpret_cast<const AlternateActionSkill *>(skillDataFindById(skills[index]));
            if (skill->kind.bits.category == 4)
                btlUnitSetParam(context, 15, 0);
            else
                btlUnitSetParam(context, 2, 0);
            FUN_00229b10(context, choice);
            return 1;
        }
    }
    btlSubmitAction(9, choice->actor, 1);
    if (!(choice->actor->flags & 0x30))
        FUN_00227b14(g_btlUiBlock, choice->target, 0, 0);
    choice->command->type = 15;
    btlActionGetSlot(context->battle->actor)->unit.command = 19;
    return 1;
}
}
