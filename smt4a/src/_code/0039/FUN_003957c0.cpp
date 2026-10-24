/* NON_MATCHING: same loop and arithmetic, but retail shrink-wraps the zero-count exit (bxls lr before the push), reloads the colour table address every iteration and loads the cursor pair with a writeback; registers differ. */
#include "common.h"

struct Obj3957c0Segment {
    s32 id;
    u8 unk04[0x2c];
};

struct Obj3957c0Color {
    f32 r, g, b, a;
};

struct Obj3957c0Geom {
    u8 unk00[4];
    Obj3957c0Color *colors;
};

struct Obj3957c0Block {
    Obj3957c0Segment *segments;
    Obj3957c0Geom *geom;
};

struct Obj3957c0Params {
    u8 unk00[0x38];
    u32 count;
};

struct Obj3957c0 {
    u8 unk00[0x3c];
    Obj3957c0Block *block;
    Obj3957c0Params *params;
};

extern "C" u8 DAT_005c1130[4];

/* Resets every segment's id to -1 and paints every segment colour from the global RGBA bytes. */
extern "C" void FUN_003957c0(Obj3957c0 *obj)
{
    Obj3957c0Block *block = obj->block;
    u32 count = obj->params->count;
    Obj3957c0Segment *segment = block->segments;
    for (u32 i = 0; i < count; i++) {
        Obj3957c0Color *color = &block->geom->colors[(u16)i];
        color->r = DAT_005c1130[0] * 0.003921569f * 0.003921569f;
        color->g = DAT_005c1130[1] * 0.003921569f * 0.003921569f;
        color->b = DAT_005c1130[2] * 0.003921569f * 0.003921569f;
        color->a = DAT_005c1130[3] * 0.003921569f * 0.003921569f;
        segment->id = -1;
        segment++;
    }
}
