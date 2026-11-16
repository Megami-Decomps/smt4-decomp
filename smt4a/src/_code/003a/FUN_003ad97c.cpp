/* NON_MATCHING: shrink-wrapped zero-count exit, pointer-walked entries and pool order now match retail; remaining: the prologue load order (retail zeroes the index before reading the source) and the loop register assignment (r4-r7 roles). */
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
    u32 count = object->source->count;
    Entry003ad97c *entry = table->entries;

    for (u32 i = 0; i < count; i++, entry++) {
        const f32 scale = 0.003921569f;
        const u8 *bytes = DAT_005c1130;
        Color4003ad97c *color = &table->colors->colors[(u16)i];
        color->r = (f32)bytes[0] * scale * scale;
        color->g = (f32)bytes[1] * scale * scale;
        color->b = (f32)bytes[2] * scale * scale;
        color->a = (f32)bytes[3] * scale * scale;
        entry->id = -1;
    }
}

} /* extern "C" */
