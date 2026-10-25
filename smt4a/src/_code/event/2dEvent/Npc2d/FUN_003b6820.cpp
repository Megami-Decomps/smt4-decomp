/* NON_MATCHING: split scale initialization and stored variant reload now match; saved arguments, placement dispatch, and task argument scheduling still differ. */
#include "event/NpcTextureWork.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/JobWork.h"
struct AocSystemA;
extern "C" {
extern AocSystemA *g_aocSystem;
extern const char DAT_0052f4fc[], DAT_0052f4f0[];
s32 gameFlagIsSet(u32 flag);
u32 FUN_00283498(u32 id);
const u16 *dataTable19FindAddonWord(u32 id, u32 variant);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracking);
void sysMemClear(void *memory, u32 size);
s32 FUN_00162ea4();
s32 aocRunByName(AocSystemA *system, u32 table, u32 file, s32 mode);
void aocLoadTextureNode(AocSystemA *system, u32 table, u32 file, u32 flags);
void asdTMTexLoadMainHeap(u32 table, u32 file);
void FUN_002897cc(JobWork *job);
void FUN_0034da3c(JobWork *job);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 first, s32 second,
    void (*update)(JobWork *), void (*finish)(JobWork *), void *data);

void FUN_003b6820(u32 id, s32 placement, u32 variant)
{
    // This constructor's Apocalypse allocation extends the shared NPC work prefix to 0xBC.
    union PortraitTaskWorkA {
        NpcTextureWork base;
        struct {
            u8 prefix[0x34];
            f32 opacity;
            u32 screenRegion, mode, table, file, handle;
            u8 unk4C[8];
            u32 variant, normalizedId;
            u8 unk5C[0x14];
            u32 cached[6];
            u8 tail[0x34];
        } create;
    };
    typedef char PortraitTaskWorkSizeCheck[sizeof(PortraitTaskWorkA) == 0xBC &&
        offsetof(PortraitTaskWorkA, create.variant) == 0x54 ? 1 : -1];
    if (gameFlagIsSet(0x522) && dataTable19FindAddonWord(FUN_00283498(id), variant) == NULL)
        return;
    asdDebugTrace(DAT_0052f4fc, 0x380);
    PortraitTaskWorkA *work = static_cast<PortraitTaskWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PortraitTaskWorkA), 1));
    sysMemClear(work, sizeof(PortraitTaskWorkA));
    work->base.scale.x = 1.0f;
    work->base.scale.y = 1.0f;
    work->base.scale.z = 0.0f;
    work->create.handle = 0xFFFFFFFF;
    work->base.state = 0x41;
    work->create.variant = variant;
    work->base.npcId = id;
    work->base.y = 0;
    work->create.table = 1;
    work->create.opacity = 1.0f;
    for (s32 index = 0; index < 6; ++index)
        work->create.cached[index] = 0;
    work->create.normalizedId = FUN_00283498(id);
    work->create.file = *dataTable19FindAddonWord(work->create.normalizedId, work->create.variant);
    if (placement == 0) {
        work->base.x = -20;
        work->base.rotation = -48.0f;
        work->create.mode = 3;
    } else if (placement == 1) {
        work->base.x = 160;
        work->base.rotation = 48.0f;
        work->create.mode = 4;
    } else if (placement == 2) {
        work->base.x = 72;
        work->base.scale.z = 0.25f;
        work->base.rotation = 0.0f;
        work->base.scale.y = 0.0f;
        work->create.mode = 5;
    }
    if (FUN_00162ea4()) {
        work->base.deferred = 1;
    } else {
        work->base.deferred = 0;
        if (aocRunByName(g_aocSystem, work->create.table, work->create.file, 1))
            aocLoadTextureNode(g_aocSystem, work->create.table, work->create.file, 0x10000);
        else
            asdTMTexLoadMainHeap(work->create.table, work->create.file);
    }
    work->base.speed = 0.26f;
    asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0, FUN_002897cc, FUN_0034da3c, work);
}
}
