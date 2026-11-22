/* NON_MATCHING: register allocation and scheduling: retail materialises 0xFFFFFFFF in r2 before the clear-mask test (and derives the 0xFFFF compare from it), loads the clear mask as one pair, and reloads the fade step after restarting it; control flow, tint table and the channel fade arithmetic match. */
#include "common.h"

/* The battle effect settings block (g_battleEffectSettings): only the fields the status tint reads. */
struct BattleEffectTintSettings {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 fadeFrames;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 defaultColor;
    /* 0x20 */ u8 unk20[0x48];
    /* 0x68 */ u64 clearMask;
};

/* A battle unit's status flags. */
struct BattleTintUnit {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x26C];
    /* 0x274 */ u16 statusMask;
};

/* The tint state of one status icon. */
struct StatusTintRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x16];
    /* 0x6A */ s16 unitIndex;
    /* 0x6C */ s32 variant;
    /* 0x70 */ u8 unk70[4];
    /* 0x74 */ u32 color;
    /* 0x78 */ u8 unk78[0x10];
    /* 0x88 */ s32 step;
    /* 0x8C */ u8 unk8C[8];
    /* 0x94 */ u32 fromColor;
    /* 0x98 */ u32 toColor;
    /* 0x9C */ u32 current;
};

extern "C" {
extern BattleEffectTintSettings g_battleEffectSettings;
BattleTintUnit *btlMainFindEntryByListedId(void *owner, s32 unitIndex);

/* Advances the tint of a status icon: picks the color of the unit's current status and fades toward it,
 * then steps on to the next active status once the fade has held. */
void FUN_004cb394(void *owner, StatusTintRecord *record)
{
    s32 fadeFrames = g_battleEffectSettings.fadeFrames;
    if ((record->flags & 2) == 0) {
        return;
    }
    BattleTintUnit *unit = btlMainFindEntryByListedId(owner, record->unitIndex);
    if (unit == NULL) {
        return;
    }
    if ((unit->flags & g_battleEffectSettings.clearMask) == 0 ||
        record->variant == 0xFFFF) {
        record->color = 0xFFFFFFFF;
        return;
    }
    for (u32 i = 0; i < 14; i++) {
        if (record->current == 0 && (unit->statusMask & (1 << i)) != 0) {
            record->current = i;
            break;
        }
    }
    u32 status = record->current;
    u32 target;
    if (status == 7) {
        target = 0x52DEE7FF;
    } else if (status == 5) {
        target = 0xB252CEFF;
    } else if (status == 6) {
        target = 0xF721F9FF;
    } else if (status == 8) {
        target = 0xEFD629FF;
    } else if (status == 9) {
        target = 0x7E620CFF;
    } else if (status == 3) {
        target = 0xFF4000FF;
    } else if (status == 11) {
        target = 0xFF0055FF;
    } else if (status == 12) {
        target = 0x124FD8FF;
    } else if (status == 13) {
        target = 0x6B7296FF;
    } else {
        target = g_battleEffectSettings.defaultColor;
    }
    if (record->toColor != target) {
        record->fromColor = record->color;
        record->toColor = target;
        record->step = 0;
    }
    if (record->step < fadeFrames) {
        f32 progress = (f32)(record->step + 1) / (f32)fadeFrames;
        u32 from = record->fromColor;
        record->step++;
        s32 toRed = target >> 24;
        s32 toGreen = (target & 0xFF0000) >> 16;
        s32 toBlue = (target & 0xFF00) >> 8;
        s32 toAlpha = target & 0xFF;
        s32 fromRed = from >> 24;
        s32 fromGreen = (from & 0xFF0000) >> 16;
        s32 fromBlue = (from & 0xFF00) >> 8;
        s32 fromAlpha = from & 0xFF;
        s32 red = (s32)((f32)(toRed - fromRed) * progress) + fromRed;
        s32 green = (s32)((f32)(toGreen - fromGreen) * progress) + fromGreen;
        s32 blue = (s32)((f32)(toBlue - fromBlue) * progress) + fromBlue;
        s32 alpha = (s32)((f32)(toAlpha - fromAlpha) * progress) + fromAlpha;
        record->color = (red << 24) + (green << 16) + (blue << 8) + alpha;
        return;
    }
    record->color = target;
    record->step++;
    if ((f32)fadeFrames + 20.0f + 4.0f < (f32)record->step) {
        u32 next = status + 1;
        do {
            if ((unit->statusMask & (1 << next)) != 0) {
                record->current = next;
                return;
            }
            next++;
            if (next > 13)
                next = 0;
        } while (status != next);
    }
}

}
