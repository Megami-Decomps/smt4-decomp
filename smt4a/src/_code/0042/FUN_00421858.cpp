#include "shard/VariantController.h"
#include "shard/FUN_00421858.h"

extern "C" {
VariantEntry *FUN_0040619c(VariantCollection *variants, u32 index);

// Enable one variant for the controller state and disable the other entries.
void FUN_00421858(VariantController *controller)
{
    u32 selected = 0;
    if (controller->state == 4)
        selected = 1;
    else if (controller->state == 5)
        selected = 2;
    if (controller->object != NULL) {
        s32 count = controller->object->variants->count;
        for (u32 index = 0; static_cast<s32>(index) < count; ++index) {
            VariantEntry *entry = FUN_0040619c(controller->object->variants, index);
            if (entry != NULL) {
                if (selected == index)
                    entry->flags &= ~3u;
                else
                    entry->flags |= 3;
            }
        }
    }
}
}
