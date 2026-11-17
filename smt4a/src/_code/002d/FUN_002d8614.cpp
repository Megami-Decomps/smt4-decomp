/* NON_MATCHING: stores match; retail schedules `mov r0, #0` (the state clear) before the vstmia and uses r1 for the vstmia address, built emits them in the other order */
#include "map/MapIfGlobals.h"

extern "C" {

struct Vec2 {
    Vec2(f32 px, f32 py) : x(px), y(py) {}
    f32 x, y;
};

/* The primary record as the panel animation reads it. */
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

void soundActorStartOnFreeChannel(u32 soundId);

/* Switches the map interface on or off; switching on plays the sound and resets the panel geometry. */
void FUN_002d8614(s8 enable)
{
    MapIfStateA *mapIf = g_mapIf.state;
    MapIfPanel *panel = reinterpret_cast<MapIfPanel *>(&mapIf->primary);

    if (mapIf->unk34 == enable) {
        return;
    }
    mapIf->unk34 = enable;
    if (enable == 0) {
        return;
    }
    soundActorStartOnFreeChannel(0x10002ab);
    panel->offset = 0.0f;
    panel->size = Vec2(0.0f, 20.0f);
    panel->depth = 0.0f;
    panel->sizeX = panel->size.x;
    panel->sizeY = 20.0f;
    panel->unk70 = 0.0f;
    panel->unk74 = 0.0f;
    mapIf->unk38 = 0;
}

} /* extern "C" */
