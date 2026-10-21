#include "shard/W6_W6Match5_SentinelLookup.h"

extern "C" {
extern SentinelLookupEntry g_sentinelLookupEntries[];

// Looks up a value in a table terminated by key 0xf890.
u32 sentinelLookupGetValue(u32 key)
{
    for (s32 i = 0; ; ++i) {
        SentinelLookupEntry* entry = &g_sentinelLookupEntries[i];
        if (entry->key == 0xf890) {
            return 0;
        }
        if (entry->key == key) {
            return entry ? entry->value : 0;
        }
    }
}
}
