/* NON_MATCHING: retail keeps the unit index in s17 (one vcvt) across all calls, builds the scale table addresses as (step + 3) * 4 instead of folding the +12 into the vldr, and orders the switch targets differently; the arithmetic and calls are the same. */
#include "common.h"

namespace {
/* A battle unit record (only the fields the damage scale reads). */
struct BtlUnitView {
    /* 0x000 */ u8 unk000[0x74];
    /* 0x074 */ s32 affinity[12];      /* indexed by attack kind (7..11 used): -3..3 resist/weak steps */
    /* 0x0a4 */ s32 buffA4;
    /* 0x0a8 */ s32 buffA8;
    /* 0x0ac */ s32 buffAC;
    /* 0x0b0 */ s32 buffB0;
    /* 0x0b4 */ s32 buffB4;
    /* 0x0b8 */ s32 buffB8;
    /* 0x0bc */ s32 buffBC;
    /* 0x0c0 */ u8 unk0c0[0x11c - 0xc0];
    /* 0x11c */ s32 buff11C;
    /* 0x120 */ u8 unk120[0x274 - 0x120];
    /* 0x274 */ u16 statusFlags;
};

struct BtlCommandView {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 kind;
    /* 0x04 */ u8 unk04[0x30];
};
}

extern "C" {
extern const f32 DAT_0057a6a8[7];       /* damage scale by affinity step, attacker side */
extern const f32 DAT_0057a6c4[7];       /* damage scale by affinity step, defender side */
extern u32 g_btlScriptUnit;
void *btlGetMainState(void);
BtlUnitView *FUN_003f0e20(void *state, s32 unit);
u32 *btlUnitGet(u32 handle);
void FUN_003e8bb0(BtlCommandView *command, void *state, BtlUnitView *unit);

/* The damage multiplier of attack kind `kind` (7..11) against `unit`: the affinity step scale combined with
   the attacker's and defender's buffs. */
f32 FUN_004bf6e0(s32 kind, f32 unitValue)
{
    s32 unit = (s32)unitValue;
    f32 scale = 1.0f;
    BtlUnitView *defender = FUN_003f0e20(btlGetMainState(), unit);
    s32 step = 0;
    if (defender != NULL) {
        step = defender->affinity[kind];
    }
    s32 inverse = -step;
    BtlUnitView *target = FUN_003f0e20(btlGetMainState(), unit);
    switch (kind) {
    case 7:
    case 8:
        scale = DAT_0057a6a8[step + 3];
        if ((target->statusFlags & 0x10) != 0) {
            scale *= 1.2f;
            BtlUnitView *other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffBC > 0) {
                scale *= 10.0f;
            }
        }
        break;
    case 9: {
        scale = DAT_0057a6c4[inverse + 3];
        BtlUnitView *other = FUN_003f0e20(btlGetMainState(), unit);
        s32 weak = 0;
        if (other != NULL) {
            weak = other->buffA4;
        }
        scale = DAT_0057a6c4[3 - weak] * scale;
        break;
    }
    case 10:
        scale = DAT_0057a6a8[inverse + 3];
        break;
    case 11: {
        scale = DAT_0057a6c4[step + 3];
        BtlUnitView *other = FUN_003f0e20(btlGetMainState(), unit);
        s32 strong = 0;
        if (other != NULL) {
            strong = other->buffA4;
        }
        scale = DAT_0057a6c4[strong + 3] * scale;
        break;
    }
    }
    if ((*btlUnitGet(g_btlScriptUnit) & 0x200) == 0) {
        if (kind == 8) {
            BtlUnitView *other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffB0 > 0) {
                scale *= 2.2f;
            }
            other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffA8 > 0) {
                scale *= 1.25f;
            }
            other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffB8 > 0) {
                scale *= 3.0f;
            }
            other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buff11C > 0) {
                BtlCommandView command;
                FUN_003e8bb0(&command, btlGetMainState(), target);
                if (command.kind == 2 || command.kind == 3 || command.kind == 20) {
                    scale *= 2.2f;
                }
            }
        } else if (kind == 7) {
            BtlUnitView *other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffAC > 0) {
                scale *= 2.2f;
            }
            other = FUN_003f0e20(btlGetMainState(), unit);
            if (other != NULL && other->buffB4 > 0) {
                scale *= 3.0f;
            }
        }
    }
    return scale;
}

} /* extern "C" */
