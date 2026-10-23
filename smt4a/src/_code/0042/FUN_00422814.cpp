/* NON_MATCHING: slot field-address hoisting and paired-counter zero initialization differ. */
#include "gfx/LockedResourcePool.h"

extern "C" {
extern LockedResourcePool DAT_005880d0;
extern u32 DAT_00618518;
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);
u32 FUN_001af874(u32, u32, u32);

/* Allocate storage and a protected handle for the first unused pool slot. */
u32 FUN_00422814(s32 width, s32 height, s32 capacity)
{
    for (u32 index = 0; index < DAT_005880d0.count; ++index) {
        if (DAT_005880d0.slots[index].handle == 0) {
            DAT_005880d0.slots[index].capacity = capacity;
            Obj557f00Allocator *allocator = DAT_005880d0.allocator;
            DAT_005880d0.slots[index].elements = (LockedPoolElement *)
                allocator->vtable->allocate(allocator, capacity * sizeof(LockedPoolElement), 4);
            if (DAT_005880d0.slots[index].elements == NULL) {
                return 0;
            }
            nn_os_CriticalSection_Enter(&DAT_00618518);
            DAT_005880d0.slots[index].handle = FUN_001af874(0x80, 0, 0);
            nn_os_CriticalSection_Leave(&DAT_00618518);
            LockedResourceSlot *slot = &DAT_005880d0.slots[index];
            if (slot->handle == 0) {
                allocator = DAT_005880d0.allocator;
                allocator->vtable->release(allocator, slot->elements);
                return 0;
            }
            slot->cursors[0] = 0;
            slot->cursors[1] = 0;
            slot->cursors[2] = 0;
            slot->cursors[3] = 0;
            slot->submitted = 0;
            slot->completed = 0;
            slot->scaleX = 1.0f;
            slot->scaleY = 1.0f;
            slot->width = width;
            slot->height = height;
            return index;
        }
    }
    return 0xFFFFFFFF;
}
}
