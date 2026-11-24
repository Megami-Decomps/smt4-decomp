#include "event/NpcTextureWork.h"
#include "gamedata/NkmEnemyRecord.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
extern const char DAT_0040357c[];
extern const char DAT_00403570[];
u32 eventResourceCacheAcquire(s32 portraitId, u32 mode);
s32 eventIsSkipping();
s32 npc2dPortraitUpdate(u32 handle);
void FUN_002db92c(u32 handle);
// Start an NPC portrait animation in the region determined by its horizontal position.
void FUN_00252190(u32 npcId, u32 mode, s32 x)
{
    asdDebugTrace(DAT_0040357c, 633);
    NpcTextureWork *work = static_cast<NpcTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1));
    memClear(work, sizeof(NpcTextureWork));
    work->scale = 1.0f;
    work->opacity = 0.0f;
    work->fadeStep = 0.25f;
    work->x = x;
    work->state = 31;
    work->unk08 = mode;
    work->stopWhenHidden = 0;
    work->animate = 1;
    work->portraitId = nkmEnemyFindById(static_cast<u16>(npcId))->portraitId;
    if (eventIsSkipping() != 0) {
        work->loadStep = 1;
    } else {
        work->portraitHandle = eventResourceCacheAcquire(work->portraitId, 1);
        work->loadStep = 2;
    }
    work->phase = static_cast<u16>(-npcId);
    if (x <= -100)
        work->screenRegion = 16;
    else if (x <= -60)
        work->screenRegion = 3;
    else if (x >= 100)
        work->screenRegion = 17;
    else if (x >= 40)
        work->screenRegion = 4;
    else if (x < 0)
        work->screenRegion = 18;
    else
        work->screenRegion = 5;
    work->speed = 0.33f;
    AsdProcUpdateFunc update = npc2dPortraitUpdate; /* the portrait's per-frame step */
    AsdProcFunc end = FUN_002db92c;          /* releases the textures and frees the work */
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, update, end, reinterpret_cast<u32>(work));
}
}
