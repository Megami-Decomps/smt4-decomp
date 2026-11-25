/* NON_MATCHING: the selection and empty-row flags exchange registers, and the scrollbar's stack arguments schedule differently. */
#include "camp/CampCec/CampCecView.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/SegmentedTextureBar.h"

extern "C" {
extern CampCecView *g_campCecView;
u32 FUN_0025981c();
CampCecMarkEntryIV *saveGetIndexedMapValue(u32);
void uiDrawPanelWithValue(CampCecViewSlide *, s32, s32, u32, s32);
void FUN_001eb874(u32, CampCecMarkEntryIV *, CampCecViewSlide *, s32, s32, bool);
void FUN_002e15f8(CampCecViewSlide *, s32, s32);
void FUN_002ec0b4(s32, s32);
void campCecViewDrawScrollTrack(const SegmentedTextureBarOrigin *origin, s32 x, s32 y, u32 firstVariant,
                                u32 secondVariant, s32 fillVariant, u32 unused, s32 firstSegment, s32 segmentCount);

/* Draws the StreetPass rows and highlights the selected entry. */
u32 campCecViewDrawCallback()
{
    CampCecView *view = g_campCecView;
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, false));
    u32 headerValue = FUN_0025981c();
    uiDrawPanelWithValue(&view->rowSlides[0], 0, 0, headerValue, 0);
    for (s32 row = 0; row < CAMP_CEC_VIEW_ROWS; ++row) {
        CampCecMarkEntryIV *record = saveGetIndexedMapValue(view->top + row);
        bool empty = record->count == 0;
        bool selected = view->selected == view->top + row;
        const TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x39, row + 0x96);
        s32 y = layout->y;
        s32 x = layout->x;
        FUN_001eb874(view->handle[row], record, &view->rowSlides[row + 1], x, y, empty);
        if (selected && view->rowSlides[3].offset == 0)
            FUN_002e15f8(&view->rowSlides[4], x, y);
        if ((record->flags & 0x10) && view->rowSlides[3].offset == 0)
            FUN_002ec0b4(x, y);
    }
    u32 flags = view->navigationFlags;
    campCecViewDrawScrollTrack((const SegmentedTextureBarOrigin *)&view->rowSlides[3], 0, 0,
                               flags & 1, (flags & 2) >> 1, (flags & 4) >> 2, view->selected, view->top, view->usedCount);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    return 0;
}
} /* extern "C" */
