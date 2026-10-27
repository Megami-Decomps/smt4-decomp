/* NON_MATCHING: one stack argument (72) is materialised in r0 instead of retail's r2; pool word now matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/HowToScreen.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern const char DAT_0052cf04[]; // event/HowTo/HowTo.mbm
extern const char DAT_0052cee8[]; // event/HowTo/HowToHelp.mbm
extern const HowToDrawTables DAT_0052cd2c = {
    {
        0x0000001e, 0x00000000, 0x00000005, 0x00000000, 0x0000ffe2, 0x00000003,
        0x0000012c, 0x0000ffc4, 0x00010028,
    },
    {
        0x00000000, 0x3f800000, 0x00000005, 0x3f800000, 0x00000000, 0x00000003,
        0x3f800000, 0x3f000000, 0x00000014, 0x3f000000, 0x3f800000, 0x00000028,
        0x00000000, 0x3f800000, 0x0000001e, 0x3f800000, 0x00000000, 0x0000001e,
    },
    {
        0x00000000, 0x00000000, 0xfffffffd, 0x00000000, 0x00000000, 0xfffffffd,
        0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000,
        0xffffffff, 0x00000000, 0x00000001, 0x00000000, 0xfffffffd, 0x00000001,
        0x00000000, 0xfffffffd, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff,
        0xffffffff, 0x00000000, 0xffffffff, 0x00000000, 0xfffffffd, 0x00000000,
        0xfffffffd, 0x00000002, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd,
        0x00000000, 0xfffffffd, 0x00000003, 0x00000000, 0xfffffffd, 0x00000000,
        0xfffffffd, 0x00000000, 0xfffffffd, 0xfffffffe, 0x00000000, 0xfffffffd,
        0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000,
        0xffffffff, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000004,
        0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd,
        0x00000005, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffe, 0x00000000,
        0xfffffffd, 0xfffffffe, 0x00000000, 0xfffffffd, 0x00000000, 0xffffffff,
        0x00000000, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0x00000000,
    },
};
void sysMemClear(void *memory, u32 size);
u32 spriteHandleCreate(u32 argument);
void FUN_0049dd74(HowToScreenWork *work);
void asdLoadFileAsyncSimple(const char *path, void **result, u32 flags);
void asdTMTexTableLoadTmx(u32 table, u32 mode);
void paramsClearPacket(UiResourceParameters *parameters);

void FUN_0014e188(UiSpriteState *sprite, u32 table, u32 argument, UiResourceParameters *parameters, u32 order, f32 scale);

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
        FUN_001527d8(handle, ~0u);
    }
    FUN_0049dd74(work);
    asdLoadFileAsyncSimple(DAT_0052cf04, &work->messages[0], 0);
    asdLoadFileAsyncSimple(DAT_0052cee8, &work->messages[1], 0);
    asdTMTexTableLoadTmx(51, 0);
    asdTMTexLoadMainHeap(51, 0);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, DAT_0052cd2c.first, 36, DAT_0052cd2c.second, 72, 0, 0, 0, 0, DAT_0052cd2c.last, 336);
    FUN_0014e188(&work->sprites[0], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[0], 0);
    FUN_0014e188(&work->sprites[1], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[1], 0);
    FUN_0014e188(&work->sprites[2], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[2], 2);
    FUN_0014e188(&work->sprites[3], 51, 0, &work->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&work->sprites[3], 3);
}
}
