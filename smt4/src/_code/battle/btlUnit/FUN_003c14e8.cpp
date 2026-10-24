/* NON_MATCHING: recovered logic; retail re-reads marker fields after stores and keeps the -1 constant shared with the 0xffff compare, so register allocation and the fade arithmetic scheduling differ. */
#include "common.h"

/* A battle unit; only its flags and the bit set of its selectable slots are read. */
struct BtlUnit {
    u32 flags;              // 0x000 (bit 19: selectable)
    u8 unk004[0x1C2];
    u16 slotMask;           // 0x1C6
};

/* A unit marker that fades between slot colors. */
struct BtlUnitMarker {
    u8 unk00[0x50];
    u32 flags;              // 0x50 (bit 1: active)
    u8 unk54[0xE];
    s16 listedId;           // 0x62
    s32 unitKey;            // 0x64 (0xffff: no unit)
    u8 unk68[4];
    u32 color;              // 0x6C: current ARGB color
    u8 unk70[0x10];
    s32 step;               // 0x80: fade step
    u8 unk84[8];
    u32 fromColor;          // 0x8C
    u32 toColor;            // 0x90
    s32 slot;               // 0x94: selected slot
};

/* Marker fade settings. */
struct BtlMarkerConfig {
    u8 unk00[0xC];
    s32 fadeSteps;          // 0x0C
    u8 unk10[8];
    u32 defaultColor;       // 0x18
};

extern "C" {
extern BtlMarkerConfig DAT_00439ce0;
BtlUnit *btlMainFindEntryByListedId(void *battle, s32 id);

/* Fade a unit marker toward the color of its selected slot; cycle the slot once the fade has run. */
void FUN_003c14e8(void *battle, BtlUnitMarker *marker)
{
    s32 fadeSteps = DAT_00439ce0.fadeSteps;
    if ((marker->flags & 2) == 0) {
        return;
    }
    BtlUnit *unit = btlMainFindEntryByListedId(battle, marker->listedId);
    if (unit == NULL) {
        return;
    }
    if ((unit->flags & 0x80000) == 0 || marker->unitKey == 0xffff) {
        marker->color = 0xffffffff;
        return;
    }
    s32 slot;
    for (u32 bit = 0; bit < 11; bit++) {
        slot = marker->slot;
        if (slot == 0 && (unit->slotMask & (1 << bit)) != 0) {
            marker->slot = bit;
            slot = bit;
            break;
        }
    }
    u32 color;
    if (slot == 7) {
        color = 0x52dee7ff;
    } else if (slot == 5) {
        color = 0xb252ceff;
    } else if (slot == 6) {
        color = 0xf721f9ff;
    } else if (slot == 8) {
        color = 0xefd629ff;
    } else if (slot == 9) {
        color = 0x7e620cff;
    } else {
        color = DAT_00439ce0.defaultColor;
        if (slot == 3) {
            color = 0xff4000ff;
        }
    }
    if (marker->toColor != color) {
        marker->fromColor = marker->color;
        marker->toColor = color;
        marker->step = 0;
    }
    s32 step = marker->step;
    if (step < fadeSteps) {
        f32 t = (f32)(step + 1) / (f32)fadeSteps;
        u32 from = marker->fromColor;
        marker->step = step + 1;
        f32 da = (f32)((s32)(color >> 24) - (s32)(from >> 24));
        f32 dr = (f32)((s32)((color & 0xff0000) >> 16) - (s32)((from & 0xff0000) >> 16));
        f32 db = (f32)((s32)(color & 0xff) - (s32)(from & 0xff));
        f32 dg = (f32)((s32)((color & 0xff00) >> 8) - (s32)((from & 0xff00) >> 8));
        marker->color = (s32)(db * t) + (from & 0xff) +
                        ((from >> 24) + (s32)(da * t)) * 0x1000000 +
                        (((from & 0xff0000) >> 16) + (s32)(dr * t)) * 0x10000 +
                        (((from & 0xff00) >> 8) + (s32)(dg * t)) * 0x100;
        return;
    }
    marker->color = color;
    marker->step = step + 1;
    if ((f32)fadeSteps + 20.0f + 4.0f < (f32)(step + 1)) {
        u32 next = slot + 1;
        do {
            if ((unit->slotMask & (1 << next)) != 0) {
                marker->slot = next;
                return;
            }
            next++;
            if (next >= 11) {
                next = 0;
            }
        } while ((u32)slot != next);
    }
}
}
