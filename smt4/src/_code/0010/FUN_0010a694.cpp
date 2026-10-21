/* NON_MATCHING: typed record stores are rescheduled; retail writes key/value/flags before name and the following terminator. */
#include "shard/W6_W6Match5_SentinelLookup.h"

extern "C" {
extern SentinelLookupEntry g_sentinelLookupEntries[];

// Append a new key/value pair, keeping the following terminator initialized.
void FUN_0010a694(u32 key, u32 value, u8 flags)
{
    for (s32 index = 0; ; ++index) {
        SentinelLookupEntry *entry = &g_sentinelLookupEntries[index];
        if (entry->key == 0xf890) {
            entry->key = key;
            entry->value = value;
            entry->flags = flags;
            entry->name = NULL;
            entry[1].key = 0xf890;
            entry[1].value = 0;
            entry[1].flags = 0;
            entry[1].name = NULL;
            return;
        }
        if (entry->key == key)
            return;
    }
}
}
