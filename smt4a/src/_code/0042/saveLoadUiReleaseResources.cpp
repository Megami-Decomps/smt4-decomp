#include "saveLoadUI/SaveLoadControllerA.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"
#include "shard/Shard0050.h"

/* The shared controller's padding starts at 0x13; pointer members there would change its alignment. */
struct SaveLoadCleanupBuffersView {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ void *first;
    /* 0x20 */ void *second;
    /* 0x24 */ void *third;
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ void *text;
    /* 0x3C */ void *auxiliary;
    /* 0x40 */ ScriptProcess *script;
    /* 0x44 */ u8 unk44[0x10];
    /* 0x54 */ void *display;
};
struct HandleRegistry;

extern "C" {
extern HandleRegistry *g_handleRegistry;
void asdMemFree(void *memory);
void asdTMTexTableReleaseNode(s32 table, s32 entry);
void FUN_002c1648(void);
void msgWindowReset(void);
void ptrListRemoveClearOwner(HandleRegistry *registry, u32 handle);
void ifTouchRegionRemove(void);
void gameGlobalsSetSceneState(s32 mode);
void FUN_0033440c(u32 value);
void gameGlobalsReleaseReference(void);
void buttonHelpSetText(s32 layer, u32 color);
void messageMainSetFlag(s32 enabled);

/* Releases the active touch regions and resets the touch handles (same sequence as FUN_0041e9d4). */
static __inline void saveLoadClearTouchRegions(SaveLoadControllerA *work)
{
    for (s32 i = 0; i < work->touch.count; ++i)
        ifTouchRegionRemove();
    work->touch.count = 0;
    fillThreeWordsWithByte(work->touch.handles, -1);
    work->pending = 0;
    work->confirmed = 0;
    work->canceled = 0;
}

/* Releases all buffers, scripts, textures, touch regions and global state held by the save/load UI. */
void saveLoadUiReleaseResources(SaveLoadControllerA *work)
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
    saveLoadClearTouchRegions(work);
    gameGlobalsSetSceneState(0);
    FUN_0033440c(-1);
    gameGlobalsReleaseReference();
    buttonHelpSetText(0, 0xf4f4f4ff);
    messageMainSetFlag(1);
}
} /* extern "C" */
