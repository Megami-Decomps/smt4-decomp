/* NON_MATCHING: relative-resource pointer rebasing and nested model-node traversal allocate registers differently. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

struct ModelNodeFlags {
    u32 unk00;
    u32 flags; // 0x04
};
struct ModelFlagEntry {
    ResourceRelativePointer<ModelNodeFlags> node; // 0x00
    u8 unk04[0x0c];
};
struct ModelFlagEntries {
    u8 unk00[0x28];
    ModelFlagEntry entries[1]; // 0x28
};
struct ModelFlagTable {
    u8 unk00[0x18];
    u32 count; // 0x18
    ResourceRelativePointer<ModelFlagEntries> entries; // 0x1c
};
struct ModelFlagResource {
    u32 flags; // 0x00
    u8 unk04[0xdc];
    ResourceRelativePointer<ModelFlagTable> table; // 0xe0
};
struct ModelFlagResourceOwner {
    u8 unk00[8];
    ModelFlagResource *resource; // 0x08
};
struct ModelFlagBlob {
    u8 unk00[0x2c];
    ModelFlagResourceOwner *owner; // 0x2c
};
struct ModelFlagView {
    u8 unk00[8];
    ModelFlagBlob *blob; // 0x08
};
struct ModelFlagSlot {
    u32 state; // 0x00
    u32 unk04;
    ModelFlagView *view; // 0x08
    u8 unk0c[0x44];
};
struct ModelFlagOwner {
    u8 unk00[8];
    ModelFlagView *view; // 0x08
    u32 unk0c;
    ModelFlagSlot slots[3]; // 0x10
};

static inline ModelFlagTable *modelFlagTable(ModelFlagView *view)
{
    ModelFlagResource *resource = view->blob->owner->resource;
    if (resource && (resource->flags & 0x40000092) != 0x40000092)
        resource = NULL;
    return resource->table.get();
}

static inline ModelNodeFlags *modelFlagNode(ModelFlagTable *table, u32 index)
{
    ModelFlagEntries *entries = table->entries.get();
    return entries ? entries->entries[index].node.get() : NULL;
}

// Propagate visibility-related flags from inactive attached models to the primary model.
extern "C" void modelResourceSetVisibility(ModelFlagOwner *owner)
{
    ModelFlagTable *primary = modelFlagTable(owner->view);
    for (s32 slot = 0; slot < 3; ++slot) {
        ModelFlagSlot *attachment = &owner->slots[slot];
        if (attachment->view && attachment->state == 0) {
            ModelFlagTable *other = modelFlagTable(attachment->view);
            for (u32 index = 0; index < primary->count; ++index) {
                u32 flags = modelFlagNode(primary, index)->flags;
                if (!(flags & 0x200) && (modelFlagNode(other, index)->flags & 0x200))
                    modelFlagNode(primary, index)->flags = flags | 0x240;
            }
        }
    }
}
