/* NON_MATCHING: pool field addressing and initialization use scalar stores instead of retail's paired stores. */
#include "sound/VoicePool.h"
#include "sound/VoiceManagerCalls.h"

extern "C" {
extern SoundVoicePool g_soundVoicePool;
extern u32 DAT_004c40f8;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Allocate an unused voice slot and its event buffer. */
u32 FUN_0034e310(s32 first, s32 second, s32 capacity)
{
    for (u32 index = 0; index < g_soundVoicePool.count; ++index) {
        if (g_soundVoicePool.entries[index].voice == 0) {
            g_soundVoicePool.entries[index].capacity = capacity;
            g_soundVoicePool.entries[index].buffer = g_soundVoicePool.allocator->allocate(capacity * 24, 4);
            void *buffer = g_soundVoicePool.entries[index].buffer;
            if (buffer == NULL) {
                return 0;
            }
            nn_os_CriticalSection_Enter(&DAT_004c40f8);
            g_soundVoicePool.entries[index].voice = nwSoundVoiceAllocate(0x80, 0, 0);
            nn_os_CriticalSection_Leave(&DAT_004c40f8);
            SoundVoicePoolEntry *entry = &g_soundVoicePool.entries[index];
            if (entry->voice == 0) {
                g_soundVoicePool.allocator->release(entry->buffer);
                return 0;
            }
            entry->counters[0] = 0;
            entry->counters[1] = 0;
            entry->counters[2] = 0;
            entry->counters[3] = 0;
            entry->timing[0] = 0;
            entry->timing[1] = 0;
            entry->timing[2] = 0;
            entry->timing[3] = 0;
            entry->volume = 0.707f;
            entry->targetVolume = 0.707f;
            entry->first = first;
            entry->second = second;
            return index;
        }
    }
    return 0xffffffff;
}
}
