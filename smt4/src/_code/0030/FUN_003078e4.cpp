/* NON_MATCHING: retail exits with bxls before pushing registers and uses r0/r1 differently; armcc here pushes first. */
#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Vertex {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[0x2c];
};

struct ColorTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Vec4 *colors;
};

struct VertexGroup {
    /* 0x00 */ Vertex *vertices;
    /* 0x04 */ ColorTable *table;
};

struct GroupParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

struct GroupOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ VertexGroup *group;
    /* 0x40 */ GroupParams *params;
};

extern "C" {

extern u8 DAT_00472560[4];

/* Virtual reset: gives every colour the default RGBA (scaled to 0..1) and marks every vertex index unused. */
void FUN_003078e4(GroupOwner *owner)
{
    VertexGroup *group = owner->group;
    u32 count = owner->params->count;
    Vertex *vertex = group->vertices;
    for (u32 i = 0; i < count; i++) {
        Vec4 *color = &group->table->colors[(u16)i];
        color->x = DAT_00472560[0] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->y = DAT_00472560[1] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->z = DAT_00472560[2] * (1.0f / 255.0f) * (1.0f / 255.0f);
        color->w = DAT_00472560[3] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->index = -1;
        vertex++;
    }
}

} /* extern "C" */
