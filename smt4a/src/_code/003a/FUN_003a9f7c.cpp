/* NON_MATCHING: armcc peels the i <= 3 loop guard on iteration 0. */
#include "battle/BtlMainAccess.h"
#include "camp/RenderCtxA.h"
#include "battle/btlUI.h"
#include "battle/btlMain.h"
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"

struct Mask64 {
    u64 mask;
};

extern "C" {
extern const Mask64 DAT_00573c70;
s8 recordGetActive(const UiSpriteState *sprite);
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 horizontalOffset);

/* Draw the active panel frame and its four entry sprites at the current eye's parallax. */
void FUN_003a9f7c(BtlUiObjAA *object)
{
    /* A typed overlay would raise the byte-only shared widget's alignment. */
    struct PanelView {
        u8 unk0000[0x20F0];
        UiSpriteState anchor;
        UiSpriteState frame;
        UiSpriteState entries[4];
        u8 unk2438[4];
        u32 enabled;
    };
    typedef char PanelViewOffsets[offsetof(PanelView, frame) == 0x217C &&
        offsetof(PanelView, entries) == 0x2208 && offsetof(PanelView, enabled) == 0x243C ? 1 : -1];
    PanelView *panel = reinterpret_cast<PanelView *>(object);
    if (panel->enabled == 0) {
        return;
    }
    BtlMainStateA *state = btlGetMainState();
    if ((DAT_00573c70.mask & state->stateFlags64.bits) != 0) {
        return;
    }
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    s32 x = vec2GetXInt(&panel->anchor) + parallax;
    for (s32 i = 0; i < 10; ++i) {
        if (i <= 3 && recordGetActive(&panel->frame) != 0) {
            if (i == 0) {
                effectRenderTransformedInstance(&panel->frame, (f32)x);
            }
            effectRenderTransformedInstance(&panel->entries[i], (f32)x);
        }
    }
}
}
