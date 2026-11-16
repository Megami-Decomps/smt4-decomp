/* NON_MATCHING: shrink-wrapped zero-count exit and pool order now match retail (twin body of FUN_003ad97c); remaining: the prologue load order (retail zeroes the index before reading the params) and the loop register assignment (r4-r7 roles). */
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
    for (u32 i = 0; i < count; i++, segment++) {
        const f32 scale = 0.003921569f;  /* 1/255 */
        const u8 *bytes = DAT_005c1130;
        Obj3957c0Color *color = &block->geom->colors[(u16)i];
        color->r = bytes[0] * scale * scale;
        color->g = bytes[1] * scale * scale;
        color->b = bytes[2] * scale * scale;
        color->a = bytes[3] * scale * scale;
        segment->id = -1;
    }
}
