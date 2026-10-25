/* NON_MATCHING: controller stays in r5 rather than moving r4 to r5 at the touch-region loop, removing one MOV. */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"

/* The shared controller's padding starts at 0x13; pointer members there would change its alignment. */
struct SaveLoadCleanupBuffersView {
    u8 unk00[0x1c];
    void *first;
    void *second;
    void *third;
    u8 unk28[0x10];
    void *text;
    void *auxiliary;
    ScriptResource *script;
    u8 unk44[0x10];
    void *display;
};
struct SaveLoadTouchRegionsView {
    u8 unk000[0x43c];
    s32 ids[3];
    s32 count;
};
struct HandleRegistry;

extern "C" {
extern HandleRegistry *g_handleRegistry;
void asdMemFree(void *memory);
void scrScriptProcessDestroy(ScriptResource *script);
void asdTMTexTableReleaseNode(s32 table, s32 entry);
void FUN_002c1648(void);
void msgWindowReset(void);
void ptrListRemoveClearOwner(HandleRegistry *registry, u32 handle);
void ifTouchRegionRemove(void);
void fillThreeWordsWithByte(void *words, u32 value);
void FUN_002c85b0(s32 mode);
void FUN_0033440c(u32 value);
void FUN_00333f6c(void);
void FUN_0019de98(s32 layer, u32 color);
void messageMainSetFlag(s32 enabled);

void FUN_00420b70(SaveLoadControllerA *work)
{
    SaveLoadCleanupBuffersView *buffers = (SaveLoadCleanupBuffersView *)work;
    if (buffers->first) {
        asdMemFree(buffers->first);
        buffers->first = 0;
    }
    if (buffers->second) {
        asdMemFree(buffers->second);
        buffers->second = 0;
    }
    if (buffers->third) {
        asdMemFree(buffers->third);
        buffers->third = 0;
    }
    if (buffers->script) {
        scrScriptProcessDestroy(buffers->script);
        buffers->script = 0;
    }
    if (buffers->text) {
        asdMemFree(buffers->text);
        buffers->text = 0;
    }
    if (buffers->auxiliary) {
        asdMemFree(buffers->auxiliary);
        buffers->auxiliary = 0;
    }
    asdTMTexTableReleaseNode(0x2b, 0);
    asdTMTexTableFreeEntry(0x2b);
    FUN_002c1648();
    dataTableFree(0x3d);
    msgWindowReset();
    if (buffers->display) {
        asdMemFree(buffers->display);
        buffers->display = 0;
    }
    if (work->resource) {
        ptrListRemoveClearOwner(g_handleRegistry, work->resource->handle);
        if (work->resource) {
            work->resource->destroy();
            work->resource = 0;
        }
    }
    SaveLoadTouchRegionsView *regions = (SaveLoadTouchRegionsView *)work;
    for (s32 i = 0; i < regions->count; ++i)
        ifTouchRegionRemove();
    regions->count = 0;
    fillThreeWordsWithByte(regions->ids, -1);
    work->pending = 0;
    work->confirmed = 0;
    work->canceled = 0;
    FUN_002c85b0(0);
    FUN_0033440c(-1);
    FUN_00333f6c();
    FUN_0019de98(0, 0xf4f4f4ff);
    messageMainSetFlag(1);
}
}
