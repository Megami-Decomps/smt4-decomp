/* NON_MATCHING: stores match; retail schedules `mov r0, #0` (the state clear) before the vstmia and uses r1 for the vstmia address, built emits them in the other order */
#include "common.h"

extern "C" {

struct Vec2 {
    Vec2(f32 px, f32 py) : x(px), y(py) {}
    f32 x, y;
};

struct MapIfPanel {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ f32 offset;
    /* 0x34 */ u8 unk34[0x5c - 0x34];
    /* 0x5c */ Vec2 size;
    /* 0x64 */ f32 depth;
    /* 0x68 */ f32 sizeX;
    /* 0x6c */ f32 sizeY;
    /* 0x70 */ f32 unk70;
    /* 0x74 */ f32 unk74;
};

struct MapIf {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s8 enabled;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u32 state;
    /* 0x3c */ u8 unk3c[0x0c];
    /* 0x48 */ MapIfPanel panel;
};

extern MapIf *g_mapIf;

void FUN_003d4ed8(u32 soundId);

/* Switches the map interface on or off; switching on plays the sound and resets the panel geometry. */
void FUN_002d8614(s8 enable)
{
    MapIf *mapIf = g_mapIf;
    MapIfPanel *panel = &mapIf->panel;

    if (mapIf->enabled == enable) {
        return;
    }
    mapIf->enabled = enable;
    if (enable == 0) {
        return;
    }
    FUN_003d4ed8(0x10002ab);
    panel->offset = 0.0f;
    panel->size = Vec2(0.0f, 20.0f);
    panel->depth = 0.0f;
    panel->sizeX = panel->size.x;
    panel->sizeY = 20.0f;
    panel->unk70 = 0.0f;
    panel->unk74 = 0.0f;
    mapIf->state = 0;
}

} /* extern "C" */
