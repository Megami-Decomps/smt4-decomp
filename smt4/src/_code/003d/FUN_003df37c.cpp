/* NON_MATCHING: retail uses mov r5, r0 where the compiled block uses mov r4, r0. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceKeyLookup;


struct LookupManager;

extern "C" {
LookupManager* FUN_002b5c44(void);
s32 tokenResolveAddress(LookupManager* manager, LookupEntry** entry, u32 key);

s32 FUN_003df37c(const u32* key, u32* value)
{
    LookupEntry* entry;
    LookupManager* manager = FUN_002b5c44();
    s32 result = tokenResolveAddress(manager, &entry, *key);
    if ((static_cast<u32>(result) >> 31) == 0) {
        *value = entry->value;
        result = 0;
    }
    return result;
}
}
