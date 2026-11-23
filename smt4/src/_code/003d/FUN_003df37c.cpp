#include "shard/W5_W5Match5_TwinRecords.h"
#include "nn/Result.h"

using namespace ResourceKeyLookup;


struct LookupManager;

extern "C" {
LookupManager* tokenTableGet(void);
s32 tokenResolveAddress(LookupManager* manager, LookupEntry** entry, u32 key);

s32 FUN_003df37c(const u32* key, u32* value)
{
    LookupEntry* entry;
    s32 result = tokenResolveAddress(tokenTableGet(), &entry, *key);
    if (nnResultIsFailure(result)) {
        return result;
    }
    *value = entry->value;
    return 0;
}
}
