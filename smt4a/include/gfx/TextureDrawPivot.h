#ifndef SMT4A_GFX_TEXTUREDRAWPIVOT_H
#define SMT4A_GFX_TEXTUREDRAWPIVOT_H

#include "common.h"

/* A sprite's draw pivot: FUN_00281000 fills it and FUN_0032cdc8 copies all 12 bytes into its draw request. The
 * anchor coordinates are written (and read) only for anchor mode 3; other callers leave them unset. */
struct TextureDrawPivot {
    /* 0x00 */ f32 depth;
    /* 0x04 */ s16 horizontalMode;
    /* 0x06 */ s16 verticalMode;
    /* 0x08 */ u16 x; /* kept only when horizontalMode is 3 */
    /* 0x0A */ u16 y; /* kept only when verticalMode is 3 */
};
typedef char TextureDrawPivotSizeCheck[sizeof(TextureDrawPivot) == 0xC ? 1 : -1];

extern "C" {
/* Draws texture `image` of table `table` at (x, y) with the stored origin and the given pivot. */
void FUN_0032cdc8(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags, const TextureDrawPivot *pivot);
}

#endif
