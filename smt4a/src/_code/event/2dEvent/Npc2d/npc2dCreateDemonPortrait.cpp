/* NON_MATCHING: retail packs the two callbacks and the work pointer into one stack store before starting the process;
 * this build splits the stores and schedules them around the speed and region initialization differently. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
void sysMemClear(void *memory, u32 size);
s32 eventIsSkipping();
NpcPortraitResource *resourceCacheGetOrLoadModel(s32 portraitId, s32 mode, s32 enabled);
s32 npc2dPortraitUpdate(u32 handle);
void FUN_0034da3c(u32 handle);
extern const s8 DAT_0052f4f0[]; // "EVE_2dTex"

u32 npc2dCreateDemonPortrait(u32 id, u32 option, s32 x, s32 y, f32 alpha)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\Npc2d.cpp", 0x2d5);
    NpcTextureEffectWork *work = (NpcTextureEffectWork *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(*work), 1);
    sysMemClear(work, sizeof(*work));
    work->scaleX = 1.0f;
    work->fade = 0.0f;
    work->fadeStep = 0.25f;
    work->state = 0x1f;
    work->y = y - 13;
    work->x = x;
    work->unk08 = option;
    work->stopWhenHidden = 0;
    work->animate = 1;
    work->alpha = alpha;
    work->move.startX = 0;
    work->move.startY = 0;
    work->move.endX = 0;
    work->move.endY = 0;
    work->move.frame = 0;
    work->move.frames = 0;
    work->portraitId = nkmEnemyFindById((u16)id)->battleTextureId;
    if (eventIsSkipping()) {
        work->resourceState = 1;
    } else {
        work->portrait = resourceCacheGetOrLoadModel(work->portraitId, 1, 1);
        work->resourceState = 2;
    }
    work->unk00 = (u16)(-id);
    s32 region;
    if (x <= -100) {
        region = 0x11;
    } else if (x <= -60) {
        region = 3;
    } else if (x >= 100) {
        region = 0x12;
    } else if (x >= 40) {
        region = 4;
    } else if (x < 0) {
        region = 0x13;
    } else {
        region = 5;
    }
    work->screenRegion = region;
    work->speed = 0.33f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, npc2dPortraitUpdate, FUN_0034da3c, (u32)work);
}
}
