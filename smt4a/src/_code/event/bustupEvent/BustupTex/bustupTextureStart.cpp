#include "event/bustupEvent/BustupTextureWork.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "event/bustupEvent/BustupTex.h"
#include "addon/AocSystemA.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "code/Code0028_Smt4a.h"
#include "gamedata/DataTable25Apocalypse.h"
#include "gamedata/DataTableAccess_Smt4a.h"

namespace {
enum { BUSTUP_TEXTURE_VISIBILITY_FLAG = 0x522 };
}
extern "C" {
extern const char DAT_0052f77c[];
extern const char DAT_0052f76c[];
s32 gameFlagIsSet(u32 flag);
void sysMemClear(void *memory, u32 bytes);
s32 eventIsSkipping();
s32 aocRunByName(AocSystemA *system, s32 table, s32 node, u32 mode);
void FUN_0026c568(void *work);
void asdMTeXReleaseJobContext(void *work);

/* Starts a bustup texture job, honoring the add-on visibility gate and deferred loading. */
void bustupTextureStart(u32 id, s32 keepPlacement)
{
    if (gameFlagIsSet(BUSTUP_TEXTURE_VISIBILITY_FLAG) && !dataTable19FindAddonWord((TableRequest *)FUN_00283498(id), 1))
        return;
    asdDebugTrace(DAT_0052f77c, 0x4c0);
    BustupTextureWorkA *work = (BustupTextureWorkA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(*work), 1);
    sysMemClear(work, sizeof(*work));
    work->texture.id = id;
    work->texture.previousId = -1;
    work->texture.previousNode = -1;
    DataTable25RecordA *definition = FUN_00283498(id);
    work->texture.definition = definition;
    if (!keepPlacement) {
        work->texture.table = 0x17;
        work->texture.node = -1;
        /* both placements are (25, 25), but retail still reads the flag */
        if (definition->flags != 0) {
            work->texture.x = 25.0f;
            work->texture.y = 25.0f;
        } else {
            work->texture.x = 25.0f;
            work->texture.y = 25.0f;
        }
    }
    if (eventIsSkipping()) {
        work->texture.deferred = 1;
    } else {
        if (work->texture.node != -1) {
            if (aocRunByName(g_aocSystem, work->texture.table, work->texture.node, 1))
                work->texture.texture = aocLoadTextureNode((u32)g_aocSystem, work->texture.table, work->texture.node, 0x10000);
            else
                work->texture.texture = (u32)asdTMTexTablePrepareNodeImage(work->texture.table, work->texture.node);
        }
        work->texture.deferred = 0;
    }
    work->texture.frame = 0.0f;
    work->texture.alpha = 1.0f;
    work->texture.active = 0;
    work->texture.visible = 1;
    work->currentOffset[0] = 0.0f;
    work->currentOffset[1] = 0.0f;
    work->targetOffset[0] = 0.0f;
    work->targetOffset[1] = 0.0f;
    work->startOffset[0] = 0.0f;
    work->startOffset[1] = 0.0f;
    asdProcessCreateSimple((const s8 *)DAT_0052f76c, 4, 0, 0, (AsdProcUpdateFunc)FUN_0026c568,
                           (AsdProcFunc)asdMTeXReleaseJobContext, (u32)work);
}
} /* extern "C" */
