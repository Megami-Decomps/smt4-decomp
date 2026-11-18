/* NON_MATCHING: initial handle/table/state scheduling and callback literal pool order (update vs destroy) differ (16 diff lines). */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "event/bustupEvent/BustupTex.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct NpcTableRecord {
    u8 unk00[0x24];
    u16 node; // 0x24: texture node of the NPC
};

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
void sysMemClear(void *memory, u32 size);
NpcTableRecord *FUN_00283498(u32 id);

s32 FUN_00162ea4();
s32 FUN_002897cc(u32 handle);
void FUN_0034da3c(u32 handle);
extern const char DAT_0052f4fc[];
extern const u8 DAT_0052f4ec[3]; // texture slot index of each anchor
extern const s8 DAT_0052f4f0[];  // "EVE_2dTex"

// Creates the 2D texture effect job for NPC `id`: loads the anchors of its three texture slots and
// starts the "EVE_2dTex" process.
u32 npc2dCreatePortraitCenterJob(u32 id)
{
    asdDebugTrace(DAT_0052f4fc, 0x400);
    NpcTextureEffectWork *work = (NpcTextureEffectWork *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(NpcTextureEffectWork), 1);
    sysMemClear(work, sizeof(*work));
    work->scaleX = 1.0f;
    work->fade = 1.0f;
    work->fadeStep = 0.0f;
    work->handle = -1;
    work->table = 0x1c;
    work->state = 0x41;
    work->unk00 = id;
    work->unk88 = 1;
    work->unk8c = 0;
    work->unk90 = 0;
    work->unk94 = 0;
    work->unk95 = 0;
    work->alpha = 1.0f;
    for (s32 i = 0; i < 6; ++i) {
        work->unk70[i] = 0;
    }
    work->record = FUN_00283498(id);
    work->node = work->record->node;
    for (u32 i = 0; i < 3; ++i) {
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x27, DAT_0052f4ec[i]);
        work->points[i].x = entry->x;
        work->points[i].y = entry->y;
        if (i == 0 && entry->placement != NULL) {
            work->extra.x = entry->placement->width;
            work->extra.y = entry->placement->height;
        }
    }
    work->points[1].x = 72.0f;
    work->x = 0x48;
    work->fadeStep = 0.265f;
    work->rotation = 0.0f;
    work->fade = 0.0f;
    work->screenRegion = 5;
    work->y = (s32)work->points[1].y;
    if (!FUN_00162ea4()) {
        work->resourceState = 0;
        asdTMTexTablePrepareNodeImage(work->table, work->node);
        asdTMTexTablePrepareNodeImage(0x27, 0);
    } else {
        work->resourceState = 1;
    }
    work->speed = 0.26f;
    AsdProcFunc end = FUN_0034da3c;
    AsdProcUpdateFunc update = FUN_002897cc;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, update, end, (u32)work);
}
}
