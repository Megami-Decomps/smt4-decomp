/* NON_MATCHING: argument register allocation, texture-node indexing, the coordinate pair store and callback packing differ. */
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/BgData.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "event/bustupEvent/BustupTex.h"

struct TexNode;
extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
s32 eventIsSkipping();
bool aocRunByName(u32 system, u32 table, u32 node, s32 checked);
s32 npc2dPortraitUpdate(u32 handle);
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
    memset(&work->move, 0, sizeof(work->move));
    void *section = dataTableGet(0x1A, 0);
    const s16 *nodes = bgDataTextureNodes(section);
    dataTableGetCount(section);
    work->node = nodes[id - 1];
    work->x = x - 56;
    work->y = y - 8;
    if (eventIsSkipping()) {
        work->resourceState = 1;
    } else {
        work->resourceState = 0;
        if (aocRunByName(g_aocSystem, work->table, work->node, 1)) {
            aocLoadTextureNode(g_aocSystem, work->table, work->node, 0x10000);
        } else {
            asdTMTexTablePrepareNodeImage(work->table, work->node);
        }
    }
    work->speed = 0.33f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, npc2dPortraitUpdate, FUN_0034da3c, (u32)work);
}
}
