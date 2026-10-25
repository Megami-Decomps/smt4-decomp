/* NON_MATCHING: allocation debug-source hook and its literals are absent; prologue scheduling differs. */
#include "event/3dEvent/EventTextureJob.h"
#include "gamedata/Table00.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const s8 DAT_0052f6a8[];
extern const s8 DAT_0052f698[];
void sysMemClear(void *memory, u32 size);
Table00Record *dataTable00FindById(u32 id);
s32 FUN_00162ea4();
u32 FUN_00409fe8(s32 id, u32 first, u32 second);
u32 eventUpdateTextureFadeJob(u32 job);
s32 FUN_00289f10(u32 job);
void jobWorkDestroy34(u32 job);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    u32 (*update)(u32), AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);

// Create a positioned battle portrait and select its placement-dependent animation.
u32 FUN_003affe8(u32 id, EventTexturePosition position)
{
    EventTextureJobWork *work = static_cast<EventTextureJobWork *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTextureJobWork), 1));
    sysMemClear(work, sizeof(EventTextureJobWork));
    work->colorScale = 1.0f;
    work->opacity = 0.0f;
    work->fadeStep = 0.25f;
    work->stopWhenHidden = 0;
    work->unk17 = 0;
    work->resourceId = dataTable00FindById((u16)id)->battleTexture.resourceId;
    work->animate = 1;
    if (FUN_00162ea4()) {
        work->state = 1;
    } else {
        work->resource = FUN_00409fe8(work->resourceId, 1, 1);
        work->state = 2;
    }
    work->texture = (u16)-id;
    if (position.x <= -4.0f)
        work->animation = 17;
    else if (position.x <= -3.0f)
        work->animation = 3;
    else if (position.x >= 3.0f)
        work->animation = 18;
    else if (position.x >= 1.5f)
        work->animation = 4;
    else if (position.x < 0.0f)
        work->animation = 19;
    else
        work->animation = 5;
    work->position.x = position.x;
    work->position.y = position.y;
    work->visible = 1;
    work->initialized = 0;
    u32 job = asdProcessCreateSimple(DAT_0052f6a8, 4, 0, 0, eventUpdateTextureFadeJob,
        jobWorkDestroy34, reinterpret_cast<u32>(work));
    taskCreateDraw(DAT_0052f698, 0x71, 0, 0, FUN_00289f10, NULL,
        reinterpret_cast<u32>(work), reinterpret_cast<void *>(job));
    return job;
}
}
