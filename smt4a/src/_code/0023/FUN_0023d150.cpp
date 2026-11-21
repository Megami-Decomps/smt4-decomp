/* NON_MATCHING: retail copies `y` into the texture call's stack slot through s0 and stores the scroll regions straight into the outgoing argument slots; the build spills them. */
#include "camp/CampStateA.h"

extern "C" {
void texDrawTableEntryAtStoredOrigin(u32 style, u32 size, u32 glyph, u32 x, u32 y, u32 flags, s32 first, s32 third);
void uiDrawListScrollBar(u32 context, u32 x, u32 y, u32 size, u32 firstGlyph, u32 secondGlyph, u32 thirdGlyph,
                 u32 leftGlyph, u32 middleGlyph, u32 symbolGlyph, u32 rightGlyph,
                 s32 first, s32 second, s32 third, u32 width, u32 flags);

// Draw the camp list's scroll bar (its thumb, previous and next touch regions) with the glyph set selected by the display mode.
void FUN_0023d150(u32 context, u32 x, u32 y, s32 mode)
{
    CampStateA *camp = g_camp;
    u32 firstGlyph;
    u32 secondGlyph;
    u32 thirdGlyph;
    u32 leftGlyph;
    u32 middleGlyph;
    u32 symbolGlyph;
    u32 rightGlyph;
    u32 numberGlyph;
    if (mode) {
        firstGlyph = 0x41c;
        secondGlyph = 0x41d;
        thirdGlyph = 0x41e;
        leftGlyph = 0x418;
        middleGlyph = 0x41a;
        symbolGlyph = 0x419;
        rightGlyph = 0x41b;
        numberGlyph = 0x5d3;
    } else {
        firstGlyph = 0x423;
        secondGlyph = 0x424;
        thirdGlyph = 0x425;
        leftGlyph = 0x41f;
        middleGlyph = 0x421;
        symbolGlyph = 0x420;
        rightGlyph = 0x422;
        numberGlyph = 0x5d4;
    }
    s32 first = camp->touch.scrollRegions[0];
    s16 second = camp->touch.scrollRegions[1];
    s32 third = camp->touch.scrollRegions[2];
    texDrawTableEntryAtStoredOrigin(2, 20, numberGlyph, x, y, 111, first, third);
    uiDrawListScrollBar(context, x, y, 20, firstGlyph, secondGlyph, thirdGlyph,
                 leftGlyph, middleGlyph, symbolGlyph, rightGlyph,
                 first, second, third, 116, 0);
}
}
