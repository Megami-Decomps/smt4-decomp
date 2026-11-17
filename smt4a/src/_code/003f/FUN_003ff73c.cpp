#include "battle/RestorationEffect.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
extern "C" void FUN_003ff524(u16 *mask, s32 kind);

/* Return 3 if any requested restoration would be ineffective, otherwise 0. */
extern "C" u32 FUN_003ff73c(const BtlCombatantEntryA *unit, const RestorationEffect *effect, u32 unusedA, u32 unusedB)
{
    u32 result = 0;
    u8 requested = 0;
    u8 effective = 0;
    if (effect->hp)
        requested |= 1;
    if (effect->hpPercent)
        requested |= 1;
    if (effect->mp)
        requested |= 2;
    if (effect->mpPercent)
        requested |= 2;
    u32 rawKind = effect->ailmentKind;
    if (rawKind & 0x7F)
        requested |= 4;
    if (effect->flags & 4) {
        requested |= 1;
        requested |= 2;
        requested |= 4;
    }
    if ((requested & 1) && !(unit->data.statusFlags & 2) && unit->data.hp != unit->data.maxHp)
        effective |= 1;
    if ((requested & 2) && unit->data.mp != unit->data.maxMp)
        effective |= 2;
    if ((requested & 1) && (requested & 2)) {
        if ((effective & 1) && !(effective & 2))
            effective |= 2;
        if (!(effective & 1) && (effective & 2))
            effective |= 1;
    }
    if (requested & 4) {
        u16 ailments = 0;
        s32 kind;
        if (effect->flags & 4)
            kind = 37;
        else
            kind = rawKind & 0x7F;
        if (!(effect->flags & 4)) {
            FUN_003ff524(&ailments, kind);
            if (ailments & unit->data.statusFlags)
                effective |= 4;
        } else {
            FUN_003ff524(&ailments, kind);
            if (ailments & unit->data.statusFlags)
                effective |= 4;
        }
    }
    if ((effect->flags & 4) && (effective & 7)) {
        effective |= 1;
        effective |= 2;
        effective |= 4;
    }
    if (requested != effective)
        result = 3;
    return result;
}
