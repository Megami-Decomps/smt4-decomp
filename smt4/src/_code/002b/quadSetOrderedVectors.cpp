/* NON_MATCHING: typed vector copies use VFP/block-copy shapes instead of retail's split integer transfers, and the preserved-W branch is laid out differently. */
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern const s32 DAT_004091d0[5][4];
extern QuadVectorState g_quadColorState;
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
        vectors[0].w = g_quadColorState.defaultW;
        vectors[1].xyz = b->xyz;
        vectors[1].w = g_quadColorState.defaultW;
        vectors[2].xyz = c->xyz;
        vectors[2].w = g_quadColorState.defaultW;
        vectors[3].xyz = d->xyz;
        vectors[3].w = g_quadColorState.defaultW;
    }
    g_quadColorState.mode = mode;
    g_quadColorState.corners[0] = vectors[order[mode][0]];
    g_quadColorState.corners[1] = vectors[order[mode][1]];
    g_quadColorState.corners[2] = vectors[order[mode][2]];
    g_quadColorState.corners[3] = vectors[order[mode][3]];
    g_quadColorState.dirty = 1;
}
}
