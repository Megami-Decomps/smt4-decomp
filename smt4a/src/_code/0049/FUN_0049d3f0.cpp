#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"
#include "ui/HowToScreen.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern const char DAT_0052cf04[]; // event/HowTo/HowTo.mbm
extern const char DAT_0052cee8[]; // event/HowTo/HowToHelp.mbm
void sysMemClear(void *memory, u32 size);
u32 spriteHandleCreate(u32 argument);
void FUN_0049dd74(HowToScreenWork *work);
void asdLoadFileAsyncSimple(const char *path, void **result, u32 flags);
void asdTMTexTableLoadTmx(u32 table, u32 mode);
void paramsClearPacket(UiResourceParameters *parameters);

} /* extern "C" */

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sHowToPositionKeys[] = {
    {30, 0, 0, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {300, 0, -60, 0, 40, 1, 0},
};
static const UiSpriteScalarKey sHowToAlphaKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {0.0f, 1.0f, 30, 0, 0},
    {1.0f, 0.0f, 30, 0, 0},
};
static const SpriteAnimationCommand sHowToCommands[] = {
    {0, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {1, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 5, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {

// Load tutorial message/texture resources and initialize the four tutorial UI sprites.
void FUN_0049d3f0(HowToScreenWork *work)
{
    work->messages[0] = NULL;
    work->messages[1] = NULL;
    work->unk010[0] = 0;
    work->unk010[1] = 0;
    sysMemClear(work->resetState, sizeof(work->resetState));
    work->display.selection = 0;
    for (s32 i = 0; i < 3; ++i) {
        u32 handle = spriteHandleCreate(0);
        work->display.handles[i] = handle;
        uiObjectSetColorRgb(handle, ~0u);
    }
    FUN_0049dd74(work);
    asdLoadFileAsyncSimple(DAT_0052cf04, &work->messages[0], 0);
    asdLoadFileAsyncSimple(DAT_0052cee8, &work->messages[1], 0);
    asdTMTexTableLoadTmx(51, 0);
    asdTMTexLoadMainHeap(51, 0);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, sHowToPositionKeys, sizeof(sHowToPositionKeys), sHowToAlphaKeys,
               sizeof(sHowToAlphaKeys), NULL, 0, NULL, 0, sHowToCommands, sizeof(sHowToCommands));
    uiSpriteStateInitFromSource(&work->sprites[0], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[0], 0);
    uiSpriteStateInitFromSource(&work->sprites[1], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[1], 0);
    uiSpriteStateInitFromSource(&work->sprites[2], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[2], 2);
    uiSpriteStateInitFromSource(&work->sprites[3], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[3], 3);
}
}
