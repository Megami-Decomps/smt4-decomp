/* NON_MATCHING: independent default-state stores are reordered and process callback arguments use STR plus STM instead of one retail STM. */
#include "event/NpcTextureWork.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

struct NpcPortraitVariantRecord {
    u16 texture;
    u8 unk02[0x12];
};

extern "C" {
extern AocSystem *g_aocSystem;
extern const char DAT_0040357c[];
extern const s8 DAT_00403570[];
s32 gameFlagIsSet(u32 flag);
NpcTextureSource *dataTable25FindById(u32 npc);
const NpcPortraitVariantRecord *aocContentGetIndexedRecord(const NpcTextureSource *source, u32 variant);
void *asdMemAlloc(s32 heap, s32 category, s32 flags, u32 bytes, s32 count);
void memClear(void *memory, u32 bytes);
s32 FUN_002c1d5c(void);
s32 aocRunByName(AocSystem *system, s32 table, s32 node, s32 mode);
void FUN_002ae8e4(AocSystem *system, s32 table, s32 node, u32 flags);
void FUN_002c58c8(s32 table, s32 node);
s32 FUN_001dfc64(u32 process);
void FUN_002db92c(u32 process);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 firstDelay, u16 lastDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work);

void FUN_0031bc80(u32 npc, s32 position, u32 variant)
{
    if (gameFlagIsSet(0x522)) {
        if (aocContentGetIndexedRecord(dataTable25FindById(npc), variant) == NULL)
            return;
    }
    asdDebugTrace(DAT_0040357c, 788);
    NpcTextureWork *work = (NpcTextureWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1);
    memClear(work, sizeof(*work));
    work->scale.x = 1.0f;
    work->scale.y = 1.0f;
    work->scale.z = 0.0f;
    work->npc.lastImage = -1;
    work->npcId = npc;
    work->state = 65;
    work->npcVariant.index = variant;
    work->textureTable = 3;
    work->npc.source = dataTable25FindById(npc);
    work->textureNode = aocContentGetIndexedRecord(work->npc.source, work->npcVariant.index)->texture;
    switch (position) {
    case 0:
        work->x = -20;
        work->rotation = -48.0f;
        work->display.screenRegion = 3;
        break;
    case 1:
        work->x = 160;
        work->rotation = 48.0f;
        work->display.screenRegion = 4;
        break;
    case 2:
        work->x = 72;
        work->scale.z = 0.25f;
        work->rotation = 0.0f;
        work->scale.y = 0.0f;
        work->display.screenRegion = 5;
        break;
    }
    if (FUN_002c1d5c()) {
        work->deferred = 1;
    } else {
        work->deferred = 0;
        if (aocRunByName(g_aocSystem, work->textureTable, work->textureNode, 1))
            FUN_002ae8e4(g_aocSystem, work->textureTable, work->textureNode, 0x10000);
        else
            FUN_002c58c8(work->textureTable, work->textureNode);
    }
    work->speed = 0.3f;
    asdProcessCreateSimple(DAT_00403570, 2, 0, 0, FUN_001dfc64, FUN_002db92c, work);
}
}
