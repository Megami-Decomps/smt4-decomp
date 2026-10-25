/* NON_MATCHING: phase-store tail merging and alternate-page flag address formation differ from retail. */
#include "common.h"

struct PageAnimationTrack {
    u8 point[0x8c];
};
struct AnimatedPage {
    u8 unk0000[0x14];
    u32 state;             /* 0x0014 */
    u32 phase;             /* 0x0018 */
    u8 unk001c[4];
    u8 selector[0xa8];     /* 0x0020 */
    u8 position[0x14];     /* 0x00c8 */
    u8 animation[0x20];    /* 0x00dc */
    PageAnimationTrack tracks[10]; /* 0x00fc */
    u8 unk0674[0xa200];
    s16 track;             /* 0xa874 */
    u8 alternate;          /* 0xa876 */
};
struct PageSelectionGlobals {
    u32 unk00;
    s32 selection;
};

extern "C" {
extern PageSelectionGlobals g_animatedPageSelection;
void entryDispatchUpdate(void *animation, s32 track);
s32 vec2GetYInt(const void *point);
s32 vec2GetXInt(const void *point);
void pointConvertToFloat(void *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(void *animation);
s32 objectGetIndexedSignedFlag(void *animation, s32 track);
void FUN_004a1958(AnimatedPage *page);
s32 FUN_002a482c(void *selector);
void FUN_004a3e04(AnimatedPage *page);
void FUN_0032cfe0(AnimatedPage *page);

// Animate out, toggle the page contents, then animate back in.
void uiAnimatedPageToggleStep(AnimatedPage *page)
{
    entryDispatchUpdate(page->animation, page->track);
    const void *point = page->tracks[page->track].point;
    s32 y = vec2GetYInt(point);
    s32 x = vec2GetXInt(point);
    pointConvertToFloat(page->position, x, y);
    if (page->phase == 0) {
        page->track = 9;
        uiSpriteBankApplyPreset(page->animation);
        page->phase = 1;
        return;
    }
    if (objectGetIndexedSignedFlag(page->animation, page->track) && page->phase == 1) {
        page->phase = 2;
    } else if (objectGetIndexedSignedFlag(page->animation, page->track) && page->phase == 2) {
        page->alternate = !page->alternate;
        FUN_004a1958(page);
        g_animatedPageSelection.selection = FUN_002a482c(page->selector) + 1;
        FUN_004a3e04(page);
        FUN_0032cfe0(page);
        page->track = 8;
        uiSpriteBankApplyPreset(page->animation);
        page->phase = 3;
        return;
    } else if (objectGetIndexedSignedFlag(page->animation, page->track) && page->phase == 3) {
        page->state = 2;
        page->phase = 0;
    }
}
}
