#include "shard/W6_W6Match5_SentinelLookup.h"

/* Fills one table entry; used for the new entry and for the terminator after it. */
static void sentinelLookupSet(SentinelLookupEntry *entry, u32 key, u32 value, s32 flags, const char *name)
{
    entry->key = key;
    entry->value = value;
    entry->flags = flags;
    entry->name = name;
}

extern "C" {

/* Appends a new key/value pair unless the key is present, keeping the terminator after it. */
void sentinelLookupAdd(u32 key, u32 value, s8 flags)
{
    s32 index = 0;
    while (true) {
        SentinelLookupEntry *entry = &g_sentinelLookupEntries[index];
        if (entry->key == 0xf890) {
            sentinelLookupSet(entry, key, value, flags, NULL);
            sentinelLookupSet(entry + 1, 0xf890, 0, 0, NULL);
            return;
        }
        if (entry->key == key)
            return;
        ++index;
    }
}
}
