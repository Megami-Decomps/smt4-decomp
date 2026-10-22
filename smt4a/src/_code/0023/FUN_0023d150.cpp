/* NON_MATCHING: integer glyph arguments and floating-point spill registers are allocated differently. */
#include "common.h"

struct CampStatusTripletView {
    u8 unk0000[0x1b34];
    s16 first; // 0x1b34
    s16 second; // 0x1b36
    s16 third; // 0x1b38
};
extern "C" {
extern CampStatusTripletView *g_camp;
void FUN_001835b4(u32 style, u32 size, u32 glyph, u32 x, u32 y, u32 flags, s32 first, s32 third);
void FUN_00344cd0(u32 context, u32 x, u32 y, u32 size, u32 firstGlyph, u32 secondGlyph, u32 thirdGlyph,
                 u32 leftGlyph, u32 middleGlyph, u32 symbolGlyph, u32 rightGlyph,
                 s32 first, s32 second, s32 third, u32 width, u32 flags);

// Draw the camp status triplet with the glyph set selected by its display mode.
void FUN_0023d150(u32 context, u32 x, u32 y, s32 mode)
{
    u32 firstGlyph = mode ? 0x41c : 0x423;
    u32 secondGlyph = mode ? 0x41d : 0x424;
    u32 thirdGlyph = mode ? 0x41e : 0x425;
    u32 symbolGlyph = mode ? 0x419 : 0x420;
    u32 numberGlyph = mode ? 0x5d3 : 0x5d4;
    s32 first = g_camp->first;
    s16 second = g_camp->second;
    s32 third = g_camp->third;
    FUN_001835b4(2, 20, numberGlyph, x, y, 111, first, third);
    FUN_00344cd0(context, x, y, 20, firstGlyph, secondGlyph, thirdGlyph,
                 firstGlyph - 4, firstGlyph - 2, symbolGlyph, firstGlyph - 1,
                 first, second, third, 116, 0);
}
}
