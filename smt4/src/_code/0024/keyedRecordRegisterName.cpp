/* NON_MATCHING: sentinel loop remains rolled instead of retail's 48 byte stores; global-load scheduling differs. */
#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
s32 FUN_002522f8(u8*, u32, const char*, ...);
const u8* FUN_002522e0(const u8*, u32);
extern u32 g_keyedRecordCount;
extern KeyedRecordStorage g_keyedRecords[];

u32 keyedRecordRegisterName(const char* name)
{
    memClear(&g_keyedRecords[g_keyedRecordCount], sizeof(KeyedRecordStorage));
    u8* storedName = g_keyedRecords[g_keyedRecordCount].name;
    FUN_002522f8(storedName, sizeof(g_keyedRecords[0].name), "%s", name);
    const u8* extension = FUN_002522e0(storedName, '.');
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
