/* NON_MATCHING: retail spills its argument words (push r0-r3, args read via stack) and evaluates the skill kind/amount tests with different register use; logic equivalent. */
#include "common.h"
#include "shard/FUN_00227d18.h"

/* A battle unit (accessed fields). */
struct BtlUnit {
    u8 unk00[0x24];
    struct BtlUnitSkill *skill;     // 0x24
};
struct BtlUnitSkill {
    u8 unk00[0x50];
    u32 flags;                      // 0x50
    u8 unk54[0xE];
    s16 kind;                       // 0x62
};

struct BtlTarget {
    u8 unk00[0xB8];
    s32 state;                      // 0xB8
};

extern "C" {
s32 btlShowListedActionMessage(s32 *state, BtlUnit *unit, s32 kind, s32 slot, s32 other);
void FUN_00227fac(void);
void frameRangeExtend(s32 *state, BtlUnit *unit, s32 kind, s32 slot, s32 a, s32 b);
void FUN_0023c0d0(s32 *state, BtlUnit *unit, s32 kind, s32 amount);
void actionCreateKindSeventeen(s32 a, BtlUnit *unit, s32 b);
void FUN_002505c0(s32 slot, BtlUnit *unit, u32 id, s32 a, s32 b, s32 c, s32 d);
void FUN_002551ac(s32 slot, BtlUnit *unit, BtlUnitSkill *skill, s32 a, s32 amount, s32 b, s32 c, u32 d, s32 e,
                  s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o, s32 p, s32 q, s32 r,
                  s32 s, s32 t, s32 u);
void FUN_0027df30(s32 slot, BtlUnit *unit, BtlUnitSkill *skill, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g,
                  s32 h, s32 i, s32 j);
s32 FUN_00229914(s32 *state, BtlUnit *unit, s32 kind);
s32 FUN_00293230(s32 target);

/* Resolve the heal/damage action of a skill on a unit and queue its effects and messages. Returns whether it hit. */
s32 FUN_003d03f8(s32 *state, BtlUnit *unit, s32 amount, s32 slot, BtlUnitSkill *skill, u32 *context)
{
    s32 hit = 0;
    s32 extraEffect = -1;
    s32 kind = skill->kind;
    FUN_00227fac();
    u32 *view = context + 0x40;
    s32 count = kind;
    if (kind > 0)
        count = amount;
    if (count > 0) {
        u8 *table = reinterpret_cast<u8 *>(unit) + skill->kind * 10;
        u32 limit = *reinterpret_cast<u16 *>(table + 0x9D4);
        if (static_cast<s32>(limit) <= amount) {
            amount = limit - 1;
            if (kind == 2 && (*reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(context) + 0x1C6) & 8) == 0)
                extraEffect = *reinterpret_cast<u16 *>(table + 0x9D6);
            actionCreateKindSeventeen(0, unit, *reinterpret_cast<s16 *>(reinterpret_cast<u8 *>(context) + 0x6E));
            FUN_00227d18(skill->kind);
        }
    }
    FUN_0023c0d0(state, unit, skill->kind, -amount);
    if (FUN_00229914(state, unit, skill->kind) != 0) {
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
    if (FUN_00293230(*state) == 0)
        b = 0;
    FUN_002551ac(slot, unit, skill, 0, amount, -1, -1,
                 *reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(unit) + skill->kind * 10 + 0x9D4),
                 *reinterpret_cast<s16 *>(reinterpret_cast<u8 *>(view) + 0xB6), 0, 0, hit, 0, 1, 0, 0x1E, 0, a, b, c,
                 -1, 1, 0, 1, 1);
    FUN_002505c0(slot, unit, 0x1000185, 0, 0, 0, 0);
    if (extraEffect >= 0)
        FUN_0027df30(slot, unit, skill, 0, extraEffect, -1, -1, 0, a, b, c, 0, 0);
    if (hit != 0) {
        if ((unit->skill->flags & 0x400) != 0) {
            frameRangeExtend(state, unit, unit->skill->kind, slot, 0x3C, 0x3C);
            btlShowListedActionMessage(state, unit, unit->skill->kind, slot + 0x3C, 0);
        } else {
            frameRangeExtend(state, unit, skill->kind, slot, 0x1E, 0x1E);
            btlShowListedActionMessage(state, unit, skill->kind, slot + 0x1E, slot);
        }
    } else {
        frameRangeExtend(state, unit, skill->kind, slot, 0x1E, 0x1E);
    }
    return hit;
}
}
