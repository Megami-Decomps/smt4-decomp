/* NON_MATCHING: retail copies all four vector arguments by value; reconstructing the nontrivial-copy ABI triggers an armcc internal fault. */
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern QuadVectorState g_quadColorState;
void *__aeabi_vec_ctor_nocookie_nodtor(QuadVector *vectors, void (*constructor)(QuadVector *), u32 size, u32 count);
void quadSetOrderedVectors(const QuadVector *first, const QuadVector *second, const QuadVector *third, const QuadVector *fourth, s32 mode, s32 preserveW);

// Set all four quad colors from the supplied RGB value and the default alpha.
void gxSetUniformQuadColors(const QuadVector3 *color)
{
    QuadVector colors[4];
    __aeabi_vec_ctor_nocookie_nodtor(colors, vectorSetAllOne, sizeof(QuadVector), 4);
    colors[0].xyz = *color;
    colors[0].w = g_quadColorState.defaultW;
    colors[1].xyz = *color;
    colors[1].w = g_quadColorState.defaultW;
    colors[2].xyz = *color;
    colors[2].w = g_quadColorState.defaultW;
    colors[3].xyz = *color;
    colors[3].w = g_quadColorState.defaultW;
    quadSetOrderedVectors(&colors[0], &colors[1], &colors[2], &colors[3], 0, 0);
}
}
