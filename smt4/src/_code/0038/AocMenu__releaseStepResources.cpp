/* NON_MATCHING: initial flag-store scheduling differs and the final transition stores use a combined STM. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "ui/SceneWindowWork.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
void FUN_00233818(const void **dispatch);
void ifTouchRegionClearAll(void *window);
void jobStopAndClearFlags(void *owner);
void jobOwnerFreeSlotAndStop(u32 *job);
void asdTMTexTableReleaseNode(s32 entry, s32 node);
void asdMemFree(void *memory);
void jobStop(u32 job, s32 mode);
s32 jobIsValid(u32 job);

/* Clears flag bits of the add-on main object. */
static __inline void aocMainClearFlags(AocMain *main, u32 mask)
{
    main->flags &= ~mask;
}
// Release the add-on scene's jobs, windows, script and texture resources.
void AocMenu::releaseStepResources()
{
    SceneWindowWork * work = reinterpret_cast<SceneWindowWork *>(this);
    union CleanupView {
        SceneWindowWork base;
        struct {
            u8 unk0000[0x350];
            void *buffer;
            u32 unk0354;
            ScriptProcess *script;
            u8 unk035c[0x1450];
            s32 touchRegion;
        } resources;
    };
    AocMain *main = g_aocMain;
    CleanupView *scene = reinterpret_cast<CleanupView *>(work);
    aocMainClearFlags(main, 0x100);
    main->mode = 1;
    aocMenuSetReadyFlag(main, 1);
    aocMainClearFlags(g_aocMain, 0x70);
    g_aocDisplay->operationActive = 0;
    ifTouchRegionClearAll(work->windowStorage);
    FUN_00233818(&work->dispatchTable);
    jobOwnerFreeSlotAndStop(&work->dialogJob);
    jobStopAndClearFlags(work);
    if (jobIsValid(work->unk17A0)) {
        if (scene->resources.touchRegion != -1) {
            scene->resources.touchRegion = -1;
            ifTouchRegionRemove();
        }
        work->unk0000 &= ~0x3000u;
        jobStop(work->unk17A0, 0);
    }
    asdMemFreeSlot(reinterpret_cast<void **>(work->unk1C30));
    work->unk1C30 = 0;
    if (scene->resources.script != NULL) {
        scrScriptProcessDestroy(scene->resources.script);
        scene->resources.script = NULL;
    }
    if (scene->resources.buffer != NULL) {
        asdMemFree(scene->resources.buffer);
        scene->resources.buffer = NULL;
    }
    for (s32 node = 0; node < 3; ++node)
        asdTMTexTableReleaseNode(0x3a, node);
    asdTMTexTableFreeEntry(0x3a);
    work->unk0000 |= 1;
    work->transition.state = 20;
    work->transition.phase = 0;
    if (work->transition.callback != NULL) {
        work->transition.callback->vtable->destroy(work->transition.callback);
        work->transition.callback = NULL;
    }
}
}
