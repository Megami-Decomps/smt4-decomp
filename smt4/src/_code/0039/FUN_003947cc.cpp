/* NON_MATCHING: retail zeroes the 32-byte name buffer twice per iteration (155 rows) and keeps the name pointer in r7 / table cursor in r5 across the search; ours zero-fills once and loads the entry address per iteration (148 rows). */
#include "battle/BtlMainAccess.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

/* An entry of the battle effect name table (0x24 bytes): the effect's file name and up to two sub-effects. */
struct BtlEffectEntry {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ s32 firstCount;
    /* 0x14 */ u16 firstHandle;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s32 secondCount;
    /* 0x1C */ u16 secondHandle;
    /* 0x1E */ u8 unk1E[2];
    /* 0x20 */ u32 value;
};

/* The battle main state (observed fields). */
struct BtlMainPosition {
    /* 0x000 */ u8 unk000[0x574];
    /* 0x574 */ f32 centerX;
};

#define BTL_EFFECT_ENTRIES 0x191

extern "C" {

extern BtlEffectEntry s_ef_e_atk01_00436028[];
extern BtlMainPosition *g_btlMain;

void textFormatBuffer(char *destination, const char *format, ...);
s32 libc_strcmp(const char *first, const char *second);
void FUN_002505c0(u32 handle, s32 owner, s32 count, s32 a, s32 b, s32 side, s32 c);

/* Starts the named battle effect for `owner`: finds its table entry by file name and plays its sub-effects
 * on the side (1-5) the horizontal position `x` falls on. */
u32 FUN_003947cc(const char *effectName, s32 owner, u32 kind, f32 x)
{
    BtlEffectEntry *entry = NULL;
    BtlMainState *state;
    s32 side;
    s32 i;

    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    for (i = 0; i < BTL_EFFECT_ENTRIES; i++) {
        char name[0x20] = { 0 };

        textFormatBuffer(name, "%s.eft", s_ef_e_atk01_00436028[i].name);
        if (libc_strcmp(name, effectName) == 0) {
            entry = &s_ef_e_atk01_00436028[i];
            break;
        }
    }
    state = btlGetMainState();
    switch (kind) {
    case 2:
    case 5:
    case 8:
    case 9:
    case 0xC:
        if (x < -2.965f) {
            side = 5;
        } else if (x < -0.99f) {
            side = 4;
        } else if (x > 2.94f) {
            side = 1;
        } else if (x > 0.965f) {
            side = 2;
        } else {
            side = 3;
        }
        break;
    case 6:
    case 7:
    case 0xB:
        side = 3;
        break;
    default: {
        f32 center = g_btlMain->centerX;

        if (x < center + -17.0f) {
            side = 5;
        } else if (x < center + -9.0f) {
            side = 4;
        } else if (x > center + 17.0f) {
            side = 1;
        } else if (x > center + 9.0f) {
            side = 2;
        } else {
            side = 3;
        }
        break;
    }
    }
    if (entry == NULL) {
        return 0;
    }
    if (entry->firstCount != 0) {
        FUN_002505c0(entry->firstHandle, owner, entry->firstCount, 0, 0, side, 0);
    }
    if (entry->secondCount != 0) {
        FUN_002505c0(entry->secondHandle, owner, entry->secondCount, 0, 0, side, 0);
    }
    state->effectValue = entry->value;
    return 1;
}

} /* extern "C" */
