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
BattleTextureResourceRecord *FUN_00283498(u32 id);
s32 FUN_00162ea4();
u32 FUN_00409fe8(s32 textureId, s32 first, s32 second);
u32 eventUpdateTextureFadeJob(void *job);
u32 FUN_00289f10(void *job);
void jobWorkDestroy34(void *job);
void *taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, void *process);
extern const char DAT_0052f6a8[];
extern const char DAT_0052f698[];

// Create a battle texture from its resource record and classify its horizontal draw direction.
void *eventCreateResourceBattleTexture(u32 id, f32 x, f32 y)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\3dEvent\\3dEventTex.cpp", 0x1EE);
    EventBattleTextureWork *work = static_cast<EventBattleTextureWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventBattleTextureWork), 1));
    sysMemClear(work, sizeof(EventBattleTextureWork));
    work->scale = 1.0f;
    work->opacity = 0.0f;
    work->opacityStep = 0.25f;
    work->stopWhenTransparent = 0;
    work->unk17 = 0;
    work->textureId = -FUN_00283498(id)->textureId;
    if (FUN_00162ea4()) {
        work->state = 1;
    } else {
        work->resource = FUN_00409fe8(work->textureId, 1, 1);
        work->state = 2;
    }
    work->id = id;
    if (x <= -4.0f)
        work->direction = 17;
    else if (x <= -3.0f)
        work->direction = 3;
    else if (x >= 3.0f)
        work->direction = 18;
    else if (x >= 1.5f)
        work->direction = 4;
    else if (x < 0.0f)
        work->direction = 19;
    else
        work->direction = 5;
    work->position[0] = x;
    work->position[1] = y;
    work->enabled = 1;
    work->unk15 = 0;
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052f6a8), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventUpdateTextureFadeJob), reinterpret_cast<AsdProcFunc>(jobWorkDestroy34), reinterpret_cast<u32>(work)));
    taskCreateDraw(DAT_0052f698, 0x71, 0, 0, FUN_00289f10, 0, work, process);
    return process;
}
}
