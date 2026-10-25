/* NON_MATCHING: typed vector copies use VFP/block-copy shapes instead of retail's split integer transfers, and the preserved-W branch is laid out differently. */
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern const s32 DAT_004091d0[5][4];
extern QuadVectorState DAT_004d4680;
void vectorSetAllOne(QuadVector *);
void *__aeabi_vec_ctor_nocookie_nodtor(QuadVector *, void (*)(QuadVector *), u32 size, u32 count);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

// Reorder four quad vectors, optionally replacing their W components with the global default.
void quadSetOrderedVectors(const QuadVector *a, const QuadVector *b, const QuadVector *c,
                  const QuadVector *d, s32 mode, s32 preserveW)
{
    QuadVector vectors[4];
    __aeabi_vec_ctor_nocookie_nodtor(vectors, vectorSetAllOne, sizeof(QuadVector), 4);
    s32 order[5][4];
    __aeabi_memcpy4(order, DAT_004091d0, sizeof(order));
    if (preserveW) {
        vectors[0] = *a;
        vectors[1] = *b;
        vectors[2] = *c;
        vectors[3] = *d;
    } else {
        vectors[0].xyz = a->xyz;
        vectors[0].w = DAT_004d4680.defaultW;
        vectors[1].xyz = b->xyz;
        vectors[1].w = DAT_004d4680.defaultW;
        vectors[2].xyz = c->xyz;
        vectors[2].w = DAT_004d4680.defaultW;
        vectors[3].xyz = d->xyz;
        vectors[3].w = DAT_004d4680.defaultW;
    }
    DAT_004d4680.mode = mode;
    DAT_004d4680.corners[0] = vectors[order[mode][0]];
    DAT_004d4680.corners[1] = vectors[order[mode][1]];
    DAT_004d4680.corners[2] = vectors[order[mode][2]];
    DAT_004d4680.corners[3] = vectors[order[mode][3]];
    DAT_004d4680.dirty = 1;
}
}
