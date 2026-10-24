/* NON_MATCHING: same loop; retail tests the count with an unsigned `bxls lr` guard before the push and keeps the index in r1 from the start, this build emits `bxeq lr` and a different register assignment. */
#include "common.h"

struct Vertex {
    /* 0x00 */ f32 r;
    /* 0x04 */ f32 g;
    /* 0x08 */ f32 b;
    /* 0x0C */ f32 a;
};

struct Geometry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Vertex *vertices;
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

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Mesh *mesh;
    /* 0x40 */ Info *info;
};

extern "C" u8 DAT_005c1130[4];

/* Gives every vertex the colour (scaled from bytes) and marks every record unused. */
extern "C" void FUN_00394978(Object *object)
{
    Mesh *mesh = object->mesh;
    Info *info = object->info;
    u32 count = info->count;
    Record *record = mesh->records;
    u32 i;

    if (count == 0) {
        return;
    }
    for (i = 0; i < count; i++) {
        Vertex *vertex = &mesh->geometry->vertices[(u16)i];
        const f32 scale = 1.0f / 255.0f;

        vertex->r = DAT_005c1130[0] * scale * scale;
        vertex->g = DAT_005c1130[1] * scale * scale;
        vertex->b = DAT_005c1130[2] * scale * scale;
        vertex->a = DAT_005c1130[3] * scale * scale;
        record->id = -1;
        record++;
    }
}
