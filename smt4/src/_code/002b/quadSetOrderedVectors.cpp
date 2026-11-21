/* NON_MATCHING: typed vector copies use VFP/block-copy shapes instead of retail's split integer transfers, and the
   preserved-W branch is laid out differently. A C++ function taking the four vectors by value (QuadVector is non-trivial,
   so they arrive as pointers to the callers' copies): its symbol is _Z21quadSetOrderedVectors10QuadVectorS_S_S_ii
   (build/w59_names.txt renames the plain placeholder). */
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern const s32 DAT_004091d0[5][4];
extern QuadVectorState g_quadColorState;
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
} /* extern "C" */

/* Reorders four quad vectors, optionally replacing their W components with the global default. */
void quadSetOrderedVectors(QuadVector first, QuadVector second, QuadVector third, QuadVector fourth, s32 mode,
    s32 preserveW)
{
    QuadVector vectors[4];
    s32 order[5][4];
    __aeabi_memcpy4(order, DAT_004091d0, sizeof(order));
    if (preserveW) {
        vectors[0] = first;
        vectors[1] = second;
        vectors[2] = third;
        vectors[3] = fourth;
    } else {
        vectors[0].xyz = first.xyz;
        vectors[0].w = g_quadColorState.defaultW;
        vectors[1].xyz = second.xyz;
        vectors[1].w = g_quadColorState.defaultW;
        vectors[2].xyz = third.xyz;
        vectors[2].w = g_quadColorState.defaultW;
        vectors[3].xyz = fourth.xyz;
        vectors[3].w = g_quadColorState.defaultW;
    }
    g_quadColorState.mode = mode;
    g_quadColorState.corners[0] = vectors[order[mode][0]];
    g_quadColorState.corners[1] = vectors[order[mode][1]];
    g_quadColorState.corners[2] = vectors[order[mode][2]];
    g_quadColorState.corners[3] = vectors[order[mode][3]];
    g_quadColorState.dirty = 1;
}

