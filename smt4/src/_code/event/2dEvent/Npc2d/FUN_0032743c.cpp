/* NON_MATCHING: optional-origin/deferred-load block placement and callback argument stores differ. */
#include "event/NpcTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct NpcTextureSource {
    u8 unk00[0x24];
    u16 textureId;
};
struct NpcTextureImage {
    u8 unk00[8];
    s16 width, height;
    const s16 *origin;
};
typedef char NpcTextureRecordOffsets[
    offsetof(NpcTextureSource, textureId) == 0x24 &&
    offsetof(NpcTextureImage, width) == 8 &&
    offsetof(NpcTextureImage, height) == 0xA &&
    offsetof(NpcTextureImage, origin) == 0xC ? 1 : -1];

extern "C" {
extern const char DAT_0040357c[], DAT_00403570[];
extern const u8 DAT_0040356c[3];
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
NpcTextureSource *dataTable25FindById(s32);
NpcTextureImage *FUN_002bf4f8(u32, s32);
s32 FUN_002c1d5c();
void FUN_002c58c8(s32, s32);
s32 FUN_001dfc64(u32);
void FUN_002db92c(u32);

/* Create an NPC texture process with its three image rectangles and optional first-image origin. */
void FUN_0032743c(s32 npcId)
{
    asdDebugTrace(DAT_0040357c, 900);
    NpcTextureWork *work = (NpcTextureWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcTextureWork), 1);
    memClear(work, sizeof(NpcTextureWork));
    work->scale.x = 1.0f;
    work->scale.y = 1.0f;
    work->scale.z = 0.0f;
    work->state = 0x41;
    work->textureTable = 0x26;
    work->npc.lastImage = -1;
    work->npcId = npcId;
    work->npc.active = 1;
    work->npc.unk68 = 0;
    work->npc.unk6C = 0;
    work->npc.unk70 = 0;
    work->npc.unk71 = 0;
    work->npc.source = dataTable25FindById(npcId);
    work->textureNode = work->npc.source->textureId;
    for (u32 index = 0; index < 3; ++index) {
        NpcTextureImage *image = FUN_002bf4f8(0x32, DAT_0040356c[index]);
        work->npc.sizes[index][0] = image->width;
        work->npc.sizes[index][1] = image->height;
        if (index == 0 && image->origin != NULL) {
            work->npc.origin[0] = image->origin[0];
            work->npc.origin[1] = image->origin[1];
        }
    }
    work->npc.sizes[1][0] = 72.0f;
    work->x = 72;
    work->scale.z = 0.265f;
    work->rotation = 0.0f;
    work->scale.y = 0.0f;
    work->display.screenRegion = 5;
    work->y = (s32)work->npc.sizes[1][1];
    if (FUN_002c1d5c()) {
        work->deferred = 1;
    } else {
        work->deferred = 0;
        FUN_002c58c8(work->textureTable, work->textureNode);
        FUN_002c58c8(0x32, 0);
    }
    work->speed = 0.3f;
    asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403570), 2, 0, 0, FUN_001dfc64, FUN_002db92c, reinterpret_cast<u32>(work));
}
}
