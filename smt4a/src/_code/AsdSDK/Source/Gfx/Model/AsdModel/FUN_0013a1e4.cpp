/* NON_MATCHING: descriptor initialization saves extra registers; capacity stores and command-list address calculation schedule differently. */
#include "gfx/ModelSceneInitialization.h"
#include "shard/S1Light.h"
extern "C" {
extern ModelSceneInitialization DAT_00636e30;
extern void *g_asdModelSlotArray3[2];
extern LightCount g_asdLightCount[2];
void *asdMemoryGetDefaultAllocator(void);
void *FUN_00148880(void *allocator, const ModelScenePoolDescription *description);
u32 asdGxCommandListCreate(void);
LightCommandBuffer *asdGxCommandListAllocNode(void);

/* Initialize both scene pools, their resource capacities and per-scene command lists. */
void FUN_0013a1e4(const ModelSceneConfiguration *configuration)
{
    DAT_00636e30.enabled = 1;
    DAT_00636e30.commandBytes = 0x280;
    ModelScenePoolDescription description;
    description.unk0C = 0;
    description.unk10 = 0;
    description.format = 0x8058;
    description.bufferBytes = 0x100000;
    description.entryCount = 0x200;
    description.options = 0x700;
    description.buffers = 2;
    description.lists = 2;
    description.alignment = 8;
    if (configuration != NULL)
        description.format = configuration->format;
    description.options |= 2;
    g_asdModelSlotArray3[0] = FUN_00148880(asdMemoryGetDefaultAllocator(), &description);
    g_asdModelSlotArray3[1] = FUN_00148880(asdMemoryGetDefaultAllocator(), &description);
    DAT_00636e30.scenes[0].modelCount = 0x100;
    DAT_00636e30.scenes[0].nodeCount = 0x100;
    DAT_00636e30.scenes[0].materialCount = 0x100;
    DAT_00636e30.scenes[0].auxiliaryCount = 10;
    DAT_00636e30.scenes[0].resourceCount = 0x100;
    DAT_00636e30.scenes[0].listCount = 10;
    if (configuration != NULL) {
        DAT_00636e30.scenes[0].bufferBytes = configuration->bufferBytes;
        DAT_00636e30.scenes[0].flags = configuration->flags;
    }
    DAT_00636e30.scenes[1].modelCount = 0x100;
    DAT_00636e30.scenes[1].nodeCount = 0x100;
    DAT_00636e30.scenes[1].materialCount = 0x100;
    DAT_00636e30.scenes[1].auxiliaryCount = 10;
    DAT_00636e30.scenes[1].resourceCount = 0x100;
    DAT_00636e30.scenes[1].listCount = 10;
    for (s32 index = 0; index < 2; ++index) {
        g_asdLightCount[index].render.context = asdGxCommandListCreate();
        g_asdLightCount[index].render.unk0c = asdGxCommandListCreate();
        g_asdLightCount[index].render.buffer = asdGxCommandListAllocNode();
    }
}
}
