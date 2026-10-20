/* NON_MATCHING: register allocation (retail addresses the cursor flags through a base register at menu+0x600 and keeps constants in different registers) */
#include "shard/S1ListMenu.h"

extern "C" {

f32 FUN_00233218(void);
s32 vec2GetXInt(Vec2Int *v);
s32 vec2GetYInt(Vec2Int *v);
void FUN_002bf288(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
void FUN_002bf380(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
f32 *FUN_002bf4f8(s32 group, s32 id);
void FUN_002bf538(f32 alpha);
s32 FUN_0029e924(ListMenu *menu);
s32 FUN_00233718(ListMenu *menu);
s32 FUN_00240d5c(ListMenu *menu);
u32 FUN_0023360c(ListMenu *menu);
void FUN_0022ade4(ListMenu *menu, s32 index, s32 value, s32 marked, s32 size);
void FUN_0029ee6c(u8 *highlight, u32 color);

/* Draw the list menu: its frame and icons at the menu position, every entry except the cursor's, then
 * the cursor entry highlighted. */
void FUN_003bb780(ListMenu *menu)
{
    if (menu->active == 0 || menu->hidden != 0) {
        return;
    }

    f32 savedAlpha = FUN_00233218();
    Vec2Int *position = &menu->position;
    s32 x = vec2GetXInt(position);
    s32 y = vec2GetYInt(position);

    FUN_002bf288(2, 42, 31, x, y, 31);
    FUN_002bf288(2, 42, 32, x, y, 31);

    s16 *frame = (s16 *)FUN_002bf4f8(42, 33);
    s16 offsetX = frame[4];
    s16 offsetY = frame[5];
    s32 iconX = vec2GetXInt(position) + offsetX;
    s32 iconY = vec2GetYInt(position) + offsetY;

    FUN_002bf538(1.0f);
    FUN_002bf380(2, 42, menu->iconA, iconX, iconY, 31);
    if (menu->iconB != -1) {
        FUN_002bf538(menu->iconBAlpha);
        FUN_002bf380(2, 42, menu->iconB, iconX, iconY, 32);
    }

    s32 first = FUN_0029e924(menu);
    s32 count = FUN_00233718(menu);

    for (s32 i = 0; i < count; i++) {
        if (FUN_00240d5c(menu) != i) {
            FUN_0022ade4(menu, i, first + i, 0, 36);
        }
    }

    u8 *highlight;

    if (menu->hasCursor != 0) {
        s32 marked = menu->cursorMarked == 0 ? 1 : 2;
        u32 value = FUN_0023360c(menu);

        FUN_0022ade4(menu, FUN_00240d5c(menu), value, marked, 37);
        highlight = &menu->entries[FUN_0023360c(menu)]->highlight;
    } else {
        u32 value = FUN_0023360c(menu);

        FUN_0022ade4(menu, FUN_00240d5c(menu), value, 0, 36);
        highlight = NULL;
    }
    FUN_0029ee6c(highlight, 0x323232FF);
    FUN_002bf538(savedAlpha);
}

} /* extern "C" */
