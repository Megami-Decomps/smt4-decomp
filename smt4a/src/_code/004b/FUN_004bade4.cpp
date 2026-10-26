#include "util/MathFunctions.h"
/* NON_MATCHING: retail hoists the 0x900 and 0xf88 sub-struct bases into registers (r9/sl, 8-byte frame); member layout of the menu object is not recovered. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "shard/W5_W5Match2_ScalarGetters.h"
#include "code/Code002a.h"

namespace {
struct SpriteInfo { u8 unk00[8]; s16 x; s16 y; };
struct SlotMenu {
    u8 unk00[8];
    s32 active;          // 0x008
    u8 unk0C[0xBC];
    u8 position[0x8];    // 0x0C8 (vec2)
    u8 unkD0[0x71C];
    s32 slotValue[0x80]; // 0x7EC
    s8 unk9EC;           // 0x9EC hidden
    s8 hasSelection;     // 0x9ED
    s8 selectionMode;    // 0x9EE
    u8 unk9EF[0x599];
    struct { u8 unk00[0x20]; f32 speed; } accent; // 0xF88
    u8 unkFAC[0x70];
    s32 spriteBase;      // 0x101C
    u8 unk1020[4];
    s32 spriteAccent;    // 0x1024
};
}

extern "C" {
extern int vec2GetYInt(void *);
extern void efctSetSpeed(f32);
extern f32 vec2GetSpeed(const void *animation);
extern f32 jobGetScalarValue(void);
extern SpriteInfo *asdTMTexTableEntryAt(u32, u32);
extern void FUN_00164b5c(s32, s32, u32, s32, s32, s32);
extern void FUN_0019de98(s32, u32);
extern s32 rangeGetMinimumLimit(SlotMenu *);
extern s32 FUN_0031d174(SlotMenu *);
extern void FUN_004ba354(SlotMenu *, s32, s32, s32, s32);
extern s32 flaggedValueHolderGetTotal(SlotMenu *);

/* Draw the slot menu: frame sprites, per-slot cells and the cursor. */
void FUN_004bade4(SlotMenu *menu)
{
    if (menu->active != 0 && menu->unk9EC == 0) {
        f32 savedSpeed = jobGetScalarValue();
        void *pos = menu->position;
        s32 x = vec2GetXInt(pos);
        s32 y = vec2GetYInt(pos);
        FUN_001835b4(2, 0x1f, 0x1f, x, y, 0x1f);
        FUN_001835b4(2, 0x1f, 0x20, x, y, 0x1f);
        SpriteInfo *info = asdTMTexTableEntryAt(0x1f, 0x21);
        s32 dx = info->x;
        s32 dy = info->y;
        s32 sx = vec2GetXInt(pos) + dx;
        s32 sy = dy + vec2GetYInt(pos);
        efctSetSpeed(1.0f);
        FUN_00164b5c(2, 0x1f, menu->spriteBase, sx, sy, 0x1f);
        if (menu->spriteAccent != -1) {
            efctSetSpeed(vec2GetSpeed(&menu->accent));
            FUN_00164b5c(2, 0x1f, menu->spriteAccent, sx, sy, 0x20);
        }
        s32 first = FUN_002a482c(menu);
        s32 count = rangeGetMinimumLimit(menu);
        for (s32 i = 0; i < count; i++) {
            if (FUN_0031d174(menu) != i) {
                FUN_004ba354(menu, i, first + i, 0, 0x24);
            }
        }
        s32 color;
        if (menu->hasSelection != 0) {
            s32 mode = (menu->selectionMode == 0) ? 1 : 2;
            s32 total = flaggedValueHolderGetTotal(menu);
            FUN_004ba354(menu, FUN_0031d174(menu), total, mode, 0x25);
            color = menu->slotValue[flaggedValueHolderGetTotal(menu)] + 0x80;
        } else {
            s32 total = flaggedValueHolderGetTotal(menu);
            FUN_004ba354(menu, FUN_0031d174(menu), total, 0, 0x24);
            color = 0;
        }
        FUN_0019de98(color, 0xf4f4f4ff);
        efctSetSpeed(savedSpeed);
    }
}
}
