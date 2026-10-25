/* NON_MATCHING: the three sentinel stores (previousId, previousNode, table) are scheduled in a different order and constants. */
#include "event/bustupEvent/BustupTextureWork.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"

// The animation vectors follow the established texture-work prefix.
struct BustupTextureCreateWorkA {
    BustupTextureWork texture;
    /* 0x90 */ f32 movement[3];
    /* 0x9C */ f32 rotation[3];
};
extern "C" {
extern const char DAT_0052f77c[]; // Allocation source path.
extern const char DAT_0052f76c[]; // Shared "EVE_BustupTex" process name.
extern AocSystemA* g_aocSystem;
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
s32 FUN_00162ea4(void);
s32 aocRunByName(AocSystemA* system, s32 table, s32 node, u32 option);
u32 aocLoadTextureNode(AocSystemA* system, s32 table, s32 node, u32 heap);
u32 FUN_0014afd0(s32 table, s32 node);
void FUN_0026c568(void* work);
void asdMTeXReleaseJobContext(void* work);
u32 asdProcessCreateSimple(const char* name, u32 priority, u32 size, u32 flags,
    TaskFunc update, TaskFunc destroy, void* data);

void FUN_0037b280(s32 portrait)
{
    asdDebugTrace(DAT_0052f77c, 1178);
    BustupTextureCreateWorkA* work = static_cast<BustupTextureCreateWorkA*>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BustupTextureCreateWorkA), 1));
    sysMemClear(work, sizeof(BustupTextureCreateWorkA));
    work->texture.previousId = -1;
    work->texture.previousNode = -1;
    work->texture.table = 22;
    work->texture.id = 0;
    work->texture.x = 150.0f;
    work->texture.y = 150.0f;
    void* table = dataTableGet(26, 1);
    const s16* portraits = static_cast<const s16*>(dataTableGetEntries(table));
    dataTableGetCount(table);
    s32 index = portrait - 1;
    work->texture.node = portraits[index];
    if (FUN_00162ea4()) {
        work->texture.deferred = 1;
    } else {
        if (work->texture.node != -1) {
            if (aocRunByName(g_aocSystem, work->texture.table, work->texture.node, 1)) {
                work->texture.texture = aocLoadTextureNode(g_aocSystem,
                    work->texture.table, work->texture.node, 0x10000);
            } else {
                work->texture.texture = FUN_0014afd0(work->texture.table, work->texture.node);
            }
        }
        work->texture.deferred = 0;
    }
    work->texture.alpha = 1.0f;
    work->texture.active = 0;
    work->texture.visible = 1;
    work->texture.frame = 0.0f;
    work->movement[0] = 0.0f;
    work->movement[1] = 0.0f;
    work->movement[2] = 0.0f;
    work->rotation[0] = 0.0f;
    work->rotation[1] = 0.0f;
    work->rotation[2] = 0.0f;
    asdProcessCreateSimple(DAT_0052f76c, 4, 0, 0, FUN_0026c568,
        asdMTeXReleaseJobContext, work);
}
}
