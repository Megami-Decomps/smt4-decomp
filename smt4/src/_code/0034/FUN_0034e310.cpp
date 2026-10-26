/* NON_MATCHING: pool field addressing and initialization use scalar stores instead of retail's paired stores. */
#include "sound/VoicePool.h"
#include "sound/VoiceManagerCalls.h"

extern "C" {
extern SoundVoicePool DAT_0044d0f8;
extern u32 DAT_004c40f8;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Allocate an unused voice slot and its event buffer. */
u32 FUN_0034e310(s32 first, s32 second, s32 capacity)
{
    for (u32 index = 0; index < DAT_0044d0f8.count; ++index) {
        if (DAT_0044d0f8.entries[index].voice == 0) {
            DAT_0044d0f8.entries[index].capacity = capacity;
            void *buffer = DAT_0044d0f8.allocator->allocate(capacity * 24, 4);
            DAT_0044d0f8.entries[index].buffer = buffer;
            if (buffer == NULL) {
                return 0;
            }
            nn_os_CriticalSection_Enter(&DAT_004c40f8);
            DAT_0044d0f8.entries[index].voice = FUN_002bd29c(0x80, 0, 0);
            nn_os_CriticalSection_Leave(&DAT_004c40f8);
            SoundVoicePoolEntry *entry = &DAT_0044d0f8.entries[index];
            if (entry->voice == 0) {
                DAT_0044d0f8.allocator->release(entry->buffer);
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
