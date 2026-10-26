/* NON_MATCHING: retail exits with bxls before pushing registers (shrink-wrapped empty-count guard) and uses r0/r1 differently; armcc here pushes first. The owner's group/params pair is now a sub-block so the writeback load matches. */
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
