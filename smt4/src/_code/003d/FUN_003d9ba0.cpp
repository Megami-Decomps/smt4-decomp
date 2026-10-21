/* NON_MATCHING: traversal counter and resource pointer use r1/r2 opposite to retail. */
#include "common.h"

struct ModelRenderState {
    u8 unk000[0x1f6];
    u8 enabled; // 0x1f6
};
struct ModelInstance {
    u8 unk00[0x2c];
    ModelRenderState *renderState; // 0x2c
};
struct ModelResource {
    u32 flags; // 0x00
    u32 unk04;
    ModelInstance *model; // 0x08
};
struct ModelSlot {
    ModelResource *resource; // 0x00
    u8 unk04[0x24];
};
struct ModelCollection {
    u8 unk000[0x190];
    ModelSlot slots[50]; // 0x190
};

// Mark every occupied model slot and disable its render-state flag.
extern "C" void FUN_003d9ba0(ModelCollection *collection)
{
    for (s32 i = 0; i < 50; ++i) {
        ModelResource *resource = collection->slots[i].resource;
        if (resource != NULL) {
            resource->flags |= 2;
            resource->model->renderState->enabled = 0;
        }
    }
}
