/* NON_MATCHING: the light-array base is not cached separately and the final attachment becomes a tail call. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/S1GfxModel.h"
#include "code/Code0017.h"

extern "C" {
struct Triple;
extern Triple DAT_00636ebc;
extern Triple DAT_00636ec8;
extern u32 DAT_00636e30[];
extern u32 DAT_00636e6c[];
extern GfxModelState g_gfxSettings;
extern ModelSlotList* g_asdModelSlotArray0[2];
void tripleClear(Triple* object);
AsdAllocator* asdMemoryGetDefaultAllocator(void);
u32* FUN_0014850c(AsdAllocator* allocator, const u32* description);
void FUN_0013d42c(const u32* settings, u32 options);
void FUN_00176538(u32* light);
void FUN_001445d4(void);
void FUN_00141724(void);
void FUN_00143424(void);
bool FUN_0018e9d8(ModelSlotList* parent, u32 child);

// Initialize the two model-slot light resources and attach their existing scene nodes.
void FUN_001399b0(const u32* settings, u32 options)
{
    // The counter occupies padding beginning at byte three in the shared view.
    // A typed union there would increase its alignment and move existing fields.
    struct InitializationView {
        u8 unk00[0x1C];
        u32 modelCount;
        u32 primaryNode;
        u8 unk24[8];
        u32 secondaryNode;
        u8 unk30[0x14];
        u32 auxiliaryNode;
        u8 unk48[0x44];
        u32* lights[2];
        u32 builders[2];
    };
    typedef char InitializationOffsets[offsetof(InitializationView, modelCount) == 0x1C &&
        offsetof(InitializationView, auxiliaryNode) == 0x44 &&
        offsetof(InitializationView, lights) == 0x8C &&
        offsetof(InitializationView, builders) == 0x94 ? 1 : -1];
    tripleClear(&DAT_00636ebc);
    tripleClear(&DAT_00636ec8);
    InitializationView* state = reinterpret_cast<InitializationView*>(&g_gfxSettings);
    state->modelCount = 0;
    state->lights[0] = FUN_0014850c(asdMemoryGetDefaultAllocator(), DAT_00636e30);
    state->lights[1] = FUN_0014850c(asdMemoryGetDefaultAllocator(), DAT_00636e6c);
    FUN_0013d42c(settings, options);
    for (s32 i = 0; i < 2; ++i) {
        FUN_001767a4(state->lights[i], reinterpret_cast<void *>(state->builders[i]));
        FUN_00176538(state->lights[i]);
    }
    FUN_001445d4();
    FUN_00141724();
    FUN_00143424();
    if (g_asdModelSlotArray0[0] != NULL) {
        if (state->primaryNode != 0) {
            FUN_0018e9d8(g_asdModelSlotArray0[0], state->primaryNode);
        }
        if (state->auxiliaryNode != 0) {
            FUN_0018e9d8(g_asdModelSlotArray0[0], state->auxiliaryNode);
        }
    }
    if (g_asdModelSlotArray0[1] != NULL && state->secondaryNode != 0) {
        FUN_0018e9d8(g_asdModelSlotArray0[1], state->secondaryNode);
    }
}
}
