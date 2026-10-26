#include "event/BattleTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
struct BattleTextureResourceRecord {
    u8 prefix[0x22];
    u16 textureId;
};
}
extern "C" {
BattleTextureResourceRecord *dataTable25FindById(u32 id);
s32 FUN_002c1d5c();
u32 FUN_00294090(s32 textureId, s32 flags);
u32 uiStepAnimatedContentTask(void *job);
u32 FUN_001e023c(void *job);
void jobWorkRelease(void *job);
void *taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, void *process);
extern const char k_eventBattleTextureProcessName[];
extern const char k_eventBattleTextureDrawName[];

// Create a battle texture from its resource record and classify its horizontal draw direction.
void *eventCreateResourceBattleTexture(u32 id, f32 x, f32 y)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\3dEvent\\3dEventTex.cpp", 0x18D);
    EventBattleTextureWork *work = static_cast<EventBattleTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(EventBattleTextureWork), 1));
    memClear(work, sizeof(EventBattleTextureWork));
    work->scale = 1.0f;
    work->opacity = 0.0f;
    work->opacityStep = 0.25f;
    work->stopWhenTransparent = 0;
    work->unk17 = 0;
    work->textureId = -dataTable25FindById(id)->textureId;
    if (FUN_002c1d5c()) {
        work->state = 1;
    } else {
        work->resource = FUN_00294090(work->textureId, 1);
        work->state = 2;
    }
    work->id = id;
    if (x <= -4.0f)
        work->direction = 16;
    else if (x <= -3.0f)
        work->direction = 3;
    else if (x >= 3.0f)
        work->direction = 17;
    else if (x >= 1.5f)
        work->direction = 4;
    else if (x < 0.0f)
        work->direction = 18;
    else
        work->direction = 5;
    work->position[0] = x;
    work->position[1] = y;
    work->enabled = 1;
    work->unk15 = 0;
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>(k_eventBattleTextureProcessName), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(uiStepAnimatedContentTask), reinterpret_cast<AsdProcFunc>(jobWorkRelease), reinterpret_cast<u32>(work)));
    taskCreateDraw(k_eventBattleTextureDrawName, 0x6F, 0, 0, FUN_001e023c, 0, work, process);
    return process;
}
}
