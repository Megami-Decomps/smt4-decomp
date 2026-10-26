#include "ui/TransientSpriteList.h"
#include "camp/RenderCtx.h"
#include "map/mapDepart.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern GameState g_gameState;
void pairCopy(const Point2 *source, Point2 *destination);
u32 FUN_002c5d80(u32 mode, u32 flags);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 state);
void renderCtxPopState(RenderCtx *context, s32 stack);
void FUN_002bed3c(void);
void drawSetColorFromRGBA8(u32 color);
void effectSetByteSpeed(u32 alpha);
void FUN_002b0750(s32 layer, u32 resource, u32 sprite, s32 x, s32 y,
                  u32 scaleX, u32 scaleY, s32 tag);

/* Draw the visible entries relative to the list's copied origin. */
void uiDrawTransientSprites(TransientSpriteList *list)
{
    Point2 origin;
    pairCopy(&list->origin, &origin);
    renderStackPushIndexed(g_titleScene, 3, FUN_002c5d80(1, 0));
    for (s32 index = 0; index < list->count; ++index) {
        const TransientSpriteEntry *entry = &list->entries[index];
        if (entry->visible != 0 || g_gameState.spriteVisibility.forceVisible != 0) {
            drawSetColorFromRGBA8(entry->color);
            effectSetByteSpeed(entry->color & 0xFF);
            FUN_002b0750(9, entry->resource, entry->sprite,
                static_cast<s32>(static_cast<f32>(entry->x) + origin.x),
                static_cast<s32>(static_cast<f32>(entry->y) + origin.y),
                entry->scaleX, entry->scaleY, 11);
        }
    }
    FUN_002bed3c();
    renderCtxPopState(g_titleScene, 3);
}
}
