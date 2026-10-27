/* NON_MATCHING: retail hoists the zero constant into fp and keeps `10 == category` as `mov r1,#10; cmp r1, r0 lsr #8`; the value-box float conversions are scheduled differently and the sprite is re-extended (uxth) before the draw call. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "code/Code0019.h"

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
    u16 spriteId;       // 0x9c
};

extern "C" {

void efctSetSpeed(f32 speed);
LayoutEntry* asdTMTexTableEntryAt(u32 group, u32 index);
IconInfo* FUN_00184310(u32 code);
void FUN_00169a1c(s32 sprite, s32 x, s32 y, s32 z);
const char* FUN_003f74a8(u32 id, PanelRecord* record);
void textFormatBuffer(char* out, const char* format, ...);
void FUN_003f533c(u32 id, s32 x, s32 y, s32 z, u32 flags, s32 a, s32 b, s32 c, s32 d, s32 e, f32 scale);

// The icon sprite of a record category, or 0 when it has none.
static __inline u16 panelIconSprite(u32 category)
{
    if (category == 10) {
        return 0;
    }
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
    IconInfo* icon = FUN_00184310(slot < 0 ? 0 : category == 9 ? 0x29d : FUN_0019e52c((u16)slot));
    if (icon == NULL) {
        return 0;
    }
    return icon->spriteId;
}
// Draws the panel row for one record at (x, y, z): frame, category icon, name and value.
void FUN_003f6424(f32 scale, u32 id, PanelRecord* record, u32 flags, s32 x, s32 y, s32 z)
{
    efctSetSpeed(scale);
    FUN_001835b4(2, 0x31, 0x7b, x, y, z);
    FUN_001835b4(2, 0x31, 0x7c, x, y, z);
    LayoutEntry* frame = asdTMTexTableEntryAt(0x31, 0x7d);
    s32 iconX = frame->x + x;
    s32 iconY = frame->y + y;

    u16 sprite = panelIconSprite(record->kindWord >> 8);
    if (sprite == 0) {
        FUN_001835b4(2, 0x31, 4, iconX, iconY, z + 5);
    } else {
        FUN_00169a1c(sprite, iconX, iconY, z + 5);
    }

    LayoutEntry* nameBox = asdTMTexTableEntryAt(0x31, 0x7e);
    s32 nameX = nameBox->x + x;
    s32 nameY = nameBox->y + y;
    char text[64];
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
