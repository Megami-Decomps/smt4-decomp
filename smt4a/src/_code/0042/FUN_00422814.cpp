/* NON_MATCHING: slot field-address hoisting and paired-counter zero initialization differ. */
#include "gfx/LockedResourcePool.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {
extern LockedResourcePool g_soundVoicePool;
extern u32 g_soundVoiceCriticalSection;
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);

/* Allocate storage and a protected handle for the first unused pool slot. */
u32 FUN_00422814(s32 width, s32 height, s32 capacity)
{
    for (u32 index = 0; index < g_soundVoicePool.count; ++index) {
        if (g_soundVoicePool.slots[index].handle == 0) {
            g_soundVoicePool.slots[index].capacity = capacity;
            Obj557f00Allocator *allocator = g_soundVoicePool.allocator;
            g_soundVoicePool.slots[index].elements = (LockedPoolElement *)
                allocator->vtable->allocate(allocator, capacity * sizeof(LockedPoolElement), 4);
            if (g_soundVoicePool.slots[index].elements == NULL) {
                return 0;
            }
            nn_os_CriticalSection_Enter(&g_soundVoiceCriticalSection);
            g_soundVoicePool.slots[index].handle = FUN_001af874(0x80, 0, 0);
            nn_os_CriticalSection_Leave(&g_soundVoiceCriticalSection);
            LockedResourceSlot *slot = &g_soundVoicePool.slots[index];
            if (slot->handle == 0) {
                allocator = g_soundVoicePool.allocator;
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
