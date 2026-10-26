/* NON_MATCHING: only vertex 2's (x, y) struct copy differs: retail loads y then x from separately addressed fields into registers before storing both; built copies with a writeback load pair. */
#include "common.h"

struct QuadVec2 { f32 x, y; };
struct MirroredQuadVertex { QuadVec2 position; f32 z; u8 unk0c[8]; };
struct MirroredQuad { MirroredQuadVertex vertices[4]; };
struct MirroredQuadExtent { u8 unk00[0x10]; QuadVec2 half; u8 unk18[0x10]; };
struct MirroredQuadOwner {
    u32 unk00;
    MirroredQuad *quads;
    u8 unk08[0x14];
    MirroredQuadExtent *extents;
};

static __inline void quadVertexSet(f32 x, f32 y, MirroredQuadVertex *vertex)
{
    vertex->position.x = x;
    vertex->position.y = y;
    vertex->z = 0.0f;
}

static __inline void quadVertexCopy(const QuadVec2 *position, MirroredQuadVertex *vertex)
{
    vertex->position = *position;
    vertex->z = 0.0f;
}

// Set the four corners of each of the two extent records.
extern "C" void FUN_0034c4a0(MirroredQuadOwner *owner)
{
    for (s32 i = 0; i < 2; ++i) {
        quadVertexSet(-owner->extents[i].half.x, owner->extents[i].half.y, &owner->quads[i].vertices[0]);
        quadVertexSet(-owner->extents[i].half.x, -owner->extents[i].half.y, &owner->quads[i].vertices[1]);
        quadVertexCopy(&owner->extents[i].half, &owner->quads[i].vertices[2]);
        quadVertexSet(owner->extents[i].half.x, -owner->extents[i].half.y, &owner->quads[i].vertices[3]);
    }
}
