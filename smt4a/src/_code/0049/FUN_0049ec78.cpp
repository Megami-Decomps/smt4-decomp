/* NON_MATCHING: 100 lines (176 vs 176 rows): 44-byte frame, signed ble load guards, and both drawCursorIcon bodies match instruction-for-instruction; only register numbers shift by 1. */
#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "common.h"
#include "shard/TextureDrawCall.h"
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

void efctSetSpeed(f32 speed);

/* Returns true when the texture group is unused or already loaded. */
static __inline bool isIconGroupLoaded(s32 group)
{
    if (group > 0) {
        return asdTMTexTableNodeIsLoaded(0x33, group) != 0;
    }
    return true;
}

/* Draws one cursor icon using its table anchor (or a fallback marker entry for anchors 0xB6/0x93). */
static __inline void drawCursorIcon(s32 group, s32 id, s32 shiftedX, s32 y, f32 speed, s32 z, u32 markerB6, u32 marker93)
{
    if (group > 0) {
        IconTexture *texture = (IconTexture *)asdTMTexTableEntryAt(0x33, id + group * 1000);
        if (texture->anchor->kind == 0xb6) {
            texture = (IconTexture *)asdTMTexTableEntryAt(0x33, markerB6);
        } else if (texture->anchor->kind == 0x93) {
            texture = (IconTexture *)asdTMTexTableEntryAt(0x33, marker93);
        }
        s32 drawX = texture->x + shiftedX;
        s32 drawY = texture->y + y;
        efctSetSpeed(speed);
        texDrawTableEntryAtStoredOrigin(2, 0x33, id + group * 1000, drawX, drawY, z);
        efctSetSpeed(1.0f);
    }
}

/* Draws the two icons selected by the cursor and the marker below them, shifted by the stereo parallax. */
void FUN_0049ec78(IconPanel *panel, IconCursor *cursor, s32 x, s32 y, f32 speed, s32 z)
{
    s32 index = cursor->first;
    if (!isIconGroupLoaded(panel->data->icons[0].group) ||
        !isIconGroupLoaded(panel->data->icons[1].group)) {
        return;
    }
    s32 shiftedX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    drawCursorIcon(panel->data->icons[index].group, panel->data->icons[index].index, shiftedX, y, speed, z + 5, 0x27, 0x2f);
    index = cursor->second;
    drawCursorIcon(panel->data->icons[index].group, panel->data->icons[index].index, shiftedX, y, speed, z + 5, 0x28, 0x30);
    efctSetSpeed(1.0f);
    u16 state = panel->data->state;
    if (state != 3 && state != 9 && state != 11) {
        s32 markerX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        efctSetSpeed(speed);
        texDrawTableEntryAtStoredOrigin(2, 0x33, 0x29, markerX, y, z + 10);
        efctSetSpeed(1.0f);
    }
}
}
