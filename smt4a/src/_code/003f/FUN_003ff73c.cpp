/* NON_MATCHING: retail if-converts the ailment-kind select (movne #37 / andeq #127) and the argument setup ahead of the two FUN_003ff524 call arms and pushes one register fewer; ours sets the arguments inside each arm and pushes r9. */
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
    if (effect->ailmentKind & 0x7F)
        requested |= 4;
    if (effect->flags & 4) {
        requested |= 1;
        requested |= 2;
        requested |= 4;
    }
    if ((requested & 1) && !(unit->statusFlags & 2) && unit->hp != unit->maxHp)
        effective |= 1;
    if ((requested & 2) && unit->mp != unit->maxMp)
        effective |= 2;
    if ((requested & 1) && (requested & 2)) {
        if ((effective & 1) && !(effective & 2))
            effective |= 2;
        if (!(effective & 1) && (effective & 2))
            effective |= 1;
    }
    if (requested & 4) {
        u16 ailments = 0;
        if (!(effect->flags & 4)) {
            FUN_003ff524(&ailments, effect->ailmentKind & 0x7F);
            if (ailments & unit->statusFlags)
                effective |= 4;
        } else {
            FUN_003ff524(&ailments, 37);
            if (ailments & unit->statusFlags)
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
