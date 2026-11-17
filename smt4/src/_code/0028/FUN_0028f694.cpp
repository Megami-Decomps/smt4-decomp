#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0028.h"
#include "ui/UiSpriteState.h"
#include "camp/CampState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct SpriteInfo;
extern "C" {
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
void texDrawCompositeSprite(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
s32 ifTouchGetSelectionModeForRegion(u32 region);
s32 vec2GetXInt(UiSpriteState* animation);
s32 vec2GetYInt(UiSpriteState* animation);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, u32 enabled);

void FUN_0028f694(s32 x, s32 y, u32 region)
{
    CampState* camp = g_camp;
    efctSetSpeed(vec2GetSpeed(&camp->sprites[3]));
    texDrawCompositeSprite(2, 0x1D, 6, x, y, 0x79);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x429, x, y, 0x7E);
    s32 mode = ifTouchGetSelectionModeForRegion(region);
    if (mode == 1 || mode == 2 || mode == 6) {
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x42B, x, y, 0x83);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x42A, x, y, 0x83);
    }
    TextureTableEntryIV* sprite = asdTMTexTableEntryAt(0x1D, 0x42A);
    s32 markerX = vec2GetXInt(&camp->sprites[2]);
    s32 markerY = vec2GetYInt(&camp->sprites[2]);
    RenderCtx* context = g_titleScene;
    renderStackSet(&context->scissor, 3);
    gxSetMirroredClippedScissor(sprite->x + x, sprite->y + y, sprite->placement->width, sprite->placement->height, 1);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x42C, x + markerX, y + markerY, 0x88);
    context = g_titleScene;
    renderStackSet(&context->scissor, 0);
}
}
