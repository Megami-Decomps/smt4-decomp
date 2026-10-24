/* NON_MATCHING: readable rebuild from asm of the status-ailment infliction roll; armcc here schedules the VFP chance formula (vmla chains on s16-s18) and the two copies of the property switch differently, and retail's 32-byte name buffer is zeroed by eight stores before the per-ailment textFormatBuffer call. */
#include "common.h"

/* A battle unit (only the fields read here). */
struct BattleUnit {
    /* 0x000 */ u8 unk000[0x74];
    /* 0x074 */ s32 properties[0x7F];     /* property values, indexed by property id */
    /* 0x270 */ s16 level;
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ u64 blockFlags;
};

/* The mask the flags are tested against (DAT_005713f0 + 0xA8). */
struct AilmentMasks {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ u64 preventMask;
};

extern "C" {
extern AilmentMasks DAT_005713f0;

BattleState *btlGetMainState(void);
BattleUnit *FUN_003f0e20(BattleState *battle, u32 id);
s32 btlGetPropertyMaximum(s32 property);
void textFormatBuffer(char *buffer, const char *text);
u32 lcgRandomRange(u32 limit);

/* The resistance of the unit to the property (0 without a unit). */
static s32 resistanceOf(u32 id, s32 property)
{
    BattleUnit *unit = FUN_003f0e20(btlGetMainState(), id);
    return unit != NULL ? unit->properties[property] : 0;
}

/* Rolls whether ailment `kind` lands on unit `id`: kinds 12 and 4 are decided by the resistance
 * property alone (positive / at its maximum); the others use a base chance raised by the unit's
 * level (capped at 70%) and the resistance, unless the battle forbids the roll, in which case a
 * resistance above 3 is required. Returns 1 when it lands. */
u32 FUN_004c1114(u32 id, s32 kind)
{
    BattleState *battle = btlGetMainState();
    BattleUnit *unit = FUN_003f0e20(battle, id);
    f32 base = 0.0f;
    s32 property;
    const char *name = NULL;
    switch (kind) {
    case 3:
        base = 5.0f;
        property = 30;
        name = "\x8D\x8F\x88\xF3";
        break;
    case 4:
        property = 34;
        break;
    case 6:
        base = 18.0f;
        property = 28;
        name = "\x8D\xAC\x97\x90";
        break;
    case 7:
        base = 20.0f;
        property = 27;
        name = "\x90\x87\x96\xB0";
        break;
    case 8:
        base = 14.0f;
        property = 29;
        name = "\x8B\xD9\x94\x9B";
        break;
    case 11:
        base = 18.0f;
        property = 31;
        name = "\x96\xA3\x97\xB9";
        break;
    case 12:
        property = 32;
        break;
    case 13:
        base = 14.0f;
        property = 33;
        name = "\x96\x82\x95\x95";
        break;
    default:
        return 1;
    }
    f32 level = (f32)unit->level;
    f32 resistance = (f32)resistanceOf(id, property);
    if (kind == 12)
        return (s32)resistance > 0;
    if (kind == 4)
        return resistanceOf(id, property) == btlGetPropertyMaximum(property);
    if ((battle->blockFlags & DAT_005713f0.preventMask) != 0)
        return (s32)resistance > 3;
    f32 over = 0.0f;
    if ((s32)level > 100) {
        over = level - 100.0f;
        level = level - over;
    }
    f32 chance = base + base * (level * 0.01f + over * 0.0025f);
    if (chance > 70.0f)
        chance = 70.0f;
    chance += resistance * 15.0f;
    char label[32] = { 0 };
    textFormatBuffer(label, name);
    if ((s32)resistance == 0)
        return 0;
    return chance > (f32)lcgRandomRange(99);
}

} /* extern "C" */
