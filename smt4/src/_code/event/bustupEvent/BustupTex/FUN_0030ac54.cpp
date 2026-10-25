/* NON_MATCHING: retail retains an unused definition-byte read; startup stores and callback argument scheduling differ. */
#include "event/bustupEvent/BustupTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "addon/aocMain.h"
#include "util/FUN_002ae8e4.h"
#include "util/FUN_002ae8e4.h"
#include "AsdSDK/AsdMemUtil.h"
extern "C" {
extern AocSystem *g_aocSystem;
extern const char DAT_004037b0[];
extern const char DAT_004037a0[];
s32 gameFlagIsSet(u32 flag);
void *dataTable25FindById(u32 id);
s32 aocContentGetIndexedRecord(void *definition, s32 enabled);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 FUN_002c1d5c(void);
s32 aocRunByName(AocSystem *system, s32 table, s32 node, s32 enabled);
u32 FUN_002c58c8(s32 table, s32 node);
s32 FUN_001ce4a4(u32 handle);
void asdMTeXReleaseJobContext(u32 handle);

/* Start a bustup texture process, subject to its game-flag visibility rule. */
void FUN_0030ac54(u32 id, s32 keepPlacement)
{
    if (gameFlagIsSet(0x522) && !aocContentGetIndexedRecord(dataTable25FindById(id), 1))
        return;
    asdDebugTrace(DAT_004037b0, 1156);
    BustupTextureWork *work = static_cast<BustupTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(BustupTextureWork), 1));
    memClear(work, sizeof(BustupTextureWork));
    work->id = id;
    work->previousId = -1;
    work->previousNode = -1;
    work->definition = dataTable25FindById(id);
    if (!keepPlacement) {
        work->table = 32;
        work->node = -1;
        work->x = 25.0f;
        work->y = 25.0f;
    }
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
    work->frame = 0.0f;
    work->alpha = 1.0f;
    work->active = 0;
    work->visible = 1;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_004037a0), 2, 0, 0, FUN_001ce4a4, asdMTeXReleaseJobContext, reinterpret_cast<u32>(work));
}
}
