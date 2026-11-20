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
s32 FUN_001dfc64(u32 handle);
void FUN_002db92c(u32 handle);
// Start an NPC portrait animation in the region determined by its horizontal position.
void FUN_00252190(u32 npcId, u32 mode, s32 x)
{
    asdDebugTrace(DAT_0040357c, 633);
    NpcTextureWork *work = static_cast<NpcTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1));
    memClear(work, sizeof(NpcTextureWork));
    work->scale.x = 1.0f;
    work->scale.y = 0.0f;
    work->scale.z = 0.25f;
    work->x = x;
    work->state = 31;
    work->unk08 = mode;
    work->display.stopWhenHidden = 0;
    work->portrait.animate = 1;
    work->portrait.portraitId = nkmEnemyFindById(static_cast<u16>(npcId))->portraitId;
    if (eventIsSkipping() != 0) {
        work->deferred = 1;
    } else {
        work->portrait.portraitHandle = eventResourceCacheAcquire(work->portrait.portraitId, 1);
        work->deferred = 2;
    }
    work->phase = static_cast<u16>(-npcId);
    if (x <= -100)
        work->display.screenRegion = 16;
    else if (x <= -60)
        work->display.screenRegion = 3;
    else if (x >= 100)
        work->display.screenRegion = 17;
    else if (x >= 40)
        work->display.screenRegion = 4;
    else if (x < 0)
        work->display.screenRegion = 18;
    else
        work->display.screenRegion = 5;
    work->speed = 0.33f;
    AsdProcUpdateFunc update = FUN_001dfc64; /* the portrait's per-frame step */
    AsdProcFunc end = FUN_002db92c;          /* releases the textures and frees the work */
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, update, end, reinterpret_cast<u32>(work));
}
}
