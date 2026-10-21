/* NON_MATCHING: widget/opacity addressing, coordinate lifetimes and GPR allocation differ, and retail retains two opacity-load NOPs; optimization flags may explain them. */
#include "shard/S1ListPanel.h"

struct PartyComparisonWidget {
    u8 position[0x20];
    f32 opacity;
    u8 unk24[0x68];
};
struct PartyComparisonScene {
    u8 unk0000[0x73c];
    PartyComparisonWidget widgets[9];
    u8 unk0c28[0x690];
    u8 origin[0x20];
    u8 unk12d8[0x1d84];
    s32 selected;
    u8 unk3060[0x14];
    s16 values[4];
    u8 unk307c[8];
    u8 forceFull;
    u8 unk3085[0x7ff];
    s32 offsetX;
    s32 offsetY;
    u8 unk388c[0x40];
    u8 faded[4];
    u8 unk38d0;
    u8 suppressed[4];
    u8 unk38d5[0x2050];
    u8 hidden[4];
};

extern "C" {
void efctSetSpeed(f32);
s32 vec2GetXInt(const void *);
s32 vec2GetYInt(const void *);
SpriteInfo *FUN_002bf4f8(u32, s32);
void FUN_002bf288(u32, u32, s32, s32, s32, s32);

void campDrawPartyComparisonIndicators(PartyComparisonScene *scene, s32 forceFull)
{
    if (scene->forceFull)
        forceFull = 1;
    s32 offsetX = scene->offsetX;
    s32 offsetY = scene->offsetY;
    for (s32 row = 0; row < 4; ++row) {
        if (scene->hidden[row])
            continue;
        if (forceFull == 0 && scene->selected != row)
            efctSetSpeed(0.5f);
        SpriteInfo *sprite = FUN_002bf4f8(0x15, row + 0x36);
        s32 localX = vec2GetXInt(scene->widgets[row].position) + sprite->x;
        s32 localY = vec2GetYInt(scene->widgets[row].position) + sprite->y;
        s32 x = vec2GetXInt(scene->origin) + localX + offsetX;
        s32 y = vec2GetYInt(scene->origin) + localY + offsetY;
        if (!scene->suppressed[row]) {
            if (scene->faded[row])
                efctSetSpeed(scene->widgets[row + 5].opacity);
            if (scene->values[row] < scene->values[scene->selected]) {
                FUN_002bf288(2, 0x15, 0x12, x, y, 0x1f);
                FUN_002bf288(2, 0x15, scene->values[row] + 0x17, x, y, 0x24);
            } else {
                FUN_002bf288(2, 0x15, 0x11, x, y, 0x1f);
                FUN_002bf288(2, 0x15, scene->values[row] + 0x13, x, y, 0x24);
            }
        }
        efctSetSpeed(1.0f);
    }
}
}
