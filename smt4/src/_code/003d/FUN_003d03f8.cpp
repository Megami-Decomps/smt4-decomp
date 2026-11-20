/* NON_MATCHING: retail spills its argument words (push r0-r3, args read via stack) and evaluates the skill kind/amount tests with different register use; logic equivalent. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"


struct BtlTarget {
    u8 unk00[0xB8];
    s32 state;                      // 0xB8
};

extern "C" {
s32 btlShowListedActionMessage(s32 *state, BtlUnit *unit, s32 kind, s32 slot, s32 other);
u32 FUN_00227fac(u32 listedId);
void frameRangeExtend(s32 *state, BtlUnit *unit, s32 kind, s32 slot, s32 a, s32 b);
void FUN_0023c0d0(s32 *state, BtlUnit *unit, s32 kind, s32 amount);
void actionCreateKindSeventeen(s32 a, BtlUnit *unit, s32 b);
void btlQueueKeyedScalarReflectAction(s32 slot, BtlUnit *unit, u32 id, s32 a, s32 b, s32 c, s32 d);
void FUN_002551ac(s32 slot, BtlUnit *unit, BtlActionRecord *skill, s32 a, s32 amount, s32 b, s32 c, u32 d, s32 e,
                  s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o, s32 p, s32 q, s32 r,
                  s32 s, s32 t, s32 u);
void btlQueueSkillReflectActions(s32 slot, BtlUnit *unit, BtlActionRecord *skill, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g,
                  s32 h, s32 i, s32 j);
s32 btlUnitIsDeadAndUncopied(s32 *state, BtlUnit *unit, s32 kind);
s32 btlScriptUnitIsIncapacitated(s32 target);

/* Resolve the heal/damage action of a skill on a unit and queue its effects and messages. Returns whether it hit. */
s32 FUN_003d03f8(s32 *state, BtlUnit *unit, s32 amount, s32 slot, BtlActionRecord *skill, u32 *context)
{
    s32 hit = 0;
    s32 extraEffect = -1;
    s32 kind = FUN_00227fac(skill->memberId);
    u32 *view = context + 0x40;
    if (kind > 0 && amount > 0) {
        u8 *table = reinterpret_cast<u8 *>(unit) + skill->memberId * 10;
        u32 limit = *reinterpret_cast<u16 *>(table + 0x9D4);
        if (static_cast<s32>(limit) <= amount) {
            amount = limit - 1;
            if (kind == 2 && (*reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(context) + 0x1C6) & 8) == 0)
                extraEffect = *reinterpret_cast<u16 *>(table + 0x9D6);
            actionCreateKindSeventeen(0, unit, *reinterpret_cast<s16 *>(reinterpret_cast<u8 *>(context) + 0x6E));
            FUN_00227d18(skill->memberId);
        }
    }
    FUN_0023c0d0(state, unit, skill->memberId, -amount);
    if (btlUnitIsDeadAndUncopied(state, unit, skill->memberId) != 0) {
        hit = 1;
        if ((*context & 0x10) != 0 && reinterpret_cast<BtlTarget *>(*state)->state == 1)
            *reinterpret_cast<u32 *>(*state + 0x88) = 0xD;
    }
    s32 a = -1;
    s32 b = -1;
    s32 c = -1;
    if ((*context & 0x10) == 0) {
        a = 0;
        c = 0xB;
    }
    if (btlScriptUnitIsIncapacitated(*state) == 0)
        b = 0;
    FUN_002551ac(slot, unit, skill, 0, amount, -1, -1,
                 *reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(unit) + skill->memberId * 10 + 0x9D4),
                 *reinterpret_cast<s16 *>(reinterpret_cast<u8 *>(view) + 0xB6), 0, 0, hit, 0, 1, 0, 0x1E, 0, a, b, c,
                 -1, 1, 0, 1, 1);
    btlQueueKeyedScalarReflectAction(slot, unit, 0x1000185, 0, 0, 0, 0);
    if (extraEffect >= 0)
        btlQueueSkillReflectActions(slot, unit, skill, 0, extraEffect, -1, -1, 0, a, b, c, 0, 0);
    if (hit != 0) {
        if ((unit->record->status & 0x400) != 0) {
            frameRangeExtend(state, unit, unit->record->memberId, slot, 0x3C, 0x3C);
            btlShowListedActionMessage(state, unit, unit->record->memberId, slot + 0x3C, 0);
        } else {
            frameRangeExtend(state, unit, skill->memberId, slot, 0x1E, 0x1E);
            btlShowListedActionMessage(state, unit, skill->memberId, slot + 0x1E, slot);
        }
    } else {
        frameRangeExtend(state, unit, skill->memberId, slot, 0x1E, 0x1E);
    }
    return hit;
}
}
