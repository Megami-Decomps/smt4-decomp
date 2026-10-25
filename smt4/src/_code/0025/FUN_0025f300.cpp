#include "shard/PlayScene.h"
#include "camp/RenderCtx.h"

struct SpriteInfo;
// Keep the common sprite coordinate prefix without importing a conflicting render-context variant.
struct SceneSpriteCoordinates { u8 prefix[8]; s16 x, y; };
extern "C" {
extern RenderCtx* g_titleScene;
s32 vec2GetXInt(UiSpriteState* animation);
s32 vec2GetYInt(UiSpriteState* animation);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
SpriteInfo* FUN_002bf4f8(u32 table, s32 id);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_002bf288(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);

void FUN_0025f300(PlayScene* work)
{
    if (!work->unk3084 && static_cast<s32>(work->unk305C) <= 3) {
        s32 x = vec2GetXInt(reinterpret_cast<UiSpriteState*>(work->timer));
        s32 y = vec2GetYInt(reinterpret_cast<UiSpriteState*>(work->timer));
        efctSetSpeed(vec2GetSpeed(&work->intro.animation));
        SceneSpriteCoordinates* sprite = reinterpret_cast<SceneSpriteCoordinates*>(
            FUN_002bf4f8(0x15, static_cast<s32>(work->unk305C) + 0x52));
        RenderCtx* context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        FUN_002bf288(2, 0x15, 0x4B, sprite->x + x, sprite->y + y, 0x29);
        FUN_002bf288(2, 0x15, 0x4A, sprite->x + x, sprite->y + y, 0x29);
        FUN_002bf288(2, 0x15, 0x4C, sprite->x + x, sprite->y + y, 0x29);
        FUN_002bf288(2, 0x15, 0x4D, sprite->x + x, sprite->y + y, 0x29);
        context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }
}
}
