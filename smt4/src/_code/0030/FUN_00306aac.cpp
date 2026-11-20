/* NON_MATCHING: written as its siblings FUN_00316a20/FUN_003078e4: the empty-count exit before the push (bxls), the written-back links pointer and the per-iteration colour address match retail; -1, the halfword index and the colour byte take other registers. */
#include "common.h"
#include "gfx/VertexColor.h"

struct Geometry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ VertexColor *vertices;
};

struct Record {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x28];
};

struct Mesh {
    /* 0x00 */ Record *records;
    /* 0x04 */ Geometry *geometry;
};

struct Info {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

struct MeshLinks {
    /* 0x00 */ Mesh *mesh;
    /* 0x04 */ Info *info;
};

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ MeshLinks links;
};

extern "C" u8 DAT_00472560[4];

/* Gives every vertex the colour (scaled from bytes) and marks every record unused. */
extern "C" void FUN_00306aac(Object *object)
{
    MeshLinks *links = &object->links;
    Mesh *mesh = links->mesh;
    u32 count = links->info->count;
    Record *record = mesh->records;

    for (u32 i = 0; i < count; i++) {
        VertexColor *vertex = &mesh->geometry->vertices[(u16)i];

        const u8 *rgba = DAT_00472560;
        vertex->r = rgba[0] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->g = rgba[1] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->b = rgba[2] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->a = rgba[3] * (1.0f / 255.0f) * (1.0f / 255.0f);
        record->id = -1;
        record++;
    }
}
