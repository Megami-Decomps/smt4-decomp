/* NON_MATCHING: literal pool order for speed (0.3f) vs callback pointers (update, end) differs (10 diff lines). */
#include "event/NpcTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct NpcTextureSource {
    u8 unk00[0x24];
    u16 textureId;
};

extern "C" {
extern const char DAT_0040357c[], DAT_00403570[];
extern const u8 DAT_0040356c[3];
void memClear(void *, u32);
NpcTextureSource *dataTable25FindById(s32);
s32 eventIsSkipping();
void asdTMTexTablePrepareNodeImage(s32, s32);
s32 npc2dPortraitUpdate(u32);
void FUN_002db92c(u32);

/* Create an NPC texture process with its three image rectangles and optional first-image origin. */
void npc2dCreatePortraitCenterJob(s32 npcId)
{
    asdDebugTrace(DAT_0040357c, 900);
    NpcTextureWork *work = (NpcTextureWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1);
    memClear(work, sizeof(NpcTextureWork));
    work->scale = 1.0f;
    work->opacity = 1.0f;
    work->fadeStep = 0.0f;
    work->state = 0x41;
    work->textureTable = 0x26;
    work->lastImage = -1;
    work->npcId = npcId;
    work->active = 1;
    work->shortCycleFrame = 0;
    work->longCycleFrame = 0;
    work->appearEventQueued = 0;
    work->fadeOutEventQueued = 0;
    work->source = dataTable25FindById(npcId);
    work->textureNode = work->source->textureId;
    for (u32 index = 0; index < 3; ++index) {
        TextureTableEntryIV *image = asdTMTexTableEntryAt(0x32, DAT_0040356c[index]);
        work->sizes[index][0] = image->x;
        work->sizes[index][1] = image->y;
        if (index == 0 && image->placement != NULL) {
            work->origin[0] = image->placement->width;
            work->origin[1] = image->placement->height;
        }
    }
    work->sizes[1][0] = 72.0f;
    work->x = 72;
    work->fadeStep = 0.265f;
    work->rotation = 0.0f;
    work->opacity = 0.0f;
    work->screenRegion = 5;
    work->y = (s32)work->sizes[1][1];
    if (!eventIsSkipping()) {
        work->loadStep = 0;
        asdTMTexTablePrepareNodeImage(work->textureTable, work->textureNode);
        asdTMTexTablePrepareNodeImage(0x32, 0);
    } else {
        work->loadStep = 1;
    }
    AsdProcUpdateFunc update = npc2dPortraitUpdate;
    AsdProcFunc end = FUN_002db92c;
    work->speed = 0.3f;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, update, end, reinterpret_cast<u32>(work));
}
}
