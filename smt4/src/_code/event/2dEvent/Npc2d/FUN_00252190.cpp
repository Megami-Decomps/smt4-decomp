/* NON_MATCHING: final callback arguments are split across stack stores instead of retail's single STM. */
#include "event/NpcTextureWork.h"
#include "gamedata/Table00.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern const char DAT_0040357c[];
extern const char DAT_00403570[];
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void memClear(void *memory, u32 size);
Table00Record *dataTable00FindById(u16 id);
u32 FUN_00294090(s32 portraitId, u32 mode);
s32 FUN_002c1d5c();
s32 FUN_001dfc64(u32 handle);
void FUN_002db92c(u32 handle);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 startDelay, s32 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, void *work);

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
    work->portrait.portraitId = dataTable00FindById(static_cast<u16>(npcId))->portrait.id;
    if (FUN_002c1d5c() != 0) {
        work->deferred = 1;
    } else {
        work->portrait.portraitHandle = FUN_00294090(work->portrait.portraitId, 1);
        work->deferred = 2;
    }
    work->phase = static_cast<u16>(-npcId);
    s32 region;
    if (x <= -100) {
        region = 16;
    } else if (x <= -60) {
        region = 3;
    } else if (x >= 100) {
        region = 17;
    } else if (x >= 40) {
        region = 4;
    } else if (x < 0) {
        region = 18;
    } else {
        region = 5;
    }
    work->display.screenRegion = region;
    work->speed = 0.33f;
    asdProcessCreateSimple(DAT_00403570, 2, 0, 0, FUN_001dfc64, FUN_002db92c, work);
}
}
