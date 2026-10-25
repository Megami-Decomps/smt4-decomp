/* NON_MATCHING: initial state stores combine; image indexing and process-callback argument stores differ. */
#include "event/NpcTextureWork.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
#include "util/FUN_002ae8e4.h"
#include "util/FUN_002ae8e4.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"
extern "C" {
extern AocSystem *g_aocSystem;
extern const char DAT_0040357c[];
extern const char DAT_00403570[];
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 FUN_002c1d5c(void);
s32 aocRunByName(AocSystem *system, s32 table, s32 node, s32 enabled);
void FUN_002c58c8(s32 table, s32 node);
s32 FUN_001dfc64(u32 handle);
void FUN_002db92c(u32 handle);

/* Create the 2D NPC texture process using its table-selected image. */
void FUN_002fdff4(s32 npc)
{
    asdDebugTrace(DAT_0040357c, 852);
    NpcTextureWork *work = static_cast<NpcTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1));
    memClear(work, sizeof(NpcTextureWork));
    work->scale.x = 1.0f;
    work->scale.y = 1.0f;
    work->scale.z = 0.0f;
    work->state = 4;
    work->phase = 0;
    work->textureTable = 2;
    DataTableView<s16> images(0x1A, 0);
    work->y = -8;
    work->textureNode = images.entries[npc - 1];
    work->x = -56;
    if (FUN_002c1d5c()) {
        work->deferred = 1;
    } else {
        work->deferred = 0;
        if (aocRunByName(g_aocSystem, work->textureTable, work->textureNode, 1))
            FUN_002ae8e4(reinterpret_cast<u32>(g_aocSystem), work->textureTable, work->textureNode, 0x10000);
        else
            FUN_002c58c8(work->textureTable, work->textureNode);
    }
    work->speed = 0.33f;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, FUN_001dfc64, FUN_002db92c, reinterpret_cast<u32>(work));
}
}
