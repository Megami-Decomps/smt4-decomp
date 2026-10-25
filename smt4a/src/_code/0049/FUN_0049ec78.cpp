#include "gfx/StereoParallax.h"
/* NON_MATCHING: retail hoists the marker ids 0x27/0x2f/0x28/0x30 into registers/stack (44-byte frame) and tests the u16 icon groups with a signed ble where this build emits beq; register allocation and the stm/strd argument packing differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* One texture id: group * 1000 + index. */
struct IconRef {
    /* 0x0 */ u16 group;
    /* 0x2 */ u16 index;
    /* 0x4 */ u16 unk4[3];
};

struct IconAnchor {
    /* 0x0 */ s16 kind;
};

struct IconTexture {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ IconAnchor *anchor;
};

struct IconPanelData {
    /* 0x00 */ u16 state;
    /* 0x02 */ u8 unk02[0x34];
    /* 0x36 */ IconRef icons[2];
};

struct IconPanel {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ IconPanelData *data;
};

struct IconCursor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 first;
    /* 0x14 */ s32 second;
};

extern "C" {
extern RenderCtxA *g_renderCtx;

IconTexture *FUN_001834a4(u32 file, s32 index);
void efctSetSpeed(f32 speed);

/* Draws the two icons selected by the cursor and the marker below them, shifted by the stereo parallax. */
void FUN_0049ec78(IconPanel *panel, IconCursor *cursor, s32 x, s32 y, f32 speed, s32 z)
{
    s32 index = cursor->first;
    if ((panel->data->icons[0].group > 0 && !asdTMTexTableNodeIsLoaded(0x33, panel->data->icons[0].group)) ||
        (panel->data->icons[1].group > 0 && !asdTMTexTableNodeIsLoaded(0x33, panel->data->icons[1].group))) {
        return;
    }
    s32 shiftedX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 group = panel->data->icons[index].group;
    s32 id = panel->data->icons[index].index;
    if (group > 0) {
        IconTexture *texture = FUN_001834a4(0x33, id + group * 1000);
        if (texture->anchor->kind == 0xb6) {
            texture = FUN_001834a4(0x33, 0x27);
        } else if (texture->anchor->kind == 0x93) {
            texture = FUN_001834a4(0x33, 0x2f);
        }
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x33, id + group * 1000, texture->x + shiftedX, texture->y + y, z + 5);
        efctSetSpeed(1.0f);
    }
    index = cursor->second;
    group = panel->data->icons[index].group;
    id = panel->data->icons[index].index;
    if (group > 0) {
        IconTexture *texture = FUN_001834a4(0x33, id + group * 1000);
        if (texture->anchor->kind == 0xb6) {
            texture = FUN_001834a4(0x33, 0x28);
        } else if (texture->anchor->kind == 0x93) {
            texture = FUN_001834a4(0x33, 0x30);
        }
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x33, id + group * 1000, shiftedX + texture->x, texture->y + y, z + 5);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(1.0f);
    u16 state = panel->data->state;
    if (state != 3 && state != 9 && state != 11) {
        s32 markerX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x33, 0x29, markerX, y, z + 10);
        efctSetSpeed(1.0f);
    }
}
}
