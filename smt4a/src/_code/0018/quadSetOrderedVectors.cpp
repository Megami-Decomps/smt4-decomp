/* NON_MATCHING: typed vector copies use VFP/block-copy shapes instead of retail's split integer transfers, and the preserved-W branch is laid out differently. */
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern const s32 DAT_0053cd64[5][4];
extern QuadVectorState DAT_006306f8;
void vectorSetAllOne(QuadVector *);
void *FUN_002f5020(QuadVector *, void (*)(QuadVector *), u32 size, u32 count);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);

// Reorder four quad vectors, optionally replacing their W components with the global default.
void quadSetOrderedVectors(const QuadVector *a, const QuadVector *b, const QuadVector *c,
                  const QuadVector *d, s32 mode, s32 preserveW)
{
    QuadVector vectors[4];
    FUN_002f5020(vectors, vectorSetAllOne, sizeof(QuadVector), 4);
    s32 order[5][4];
    rt_memcpy_w(order, DAT_0053cd64, sizeof(order));
    if (preserveW) {
        vectors[0] = *a;
        vectors[1] = *b;
        vectors[2] = *c;
        vectors[3] = *d;
    } else {
        vectors[0].xyz = a->xyz;
        vectors[0].w = DAT_006306f8.defaultW;
        vectors[1].xyz = b->xyz;
        vectors[1].w = DAT_006306f8.defaultW;
        vectors[2].xyz = c->xyz;
        vectors[2].w = DAT_006306f8.defaultW;
        vectors[3].xyz = d->xyz;
        vectors[3].w = DAT_006306f8.defaultW;
    }
    DAT_006306f8.mode = mode;
    DAT_006306f8.corners[0] = vectors[order[mode][0]];
    DAT_006306f8.corners[1] = vectors[order[mode][1]];
    DAT_006306f8.corners[2] = vectors[order[mode][2]];
    DAT_006306f8.corners[3] = vectors[order[mode][3]];
    DAT_006306f8.dirty = 1;
}
}
