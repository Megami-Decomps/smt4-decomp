/* NON_MATCHING: only process callback argument stores, final speed store scheduling and literal order differ. */
#include "event/NpcTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct NpcPortraitSourceView {
    u8 unk00[0x22];
    u16 portraitId;
};

extern "C" {
extern const char DAT_0040357c[];
extern const char DAT_00403570[];
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
NpcPortraitSourceView *dataTable25FindById(s32);
s32 FUN_002c1d5c();
u32 FUN_00294090(s32 portraitId, u32 enabled);
s32 FUN_001dfc64(u32);
void FUN_002db92c(u32);
u32 asdProcessCreateSimple(const char *, s32, s32, s32, AsdProcUpdateFunc, AsdProcFunc, void *);

/* Create a portrait process and choose its screen region from the horizontal position. */
void FUN_00285e44(s32 npcId, u32 style, s32 x)
{
    asdDebugTrace(DAT_0040357c, 712);
    NpcTextureWork *work = static_cast<NpcTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1));
    memClear(work, sizeof(NpcTextureWork));
    work->scale.x = 1.0f;
    work->scale.y = 0.0f;
    work->scale.z = 0.25f;
    work->x = x;
    work->state = 0x1f;
    work->unk08 = style;
    work->display.stopWhenHidden = 0;
    work->portrait.portraitId = -static_cast<s32>(dataTable25FindById(npcId)->portraitId);
    if (FUN_002c1d5c()) {
        work->deferred = 1;
    } else {
        work->portrait.portraitHandle = FUN_00294090(work->portrait.portraitId, 1);
        work->deferred = 2;
    }
    work->npcId = npcId;
    if (x <= -100)
        work->display.screenRegion = 0x10;
    else if (x <= -60)
        work->display.screenRegion = 3;
    else if (x >= 100)
        work->display.screenRegion = 0x11;
    else if (x >= 40)
        work->display.screenRegion = 4;
    else if (x < 0)
        work->display.screenRegion = 0x12;
    else
        work->display.screenRegion = 5;
    work->speed = 0.33f;
    asdProcessCreateSimple(DAT_00403570, 2, 0, 0, FUN_001dfc64, FUN_002db92c, work);
}
}
