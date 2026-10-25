#include "util/Vec2Fixed.h"
/* NON_MATCHING: dispatch guard peeling, sprite visibility getter, and mask/register loads differ. */
#include "battle/btlUI.h"
#include "battle/btlMain.h"
#include "ui/UiSpriteState.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
extern const u32 DAT_00573c70[2];
extern RenderCtxA* g_renderCtx;
BtlMainStateA* btlGetMainState(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA* context, f32 depth);
void FUN_001634b4(UiSpriteState* sprite, f32 horizontalOffset);

// Draw the active panel frame and its four entry sprites at the current eye's parallax.
void FUN_003a9f7c(BtlUiObjAA* object)
{
    // A typed overlay would raise the byte-only shared widget's alignment.
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
    PanelView* panel = reinterpret_cast<PanelView*>(object);
    if (panel->enabled == 0) {
        return;
    }
    u64 flags = btlGetMainState()->stateFlags64.bits;
    if ((flags & ((u64)DAT_00573c70[0] | ((u64)DAT_00573c70[1] << 32))) != 0) {
        return;
    }
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    s32 x = vec2GetXInt(&panel->anchor) + parallax;
    for (s32 i = 0; i < 10; ++i) {
        if (i <= 3 && panel->frame.visibility.active != 0) {
            if (i == 0) {
                FUN_001634b4(&panel->frame, (f32)x);
            }
            FUN_001634b4(&panel->entries[i], (f32)x);
        }
    }
}
}
