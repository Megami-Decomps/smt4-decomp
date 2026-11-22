/* NON_MATCHING: register numbering only: after the two slot arrays retail puts the constant 0x100 in r7 and 10 in r6, armcc here uses r6 and r7 (same instructions and order otherwise). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlConfig.h"
#include "shard/S1Light.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

extern "C" {
extern void *DAT_00471c40;
extern AsdModelLimits DAT_004dadb0;
extern void *g_asdModelSlotArray3[2];
extern void *g_asdModelSceneRoots[2];
extern LightCount g_asdLightCount[2];

void *FUN_00111724(void *allocator, const AsdModelSlotConfig *config);
void *asdSceneRootCreate(void *allocator, const AsdModelLimits *limits);

// Set up the model system: the default allocator, the two slot arrays, the limits table and the
// per-scene command lists.
void FUN_00105a10(const AsdModelSettings *settings)
{
    DAT_00471c40 = asdMemoryGetDefaultAllocator();
    DAT_004dadb0.unk78 = 1;
    DAT_004dadb0.unk7c = 0x280;

    AsdModelSlotConfig config;
    if (settings != NULL) {
        config.flags = settings->slotFlags;
    }
    config.kind = 0x702;
    g_asdModelSlotArray3[0] = FUN_00111724(asdMemoryGetDefaultAllocator(), &config);
    g_asdModelSlotArray3[1] = FUN_00111724(asdMemoryGetDefaultAllocator(), &config);

    DAT_004dadb0.unk00 = 0x100;
    DAT_004dadb0.unk04 = 0x100;
    DAT_004dadb0.unk08 = 0x100;
    DAT_004dadb0.unk20 = 10;
    DAT_004dadb0.unk30 = 0x100;
    DAT_004dadb0.unk14 = 10;
    if (settings != NULL) {
        DAT_004dadb0.unk34 = settings->unk80;
        DAT_004dadb0.unk38 = settings->unk88;
    }
    g_asdModelSceneRoots[0] = asdSceneRootCreate(asdMemoryGetDefaultAllocator(), &DAT_004dadb0);
    DAT_004dadb0.unk3c = 0x100;
    DAT_004dadb0.unk40 = 0x100;
    DAT_004dadb0.unk44 = 0x100;
    DAT_004dadb0.unk5c = 10;
    DAT_004dadb0.unk6c = 0x100;
    DAT_004dadb0.unk50 = 10;
    g_asdModelSceneRoots[1] = asdSceneRootCreate(asdMemoryGetDefaultAllocator(), (const AsdModelLimits *)&DAT_004dadb0.unk3c);

    for (s32 i = 0; i < 2; i++) {
        LightCount *scene = &g_asdLightCount[i];
        scene->render.context = reinterpret_cast<u32>(asdGxCommandListCreate());
        scene->render.unk0c = reinterpret_cast<u32>(asdGxCommandListCreate());
        scene->render.buffer = (LightCommandBuffer *)asdGxCommandListAllocBlock();
    }
}
}
