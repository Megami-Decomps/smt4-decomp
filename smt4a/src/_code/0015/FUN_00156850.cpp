/* NON_MATCHING: compiler omits retail mov r4, r1. */
#include "common.h"

struct LookupEntry {
    u32 unk00;      // 0x00
    u32 unk04;      // 0x04
    u8 payload[1]; // 0x08
};

extern "C" LookupEntry* FUN_001ad9b4(void* context, u32 key);

extern "C" u8* FUN_00156850(void* context, u32 key)
{
    LookupEntry* entry = FUN_001ad9b4(context, key);
    return entry != NULL ? entry->payload : NULL;
}
