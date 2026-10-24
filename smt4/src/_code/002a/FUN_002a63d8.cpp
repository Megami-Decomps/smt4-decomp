/* NON_MATCHING: retail re-expands every relative-pointer load and null test (no common-subexpression sharing between end() and begin(), no loop unrolling) and keeps zero in r6; this build shares the loads and unrolls the innermost loop. No flag combination tried (-O1, -O2, -O0, -Ospace) reproduces it. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

typedef ResourceRelativePointer<ResourceRelativePointer<void> > RelativePointerList;

// A resource record holding a counted list of relative pointers to the next level.
struct ElementTable {
    u8 unk00[0x2c];
    u32 count;
    RelativePointerList items; // 0x30
    ResourceRelativePointer<void> *begin() const { return items.get(); }
    ResourceRelativePointer<void> *end() const { return items.get() + count; }
};
struct GroupTable {
    u8 unk00[0xc];
    u32 count;
    RelativePointerList items; // 0x10
    ResourceRelativePointer<void> *begin() const { return items.get(); }
    ResourceRelativePointer<void> *end() const { return items.get() + count; }
};
struct ItemTable {
    u32 count;
    RelativePointerList items; // 0x04
    ResourceRelativePointer<void> *begin() const { return items.get(); }
    ResourceRelativePointer<void> *end() const { return items.get() + count; }
};
struct ItemRecord {
    u8 unk00[0x14];
    u32 value; // 0x14
};

// Stores `value` in every leaf record of the graphics file's model/element/group/item hierarchy.
extern "C" void FUN_002a63d8(GraphicsResourceFile *file, u32 value)
{
    GraphicsModelDictionaryEntry *modelEnd = file->end();
    for (GraphicsModelDictionaryEntry *model = file->begin(); model != modelEnd; ++model) {
        ResourceRelativePointer<void> *elementEnd = model->model.get()->end();
        for (ResourceRelativePointer<void> *elementEntry = model->model.get()->begin(); elementEntry != elementEnd; ++elementEntry) {
            ElementTable *element = static_cast<ElementTable *>(elementEntry->get());
            ResourceRelativePointer<void> *groupEnd = element->end();
            for (ResourceRelativePointer<void> *groupEntry = element->begin(); groupEntry != groupEnd; ++groupEntry) {
                GroupTable *group = static_cast<GroupTable *>(groupEntry->get());
                ResourceRelativePointer<void> *itemListEnd = group->end();
                for (ResourceRelativePointer<void> *itemListEntry = group->begin(); itemListEntry != itemListEnd; ++itemListEntry) {
                    ItemTable *itemList = static_cast<ItemTable *>(itemListEntry->get());
                    ResourceRelativePointer<void> *itemEnd = itemList->end();
                    for (ResourceRelativePointer<void> *itemEntry = itemList->begin(); itemEntry != itemEnd; ++itemEntry) {
                        static_cast<ItemRecord *>(itemEntry->get())->value = value;
                    }
                }
            }
        }
    }
}
