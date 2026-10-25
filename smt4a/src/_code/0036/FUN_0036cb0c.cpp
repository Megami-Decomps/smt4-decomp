/* NON_MATCHING: native mode dispatch and call operands restored; row/base/name lifetimes, zero x-offset and pulse VFP operands differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

struct LayoutEntry {
    u8 unk00[8];
    s16 x;          // 0x08
    s16 y;          // 0x0a
};

extern "C" {

LayoutEntry* asdTMTexTableEntryAt(u32 group, u32 index);
void FUN_00164b5c(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
void efctSetSpeed(f32 speed);
void asdTextDrawDirectoryEntry(u32 text, s32 a, u32 b, s32 c, s32 d, u32 name, s32 index);
const char *FUN_0035aa90(s32 index);
void asdTextFormatStream(u32 text, u32 a, u32 b, u32 c, u32 d, const char *format, ...);
s32 FUN_00344bc8(s32 index);
u32 FUN_0032ecac(s32 bit);

// Draws one list row: the frame and its pulsing highlight, the caption text chosen by `mode`
// and, for mode 1, the extra marker.
void FUN_0036cb0c(u32 text, u32 name, s32 base, s32 offset, s32 row, s32 selected, u32 unused, s32 mode, s32 pulseFrame)
{
    asdTMTexTableEntryAt(0x2e, 0xe0);
    LayoutEntry* frame = asdTMTexTableEntryAt(0x2e, row + 0xe6);
    FUN_00164b5c(2, 0x2e, 0x13, frame->x, frame->y, 0x1f);
    FUN_001835b4(2, 0x2e, 0xdf, frame->x, frame->y, 0x21);
    FUN_001835b4(2, 0x2e, 0xe0, frame->x, frame->y, 0x22);
    FUN_001835b4(2, 0x2e, 0xe1, frame->x, frame->y, 0x22);
    FUN_001835b4(2, 0x2e, 0xe2, frame->x, frame->y, 0x22);
    asdTMTexTableEntryAt(0x2e, 0xe0);

    s32 phase = pulseFrame % 0x28;
    if (phase >= 0x14) phase = 0x28 - phase;
    f32 pulse = (f32)phase / 20.0f;
    efctSetSpeed(pulse);
    FUN_001835b4(2, 0x2e, 0xf9, frame->x, frame->y, 0x22);
    efctSetSpeed(1.0f);
    if (selected != 0) {
        for (s32 index = 0x10d; index < 0x110; index++) {
            FUN_001835b4(2, 0x2e, index, frame->x, frame->y, 0x22);
        }
        efctSetSpeed(pulse);
        FUN_001835b4(2, 0x2e, 0x110, frame->x, frame->y, 0x22);
        efctSetSpeed(1.0f);
    }

    LayoutEntry* caption = asdTMTexTableEntryAt(0x2e, 0xe4);
    s32 index = base + row + offset;
    switch (mode) {
    case 0:
    case 2:
    case 3:
        asdTextDrawDirectoryEntry(text, 3, 0xffffffff, 0, 3, name, index);
        break;
    case 1: {
        const char *source = FUN_0035aa90(index);
        char *converted = FUN_001654f8(source, NULL, 0);
        asdTextFormatStream(text, 3, 0xffffffff, 0, 3, converted);
        break;
    }
    }
    FUN_001835b4(2, 0x2e, 0xe3, frame->x, frame->y, 0xd);
    if (selected != 0) {
        FUN_001527d8(text, 0xf5ff9fff);
    } else {
        FUN_001527d8(text, 0x9fe7ffff);
    }
    FUN_0025cc78(reinterpret_cast<const void *>(text), frame->x + caption->x,
                 frame->y + caption->y, 0x15, 1.0f);
    FUN_001527d8(text, 0xffffffff);
    if (mode == 1) {
        s32 bit = FUN_00344bc8(index);
        if (FUN_0032ecac(bit) != 0) {
            LayoutEntry* marker = asdTMTexTableEntryAt(0x14, 0x597);
            FUN_00164b5c(2, 0x14, 7, frame->x + marker->x, marker->y + frame->y, 0xc);
        }
    }
}

} /* extern "C" */
