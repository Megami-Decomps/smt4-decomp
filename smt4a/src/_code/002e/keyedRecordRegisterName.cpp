/* NON_MATCHING: the slot-default loop stays rolled where retail unrolls it into 48 descending byte stores; the global-address loads are scheduled around the argument copy differently. */
#include <stdio.h>
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
void sysMemClear(void*, u32);
const u8* libc_strrchr(const u8*, u32);
extern u32 g_keyedRecordCount;
extern KeyedRecordStorage g_keyedRecords[];

u8 keyedRecordRegisterName(const char* name)
{
    sysMemClear(&g_keyedRecords[g_keyedRecordCount], sizeof(KeyedRecordStorage));
    u8* storedName = g_keyedRecords[g_keyedRecordCount].name;
    snprintf((char *)storedName, sizeof(g_keyedRecords[0].name), "%s", name);
    const u8* extension = libc_strrchr(storedName, '.');
    if (extension != NULL) {
        *const_cast<u8*>(extension) = 0;
    }
    const u8 index = static_cast<u8>(g_keyedRecordCount);
    KeyedRecordStorage& record = g_keyedRecords[g_keyedRecordCount];
    for (u32 slot = 0; slot < 16; ++slot) {
        for (u32 channel = 0; channel < 3; ++channel) {
            record.slots[slot].indices[channel] = 0xFF;
        }
    }
    ++g_keyedRecordCount;
    return index;
}
} // extern "C"
