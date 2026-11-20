/* NON_MATCHING: the light-array base is not cached separately and the final attachment becomes a tail call. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"
#include "code/Code0017.h"
#include "gfx/GfxSettings.h"

extern "C" {
struct Triple;
extern Triple DAT_00636ebc;
extern Triple g_asdMdlObjectList;
extern u32 DAT_00636e30[];
extern u32 DAT_00636e6c[];
extern ModelSlotList* g_asdModelSlotArray0[2];
void tripleClear(Triple* object);
AsdAllocator* asdMemoryGetDefaultAllocator(void);
u32* FUN_0014850c(AsdAllocator* allocator, const u32* description);
void FUN_0013d42c(const u32* settings, u32 options);
void FUN_00176538(void* light);
void FUN_001445d4(void);
void FUN_00141724(void);
void FUN_00143424(void);
bool nw_gfx_SceneNode_AttachChild(ModelSlotList* parent, u32 child);

// Initialize the two model-slot light resources and attach their existing scene nodes.
void FUN_001399b0(const u32* settings, u32 options)
{
    tripleClear(&DAT_00636ebc);
    tripleClear(&g_asdMdlObjectList);
    GfxSettings *state = &g_gfxSettings;
    state->unk1C = 0;
    state->attachInfo[0] = FUN_0014850c(asdMemoryGetDefaultAllocator(), DAT_00636e30);
    state->attachInfo[1] = FUN_0014850c(asdMemoryGetDefaultAllocator(), DAT_00636e6c);
    FUN_0013d42c(settings, options);
    for (s32 i = 0; i < 2; ++i) {
        asdScenePassVisit(state->attachInfo[i], state->transformBuilder[i]);
        FUN_00176538(state->attachInfo[i]);
    }
    FUN_001445d4();
    FUN_00141724();
    FUN_00143424();
    if (g_asdModelSlotArray0[0] != NULL) {
        if (state->node0 != 0) {
            nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0[0], state->node0);
        }
        if (state->auxiliaryNode != 0) {
            nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0[0], state->auxiliaryNode);
        }
    }
    if (g_asdModelSlotArray0[1] != NULL && state->node1 != 0) {
        nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0[1], state->node1);
    }
}
}
