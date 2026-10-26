/* NON_MATCHING: retail copies the key argument into r4 (mov r4, r1) before the call and never reads it; not reproducible (inline wrapper tried). */
#include "common.h"

struct LookupEntry {
    u32 unk00;      // 0x00
    u32 unk04;      // 0x04
    u8 payload[1]; // 0x08
};

extern "C" LookupEntry* FUN_001ad9b4(void* context, u32 key);

static __inline LookupEntry* findEntry(void* context, u32 key)
{
    return FUN_001ad9b4(context, key);
}

extern "C" u8* FUN_00156850(void* context, u32 key)
{
    LookupEntry* entry = findEntry(context, key);
    return entry != NULL ? entry->payload : NULL;
}
