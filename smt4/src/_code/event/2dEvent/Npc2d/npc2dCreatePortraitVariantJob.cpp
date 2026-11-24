/* NON_MATCHING: literal pool order for speed (0.3f) vs callback pointers (update, end) differs (10 diff lines). */
#include "event/NpcTextureWork.h"
#include "addon/aocMain.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "addon/AocSystem.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct NpcPortraitVariantRecord {
    u16 texture;
    u8 unk02[0x12];
};

extern "C" {
extern const char DAT_0040357c[];
extern const s8 DAT_00403570[];
s32 gameFlagIsSet(u32 flag);
NpcTextureSource *dataTable25FindById(u32 npc);
const NpcPortraitVariantRecord *aocContentGetIndexedRecord(const NpcTextureSource *source, u32 variant);
s32 eventIsSkipping(void);
s32 aocRunByName(AocSystem *system, s32 table, s32 node, s32 mode);
void asdTMTexTablePrepareNodeImage(s32 table, s32 node);
s32 npc2dPortraitUpdate(u32 process);
void FUN_002db92c(u32 process);

void npc2dCreatePortraitVariantJob(u32 npc, s32 position, u32 variant)
{
    if (gameFlagIsSet(0x522)) {
        if (aocContentGetIndexedRecord(dataTable25FindById(npc), variant) == NULL)
            return;
    }
    asdDebugTrace(DAT_0040357c, 788);
    NpcTextureWork *work = (NpcTextureWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1);
    memClear(work, sizeof(*work));
    work->scale = 1.0f;
    work->opacity = 1.0f;
    work->fadeStep = 0.0f;
    work->state = 65;
    work->npcId = npc;
    work->lastImage = -1;
    work->variantIndex = variant;
    work->textureTable = 3;
    work->source = dataTable25FindById(npc);
    work->textureNode = aocContentGetIndexedRecord(work->source, work->variantIndex)->texture;
    switch (position) {
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
        work->opacity = 0.0f;
        work->screenRegion = 5;
        break;
    }
    if (eventIsSkipping()) {
        work->loadStep = 1;
    } else {
        work->loadStep = 0;
        if (aocRunByName(g_aocSystem, work->textureTable, work->textureNode, 1))
            aocLoadTextureNode(reinterpret_cast<u32>(g_aocSystem), work->textureTable, work->textureNode, 0x10000);
        else
            asdTMTexTablePrepareNodeImage(work->textureTable, work->textureNode);
    }
    AsdProcUpdateFunc update = npc2dPortraitUpdate;
    AsdProcFunc end = FUN_002db92c;
    work->speed = 0.3f;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, update, end, reinterpret_cast<u32>(work));
}
}
