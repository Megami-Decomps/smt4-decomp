#include "event/NpcTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

struct NpcPortraitSourceView {
    u8 unk00[0x22];
    u16 portraitId;
};

extern "C" {
extern const char DAT_0040357c[];
extern const char DAT_00403570[];
NpcPortraitSourceView *dataTable25FindById(s32);
s32 eventIsSkipping();
u32 eventResourceCacheAcquire(s32 portraitId, u32 enabled);
s32 npc2dPortraitUpdate(u32);
void FUN_002db92c(u32);

/* Create a portrait process and choose its screen region from the horizontal position. */
void FUN_00285e44(s32 npcId, u32 style, s32 x)
{
    asdDebugTrace(DAT_0040357c, 712);
    NpcTextureWork *work = static_cast<NpcTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1));
    memClear(work, sizeof(NpcTextureWork));
    work->scale = 1.0f;
    work->opacity = 0.0f;
    work->fadeStep = 0.25f;
    work->x = x;
    work->state = 0x1f;
    work->unk08 = style;
    work->stopWhenHidden = 0;
    work->portraitId = -static_cast<s32>(dataTable25FindById(npcId)->portraitId);
    if (eventIsSkipping()) {
        work->loadStep = 1;
    } else {
        work->portraitHandle = eventResourceCacheAcquire(work->portraitId, 1);
        work->loadStep = 2;
    }
    work->npcId = npcId;
    if (x <= -100)
        work->screenRegion = 0x10;
    else if (x <= -60)
        work->screenRegion = 3;
    else if (x >= 100)
        work->screenRegion = 0x11;
    else if (x >= 40)
        work->screenRegion = 4;
    else if (x < 0)
        work->screenRegion = 0x12;
    else
        work->screenRegion = 5;
    work->speed = 0.33f;
    AsdProcUpdateFunc update = npc2dPortraitUpdate; /* the portrait's per-frame step */
    AsdProcFunc end = FUN_002db92c;          /* releases the textures and frees the work */
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, update, end, reinterpret_cast<u32>(work));
}
}
