/* NON_MATCHING: the three sentinel stores (previousId, previousNode, table) are scheduled in a different order and constants. */
#include "event/bustupEvent/BustupTextureWork.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "addon/aocMain.h"
#include "util/FUN_002ae8e4.h"
#include "util/FUN_002ae8e4.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern void *g_aocSystem;
extern const char DAT_004037b0[];
extern const char DAT_004037a0[];
s32 FUN_002c1d5c(void);
s32 aocRunByName(void *system, s32 table, s32 node, u32 operation);
u32 FUN_002c58c8(s32 table, s32 node);
u32 FUN_001ce4a4(u32 process);
u32 asdMTeXReleaseJobContext(u32 process);

// Create a bustup texture process, loading its base or add-on texture unless loading is deferred.
void FUN_002f5a10(s32 bustupId)
{
    asdDebugTrace(DAT_004037b0, 1118);
    BustupTextureWork *work = (BustupTextureWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(*work), 1);
    memClear(work, sizeof(*work));
    work->previousId = -1;
    work->previousNode = -1;
    work->table = 31;
    work->id = 0;
    work->x = 150.0f;
    work->y = 150.0f;
    void *table = dataTableGet(26, 1);
    const s16 *entries = (const s16 *)dataTableGetEntries(table);
    dataTableGetCount(table);
    s32 index = bustupId - 1;
    work->node = entries[index];
    if (FUN_002c1d5c()) {
        work->deferred = 1;
    } else {
        if (work->node != -1) {
            if (aocRunByName(g_aocSystem, work->table, work->node, 1))
                work->texture = FUN_002ae8e4(reinterpret_cast<u32>(g_aocSystem), work->table, work->node, 0x10000);
            else
                work->texture = FUN_002c58c8(work->table, work->node);
        }
        work->deferred = 0;
    }
    work->frame = 0;
    work->alpha = 1.0f;
    work->active = 0;
    work->visible = 1;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_004037a0), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001ce4a4), reinterpret_cast<AsdProcFunc>(asdMTeXReleaseJobContext), reinterpret_cast<u32>(work));
}
}
