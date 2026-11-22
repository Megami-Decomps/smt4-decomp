/* NON_MATCHING: 50 lines: retail keeps id/battle/kind-3 in r6/r8/r7 (ours r8/r7/r6), loads the forced-roll mask
 * through other registers, and for kind 4 finishes the resistance read before calling btlGetPropertyMaximum,
 * keeping it in r2 across the call (a --multifile caller, as btlAdjustPropertyClamped is). */
#include <stdio.h>
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "battle/BattleSkillResponseMasks.h"
#include "util/Random.h"

extern "C" {

/* The resistance of the unit to the property (0 without a unit). */
static __inline s32 resistanceOf(u32 id, s32 property)
{
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), id);
    return unit != NULL ? unit->properties[property] : 0;
}

/* Rolls whether ailment `kind` lands on unit `id`: kinds 12 and 4 are decided by the resistance
 * property alone (positive / at its maximum); the others use a base chance raised by the unit's
 * luck (capped at 70%) and the resistance, unless the battle forbids the roll, in which case a
 * resistance above 3 is required. Returns 1 when it lands. */
u32 btlRollAilment(u32 id, s32 kind)
{
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(battle, id);
    f32 base = 0.0f;
    s32 property;
    switch (kind) {
    case 7:
        base = 20.0f;
        property = 27;
        break;
    case 6:
        base = 18.0f;
        property = 28;
        break;
    case 8:
        base = 14.0f;
        property = 29;
        break;
    case 3:
        base = 5.0f;
        property = 30;
        break;
    case 11:
        base = 18.0f;
        property = 31;
        break;
    case 12:
        property = 32;
        break;
    case 13:
        base = 14.0f;
        property = 33;
        break;
    case 4:
        property = 34;
        break;
    default:
        return 1;
    }
    f32 luck = (f32)unit->data.luck;
    f32 resistance = (f32)resistanceOf(id, property);
    if (kind == 12)
        return (s32)resistance > 0;
    if (kind == 4)
        return resistanceOf(id, property) == btlGetPropertyMaximum(property);
    if ((g_btlSkillResponseMasks.alwaysProc & battle->stateFlags64.bits) != 0)
        return (s32)resistance > 3;
    f32 over = 0.0f;
    if (luck > 100.0f) {
        over = luck - 100.0f;
        luck = luck - over;
    }
    f32 chance = base + base * (luck * 0.01f + over * 0.0025f);
    if (chance > 70.0f)
        chance = 70.0f;
    chance += resistance * 15.0f;
    char label[32] = { 0 };
    switch (kind) {
    case 7:
        sprintf(label, "\x90\x87\x96\xB0");
        break;
    case 6:
        sprintf(label, "\x8D\xAC\x97\x90");
        break;
    case 8:
        sprintf(label, "\x8B\xD9\x94\x9B");
        break;
    case 3:
        sprintf(label, "\x8D\x8F\x88\xF3");
        break;
    case 11:
        sprintf(label, "\x96\xA3\x97\xB9");
        break;
    case 13:
        sprintf(label, "\x96\x82\x95\x95");
        break;
    }
    if ((s32)resistance == 0)
        return 0;
    return chance > (f32)lcgRandomRange(99);
}

} /* extern "C" */
