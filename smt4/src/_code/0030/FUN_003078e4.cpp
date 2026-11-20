/* NON_MATCHING: the empty-count exit before the push (bxls) and the per-iteration colour address now match retail; retail sets the index register before loading the count (the build: after, from a moved load order) and allocates -1, the halfword index and the colour byte to r6/r5/r7 where armcc uses r5/r7/r4. */
#include "common.h"
#include "gfx/Vec4.h"

struct ColoredIndexedVertex {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[0x2c];
};

struct ColorTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Vec4 *colors;
};

struct VertexGroup {
    /* 0x00 */ ColoredIndexedVertex *vertices;
    /* 0x04 */ ColorTable *table;
};

struct GroupParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

struct GroupRefs {
    /* 0x00 */ VertexGroup *group;
    /* 0x04 */ GroupParams *params;
};

struct GroupOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ GroupRefs refs;
};

extern "C" {

extern u8 DAT_00472560[4];

/* Virtual reset: gives every colour the default RGBA (scaled to 0..1) and marks every vertex index unused. */
void FUN_003078e4(GroupOwner *owner)
{
    GroupRefs *refs = &owner->refs;
    VertexGroup *group = refs->group;
    u32 count = refs->params->count;
    ColoredIndexedVertex *vertex = group->vertices;
    for (u32 i = 0; i < count; i++) {
        Vec4 *color = &group->table->colors[(u16)i];
        const u8 *rgba = DAT_00472560;
        color->x = rgba[0] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->y = rgba[1] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->z = rgba[2] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->w = rgba[3] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->index = -1;
        vertex++;
    }
}

} /* extern "C" */
