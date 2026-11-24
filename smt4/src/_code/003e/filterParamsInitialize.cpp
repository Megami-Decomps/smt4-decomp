/* NON_MATCHING: 270 lines (258 by shape). The filter parameter blocks are addressed from retail's four pool words (0x433e70, 0x433e78, 0x433ec0, 0x433f0c) and the header words are 64-bit as retail stores them. Retail clears the 0x433e78 header with one stm, and sets each curve's ends through the curve's address in r0 and a copy in r4 (`add r4, r0, #0`) with single vstr stores, where this build folds the curve into the block base and pairs the end points into vstmia. */
#include "common.h"
#include <stddef.h>

extern "C" {

/* One gradient/fade parameter record (0x28 bytes): three 2D points, a packed mode word and a
 * range pair. */
typedef struct FadeParams {
    /* 0x00 */ f32 start[2];
    /* 0x08 */ f32 end[2];
    /* 0x10 */ f32 mid[2];
    /* 0x18 */ u32 mode;
    /* 0x1C */ u8 unk1c[4];
    /* 0x20 */ f32 range[2];
} FadeParams;

/* A one-curve filter's parameters (0x40 bytes: filterCreateQuad, filterCreate4Poly). */
typedef struct FadeQuadParams {
    /* 0x00 */ FadeParams curve;
    /* 0x28 */ u8 unk28[0x18];
} FadeQuadParams;

/* A two-curve filter's parameters (0x5C bytes: filterCreateDoubleQuad). */
typedef struct FadeDoubleParams {
    /* 0x00 */ FadeParams first;
    /* 0x28 */ FadeParams second;
    /* 0x50 */ u8 unk50[0xC];
} FadeDoubleParams;

/* The quad filter at 0x433e80 and the word pair before it. */
typedef struct FadeQuadHeader {
    /* 0x00 */ s64 header;
    /* 0x08 */ FadeQuadParams quad;
} FadeQuadHeader;

/* filterCreateXPoly's filter parameters (0x4C bytes): its curve sits behind a 0x10-byte header. */
typedef struct FadeOffsetParams {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ FadeParams curve;
    /* 0x38 */ u8 unk38[0x14];
} FadeOffsetParams;

/* The filter parameters from 0x433f0c on, in filterCreateByKind's order. */
typedef struct FadeParamTable {
    /* 0x000 */ FadeQuadParams poly;      /* filterCreate4Poly */
    /* 0x040 */ FadeQuadParams quadA;
    /* 0x080 */ FadeDoubleParams pair;    /* filterCreateDoubleQuad */
    /* 0x0DC */ FadeQuadParams quadB;
    /* 0x11C */ FadeQuadParams quadC;
    /* 0x15C */ FadeQuadParams quadD;
    /* 0x19C */ FadeQuadParams quadE;
    /* 0x1DC */ FadeQuadParams quadF;
    /* 0x21C */ FadeQuadParams quadG;
} FadeParamTable;
typedef char FadeParamTableLayoutCheck[sizeof(FadeParams) == 0x28 && sizeof(FadeOffsetParams) == 0x4C &&
    offsetof(FadeParamTable, pair) == 0x80 && offsetof(FadeParamTable, quadB) == 0xDC &&
    offsetof(FadeParamTable, quadG) == 0x21C ? 1 : -1];

extern s64 DAT_00433e70;
extern FadeQuadHeader DAT_00433e78;
extern FadeOffsetParams DAT_00433ec0;
extern FadeParamTable DAT_00433f0c;

u32 packNibblesAndByte(u32 a, u32 b, u32 c);

/* Sets a curve to the straight line from (0, 0) to (1, 1). */
static __inline void fadeCurveSetLinear(FadeParams *curve)
{
    curve->start[0] = 0.0f;
    curve->start[1] = 0.0f;
    curve->end[0] = 1.0f;
    curve->end[1] = 1.0f;
}

/* Fills the fade parameter table: twelve records that all start from the unit square (0,0)-(1,1)
 * except the second, plus their packed mode words and range pairs. */
void filterParamsInitialize(void)
{
    DAT_00433e70 = -1;
    DAT_00433e78.header = 0;
    fadeCurveSetLinear(&DAT_00433e78.quad.curve);
    DAT_00433e78.quad.curve.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433e78.quad.curve.range[0] = 0.0f;
    DAT_00433e78.quad.curve.range[1] = 0.002f;

    DAT_00433ec0.curve.start[0] = 0.4140f;
    DAT_00433ec0.curve.start[1] = 0.0f;
    DAT_00433ec0.curve.end[0] = 0.0f;
    DAT_00433ec0.curve.end[1] = 1.0f;
    DAT_00433ec0.curve.mid[0] = 0.8280f;
    DAT_00433ec0.curve.mid[1] = 1.0f;
    DAT_00433ec0.curve.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433ec0.curve.range[0] = 0.0001f;
    DAT_00433ec0.curve.range[1] = 0.0005f;

    fadeCurveSetLinear(&DAT_00433f0c.poly.curve);
    DAT_00433f0c.poly.curve.mode = packNibblesAndByte(6, 1, 0);

    fadeCurveSetLinear(&DAT_00433f0c.quadA.curve);
    DAT_00433f0c.quadA.curve.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f0c.quadA.curve.range[0] = -0.07f;
    DAT_00433f0c.quadA.curve.range[1] = 0.04f;

    fadeCurveSetLinear(&DAT_00433f0c.pair.first);
    DAT_00433f0c.pair.first.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f0c.pair.first.range[0] = 0.0f;
    DAT_00433f0c.pair.first.range[1] = 0.001f;

    fadeCurveSetLinear(&DAT_00433f0c.pair.second);
    DAT_00433f0c.pair.second.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f0c.pair.second.range[0] = 0.0f;
    DAT_00433f0c.pair.second.range[1] = 0.004f;

    fadeCurveSetLinear(&DAT_00433f0c.quadB.curve);
    DAT_00433f0c.quadB.curve.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433f0c.quadB.curve.range[0] = 0.0f;
    DAT_00433f0c.quadB.curve.range[1] = 0.0f;

    fadeCurveSetLinear(&DAT_00433f0c.quadC.curve);
    DAT_00433f0c.quadC.curve.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433f0c.quadC.curve.range[0] = 0.0f;
    DAT_00433f0c.quadC.curve.range[1] = 0.0f;

    fadeCurveSetLinear(&DAT_00433f0c.quadD.curve);
    DAT_00433f0c.quadD.curve.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f0c.quadD.curve.range[0] = 0.0f;
    DAT_00433f0c.quadD.curve.range[1] = 0.0f;

    fadeCurveSetLinear(&DAT_00433f0c.quadE.curve);
    DAT_00433f0c.quadE.curve.mode = packNibblesAndByte(5, 0, 1);
    DAT_00433f0c.quadE.curve.range[0] = 0.0f;
    DAT_00433f0c.quadE.curve.range[1] = 0.0f;

    fadeCurveSetLinear(&DAT_00433f0c.quadF.curve);
    DAT_00433f0c.quadF.curve.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433f0c.quadF.curve.range[0] = 0.0f;
    DAT_00433f0c.quadF.curve.range[1] = 0.0f;

    fadeCurveSetLinear(&DAT_00433f0c.quadG.curve);
    DAT_00433f0c.quadG.curve.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f0c.quadG.curve.range[0] = 0.0f;
    DAT_00433f0c.quadG.curve.range[1] = 0.0f;
}

}
