/* NON_MATCHING: 6 lines: in case 7/8, retail schedules mov r2, #628 and add r1, r5, #3 interleaved before vldr s16, [r0] and tst r2, #16; the remaining 170 of 176 rows match byte-for-byte. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

namespace {
/* A battle unit record (only the fields the damage scale reads). */
struct BtlUnitBuffView {
    /* 0x000 */ u8 unk000[0x74];
    /* 0x074 */ s32 stats[43];       /* 0..11: affinity by attack kind; 12..42: buff counters */
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
void btlEntryBuildSummary(BtlCommandView *command, void *state, BtlUnitBuffView *unit);

static __inline s32 getUnitStat(s32 unit, s32 index)
{
    BtlUnitBuffView *entry = (BtlUnitBuffView *)btlMainFindEntryByListedId(btlGetMainState(), unit);
    if (entry != NULL) {
        return entry->stats[index];
    }
    return 0;
}

static __inline f32 lookupScale(const f32 *table, s32 step)
{
    s32 index = step + 3;
    return table[index];
}

/* The damage multiplier of attack kind `kind` (7..11) against `unitValue`: the affinity step scale combined with
 * the attacker's and defender's buffs. */
f32 FUN_004bf6e0(s32 kind, f32 unitValue)
{
    f32 scale = 1.0f;
    s32 step = getUnitStat((s32)unitValue, kind);
    s32 inverse = -step;
    BtlUnitBuffView *target = (BtlUnitBuffView *)btlMainFindEntryByListedId(btlGetMainState(), (s32)unitValue);
    switch (kind) {
    case 7:
    case 8:
        scale = lookupScale(DAT_0057a6a8, step);
        if ((target->statusFlags & 0x10) != 0) {
            scale *= 1.2f;
            if (getUnitStat((s32)unitValue, 18) > 0) {
                scale *= 10.0f;
            }
        }
        break;
    case 10:
        scale = lookupScale(DAT_0057a6a8, inverse);
        break;
    case 11:
        scale = lookupScale(DAT_0057a6c4, step);
        scale = lookupScale(DAT_0057a6c4, getUnitStat((s32)unitValue, 12)) * scale;
        break;
    case 9:
        scale = lookupScale(DAT_0057a6c4, inverse);
        scale = lookupScale(DAT_0057a6c4, -getUnitStat((s32)unitValue, 12)) * scale;
        break;
    }
    if ((*(u32 *)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit) & 0x200) == 0) {
        if (kind == 8) {
            if (getUnitStat((s32)unitValue, 15) > 0) {
                scale *= 2.2f;
            }
            if (getUnitStat((s32)unitValue, 13) > 0) {
                scale *= 1.25f;
            }
            if (getUnitStat((s32)unitValue, 17) > 0) {
                scale *= 3.0f;
            }
            if (getUnitStat((s32)unitValue, 42) > 0) {
                BtlCommandView command;
                btlEntryBuildSummary(&command, btlGetMainState(), target);
                if (command.kind == 2 || command.kind == 3 || command.kind == 20) {
                    scale *= 2.2f;
                }
            }
        } else if (kind == 7) {
            if (getUnitStat((s32)unitValue, 14) > 0) {
                scale *= 2.2f;
            }
            if (getUnitStat((s32)unitValue, 16) > 0) {
                scale *= 3.0f;
            }
        }
    }
    return scale;
}

} /* extern "C" */
