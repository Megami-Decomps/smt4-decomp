/* NON_MATCHING: loop registers now match retail (index in ip, 0xf890 in r4); only the zero for the stores after the match lands in r5 where retail rematerializes it in ip. */
#include "shard/W6_W6Match5_SentinelLookup.h"

extern "C" {
extern SentinelLookupEntry g_sentinelLookupEntries[];

// Append a new key/value pair, keeping the following terminator initialized.
void FUN_0013f444(u32 key, u32 value, s8 flags)
{
    s32 index = 0;
    while (true) {
        SentinelLookupEntry *entry = &g_sentinelLookupEntries[index];
        if (entry->key == 0xf890) {
            entry->key = key;
            entry->value = value;
            entry->flags = flags;
            entry->name = NULL;
            SentinelLookupEntry *terminator = entry + 1;
            terminator->key = 0xf890;
            terminator->value = 0;
            terminator->flags = 0;
            terminator->name = NULL;
            return;
        }
        if (entry->key == key)
            return;
        ++index;
    }
}
}
