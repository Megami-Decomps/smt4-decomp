#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "code/Code0028_Smt4a.h"
#include "gamedata/DataTable25Apocalypse.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"

extern "C" {
void sysMemClear(void *, u32);
s32 eventIsSkipping(void);
NpcPortraitResource *resourceCacheGetOrLoadModel(s32, s32, s32);
s32 npc2dPortraitUpdate(u32);
void FUN_0034da3c(u32);
extern const s8 DAT_0052f4f0[];

/* Creates an NPC portrait process, choosing its draw region from its horizontal position. */
u32 npc2dCreatePortraitJob(u32 npcId, u32 option, s32 x, s32 y, f32 alpha)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\Npc2d.cpp", 0x32c);
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
    work->alpha = alpha;
    work->move.startX = 0;
    work->move.startY = 0;
    work->move.endX = 0;
    work->move.endY = 0;
    work->move.frame = 0;
    work->move.frames = 0;
    work->portraitId = -(s32)FUN_00283498(npcId)->portraitId;
    if (eventIsSkipping()) {
        work->resourceState = 1;
    } else {
        work->portrait = resourceCacheGetOrLoadModel(work->portraitId, 1, 1);
        work->resourceState = 2;
    }
    work->unk00 = npcId;
    if (x <= -100)
        work->screenRegion = 0x11;
    else if (x <= -60)
        work->screenRegion = 3;
    else if (x >= 100)
        work->screenRegion = 0x12;
    else if (x >= 40)
        work->screenRegion = 4;
    else if (x < 0)
        work->screenRegion = 0x13;
    else
        work->screenRegion = 5;
    work->speed = 0.33f;
    const AsdProcUpdateFunc updatePortrait = npc2dPortraitUpdate; /* advances the portrait each frame */
    const AsdProcFunc releasePortrait = FUN_0034da3c; /* releases the portrait's textures and work */
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, updatePortrait, releasePortrait, (u32)work);
}
} /* extern "C" */
