/* NON_MATCHING: retail returns before pushing registers when the count is zero (shrink-wrapped) and keeps the loop in r0-r7; built pushes first. */
#include "common.h"

struct Color4003ad97c {
    /* 0x0 */ f32 r;
    /* 0x4 */ f32 g;
    /* 0x8 */ f32 b;
    /* 0xc */ f32 a;
};

/* One 0x30-byte entry; its first word is an id, -1 when unused. */
struct Entry003ad97c {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x2c];
};

struct Colors003ad97c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Color4003ad97c *colors;
};

struct Table003ad97c {
    /* 0x00 */ Entry003ad97c *entries;
    /* 0x04 */ Colors003ad97c *colors;
};

struct Source003ad97c {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

struct Object003ad97c {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Table003ad97c *table;
    /* 0x40 */ Source003ad97c *source;
};

extern "C" {

extern u8 DAT_005c1130[4];

/* Resets every entry the source counts to unused (-1) and sets its color from the four bytes at DAT_005c1130, scaled by 1/255 twice. */
void FUN_003ad97c(Object003ad97c *object)
{
    Table003ad97c *table = object->table;
    Source003ad97c *source = object->source;
    Entry003ad97c *entries = table->entries;
    u32 count = source->count;

    for (u32 i = 0; i < count; i++) {
        Color4003ad97c *color = &table->colors->colors[(u16)i];
        color->r = (f32)DAT_005c1130[0] * 0.003921569f * 0.003921569f;
        color->g = (f32)DAT_005c1130[1] * 0.003921569f * 0.003921569f;
        color->b = (f32)DAT_005c1130[2] * 0.003921569f * 0.003921569f;
        color->a = (f32)DAT_005c1130[3] * 0.003921569f * 0.003921569f;
        entries[i].id = -1;
    }
}

} /* extern "C" */
