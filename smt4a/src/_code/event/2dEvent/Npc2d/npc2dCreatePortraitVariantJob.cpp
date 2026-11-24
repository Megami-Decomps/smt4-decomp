/* NON_MATCHING: the initial job stores and placement dispatch use different saved registers and
 * cross-jump a different placement store. The speed literal and callback pointers pool in another order. */
#include "event/2dEvent/2dEventTex.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "addon/AocSystemA.h"
#include "code/Code0028_Smt4a.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {
extern const char DAT_0052f4fc[];
extern const s8 DAT_0052f4f0[];
s32 gameFlagIsSet(u32 flag);
s32 eventIsSkipping();
s32 aocRunByName(AocSystemA *system, u32 table, u32 file, s32 mode);
s32 npc2dPortraitUpdate(u32 job);
void FUN_0034da3c(u32 job);

/* Creates a portrait using the selected add-on record and registers its process. */
u32 npc2dCreatePortraitVariantJob(u32 id, s32 placement, u32 variant)
{
    if (gameFlagIsSet(0x522) && dataTable19FindAddonWord((TableRequest *)FUN_00283498(id), variant) == NULL)
        return 0;
    asdDebugTrace(DAT_0052f4fc, 0x380);
    NpcTextureEffectWork *work = (NpcTextureEffectWork *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(*work), 1);
    sysMemClear(work, sizeof(*work));
    work->scaleX = 1.0f;
    work->fade = 1.0f;
    work->fadeStep = 0.0f;
    work->handle = -1;
    work->state = 0x41;
    work->variantIndex = variant;
    work->unk00 = id;
    work->y = 0;
    work->table = 1;
    work->alpha = 1.0f;
    for (s32 index = 0; index < 6; ++index)
        work->unk70[index] = 0;
    work->record = (NpcTableRecord *)FUN_00283498(id);
    work->node = *(const u16 *)dataTable19FindAddonWord((TableRequest *)work->record, work->variantIndex);
    switch (placement) {
    case 0:
        work->x = -20;
        work->rotation = -48.0f;
        work->screenRegion = 3;
        break;
    case 1:
        work->x = 160;
        work->rotation = 48.0f;
        work->screenRegion = 4;
        break;
    case 2:
        work->x = 72;
        work->fadeStep = 0.25f;
        work->rotation = 0.0f;
        work->fade = 0.0f;
        work->screenRegion = 5;
        break;
    }
    if (eventIsSkipping()) {
        work->resourceState = 1;
    } else {
        work->resourceState = 0;
        if (aocRunByName(g_aocSystem, work->table, work->node, 1))
            aocLoadTextureNode((u32)g_aocSystem, work->table, work->node, 0x10000);
        else
            asdTMTexLoadMainHeap(work->table, work->node);
    }
    AsdProcUpdateFunc update = npc2dPortraitUpdate;
    AsdProcFunc end = FUN_0034da3c;
    work->speed = 0.26f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, update, end, (u32)work);
}
} /* extern "C" */
