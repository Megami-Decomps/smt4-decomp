/* NON_MATCHING: state/option store merging, zero-store scheduling and process-callback argument packing differ; candidate -O2. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "AsdSDK/AsdMemAlloc.h"

struct NpcPortraitRecordView {
    u8 unk00[0x8c];
    s16 portraitId;
};
extern "C" {
void sysMemClear(void *memory, u32 size);
const NpcPortraitRecordView *dataTable00FindById(u16 id);
s32 FUN_00162ea4();
NpcPortraitResource *FUN_00409fe8(s32 portraitId, s32 mode, s32 enabled);
s32 FUN_002897cc(u32 handle);
void FUN_0034da3c(u32 handle);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
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
    for (s32 i = 0; i < 6; ++i) {
        work->unk70[i] = 0;
    }
    work->portraitId = dataTable00FindById((u16)id)->portraitId;
    if (FUN_00162ea4()) {
        work->resourceState = 1;
    } else {
        work->portrait = FUN_00409fe8(work->portraitId, 1, 1);
        work->resourceState = 2;
    }
    work->unk00 = (u16)(-id);
    if (x <= -100) {
        work->screenRegion = 0x11;
    } else if (x <= -60) {
        work->screenRegion = 3;
    } else if (x >= 100) {
        work->screenRegion = 0x12;
    } else if (x >= 40) {
        work->screenRegion = 4;
    } else if (x < 0) {
        work->screenRegion = 0x13;
    } else {
        work->screenRegion = 5;
    }
    work->speed = 0.33f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0,
                                  FUN_002897cc, FUN_0034da3c, (u32)work);
}
}
