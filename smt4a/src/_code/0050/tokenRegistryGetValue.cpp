#include "shard/W5_W5Match5_TwinRecords.h"
#include "nn/Result.h"
#include "code/Code0050_Smt4a.h"

using namespace ResourceKeyLookup;


struct LookupManager;

extern "C" {
LookupManager* tokenTableGet(void);
s32 tokenResolveAddress(LookupManager* manager, LookupEntry** entry, u32 key);

nn::Result tokenRegistryGetValue(const u32* key, u32* value)
{
    LookupEntry* entry;
    LookupManager* manager = tokenTableGet();
    s32 result = tokenResolveAddress(manager, &entry, *key);
    if (nnResultIsFailure(result)) {
        return result;
    }
    *value = entry->value;
    return 0;
}
}
