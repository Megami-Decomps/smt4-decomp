/* NON_MATCHING: -O2 candidate; incoming saved registers, signed-table index address folding, coordinate pair store and callback argument packing differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "event/bustupEvent/BustupTex.h"

struct TexNode;
extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
s32 FUN_00162ea4();
bool aocRunByName(u32 system, u32 table, u32 node, s32 checked);
s32 FUN_002897cc(u32 handle);
void FUN_0034da3c(u32 handle);
extern u32 g_aocSystem;
extern const s8 DAT_0052f4f0[]; // "EVE_2dTex"

u32 npcCreateTextureEffectJob(u32 id, s32 x, s32 y)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\Npc2d.cpp", 0x3c9);
    NpcTextureEffectWork *work = (NpcTextureEffectWork *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(NpcTextureEffectWork), 1);
    sysMemClear(work, sizeof(*work));
    work->scaleX = 1.0f;
    work->fade = 1.0f;
    work->fadeStep = 0.0f;
    work->state = 4;
    work->unk00 = 0;
    work->table = 0;
    work->alpha = 1.0f;
    for (s32 i = 0; i < 6; ++i) {
        work->unk70[i] = 0;
    }
    void *section = dataTableGet(26, 0);
    const s16 *nodes = (const s16 *)dataTableGetEntries(section);
    dataTableGetCount(section);
    work->node = nodes[id - 1];
    work->x = x - 56;
    work->y = y - 8;
    if (FUN_00162ea4()) {
        work->resourceState = 1;
    } else {
        work->resourceState = 0;
        if (aocRunByName(g_aocSystem, work->table, work->node, 1)) {
            aocLoadTextureNode(g_aocSystem, work->table, work->node, 0x10000);
        } else {
            FUN_0014afd0(work->table, work->node);
        }
    }
    work->speed = 0.33f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, FUN_002897cc, FUN_0034da3c, (u32)work);
}
}
