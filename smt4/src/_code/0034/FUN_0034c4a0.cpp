/* NON_MATCHING: compiler unrolls the two-corner-set loop instead of retaining retail's indexed loop. */
#include "common.h"

struct MirroredQuadVertex { f32 x, y, z; u8 unk0c[8]; };
struct MirroredQuad { MirroredQuadVertex vertices[4]; };
struct MirroredQuadExtent { u8 unk00[0x10]; f32 x, y; u8 unk18[0x10]; };
struct MirroredQuadOwner {
    u32 unk00;
    MirroredQuad *quads;
    u8 unk08[0x14];
    MirroredQuadExtent *extents;
};

// Set the four signed corner combinations for each of the two extent records.
extern "C" void FUN_0034c4a0(MirroredQuadOwner *owner)
{
    for (s32 i = 0; i < 2; ++i) {
        owner->quads[i].vertices[0].x = -owner->extents[i].x;
        owner->quads[i].vertices[0].y = owner->extents[i].y;
        owner->quads[i].vertices[0].z = 0.0f;
        owner->quads[i].vertices[1].x = -owner->extents[i].x;
        owner->quads[i].vertices[1].y = -owner->extents[i].y;
        owner->quads[i].vertices[1].z = 0.0f;
        owner->quads[i].vertices[2].x = owner->extents[i].x;
        owner->quads[i].vertices[2].y = owner->extents[i].y;
        owner->quads[i].vertices[2].z = 0.0f;
        owner->quads[i].vertices[3].x = owner->extents[i].x;
        owner->quads[i].vertices[3].y = -owner->extents[i].y;
        owner->quads[i].vertices[3].z = 0.0f;
    }
}
