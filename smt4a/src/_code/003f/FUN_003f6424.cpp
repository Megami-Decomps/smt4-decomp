/* NON_MATCHING: readable rewrite compiles (171 vs 170 rows); retail spills the float scale and register args on entry (push {r0-r3}, vpush {d0}) with different register allocation */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "shard/FUN_0019e52c.h"

// Layout rectangle looked up by (group, index).
struct LayoutEntry {
    u8 unk00[8];
    s16 x;      // 0x08
    s16 y;      // 0x0a
};

// Demon/skill record shown in the panel: only the fields used here.
struct PanelRecord {
    u8 unk00[2];
    u16 kindWord;       // 0x02: high byte = category
    u8 unk04[4];
};

struct IconInfo {
    u8 unk00[0x9c];
    s16 spriteId;       // 0x9c
};

extern "C" {

void efctSetSpeed(f32 speed);
LayoutEntry* asdTMTexTableEntryAt(u32 group, u32 index);
IconInfo* FUN_00184310(u32 code);
void FUN_00169a1c(s32 sprite, s32 x, s32 y, s32 z);
const char* FUN_003f74a8(u32 id, PanelRecord* record);
void textFormatBuffer(char* out, const char* format, ...);
void FUN_003f533c(u32 id, s32 x, s32 y, s32 z, u32 flags, s32 a, s32 b, s32 c, s32 d, s32 e, f32 scale);

// Draws the panel row for one record at (x, y, z): frame, category icon, name and value.
void FUN_003f6424(f32 scale, u32 id, PanelRecord* record, u32 flags, s32 x, s32 y, s32 z)
{
    efctSetSpeed(scale);
    FUN_001835b4(2, 0x31, 0x7b, x, y, z);
    FUN_001835b4(2, 0x31, 0x7c, x, y, z);
    LayoutEntry* frame = asdTMTexTableEntryAt(0x31, 0x7d);
    s32 iconX = frame->x + x;
    s32 iconY = frame->y + y;

    u32 category = record->kindWord >> 8;
    if (category != 10) {
        s32 slot;
        switch (category) {
        case 0: slot = 0xae; break;
        case 1: slot = 0xb2; break;
        case 2: slot = 0xb0; break;
        case 3: slot = 0xb1; break;
        case 4: slot = 0xb3; break;
        case 5: slot = 5; break;
        case 6: slot = 0xba; break;
        case 7: slot = 0xb9; break;
        case 8: slot = 0xaf; break;
        case 9: slot = 0xbb; break;
        default: slot = -1; break;
        }
        u32 code = 0;
        if (slot >= 0) {
            if (category == 9) {
                code = 0x29d;
            } else {
                code = FUN_0019e52c(slot);
            }
        }
        IconInfo* icon = FUN_00184310(code);
        s16 sprite = 0;
        if (icon != NULL) sprite = icon->spriteId;
        if (icon != NULL && sprite != 0) {
            FUN_00169a1c(sprite, iconX, iconY, z + 5);
        } else {
            FUN_001835b4(2, 0x31, 4, iconX, iconY, z + 5);
        }
    } else {
        FUN_001835b4(2, 0x31, 4, iconX, iconY, z + 5);
    }

    LayoutEntry* nameBox = asdTMTexTableEntryAt(0x31, 0x7e);
    s32 nameX = nameBox->x + x;
    s32 nameY = nameBox->y + y;
    char text[92];
    textFormatBuffer(text, "%s", FUN_003f74a8(id, record));
    textDrawString(2, 0xffffffff, text, (f32)nameX, (f32)nameY, (f32)(0xfb - z) * 0.00390625f, 0.0f, scale);

    LayoutEntry* valueBox = asdTMTexTableEntryAt(0x31, 0x83);
    s32 valueX = valueBox->x + x;
    s32 valueY = valueBox->y + y;
    textDrawString(2, 0xff, reinterpret_cast<const char*>(record) + 4, (f32)valueX, (f32)valueY,
                 (f32)(0xfb - z) * 0.00390625f, 0.0f, scale);
    FUN_003f533c(id, x, y, z + 5, flags, 0x84, 0x85, 0x86, 0xff, 0, scale);
}

} /* extern "C" */
