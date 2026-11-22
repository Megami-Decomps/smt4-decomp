#ifndef SHARD_W6_W6MATCH5_SENTINELLOOKUP_H
#define SHARD_W6_W6MATCH5_SENTINELLOOKUP_H

#include "common.h"

struct SentinelLookupEntry {
    u16 key;          // 0x00; 0xf890 terminates the table.
    u16 unk02;        // 0x02
    u32 value;        // 0x04
    u8 flags;         // 0x08
    u8 unk09[3];      // 0x09
    const char *name; // 0x0c
};

extern "C" SentinelLookupEntry g_sentinelLookupEntries[];

/* sentinelLookupGetValue's body: the value of `key`'s entry, 0 when the table has none. The text
 * converters (smt4 textConvertMarkup, smt4a textConvertMarkup) inline it to find a control code's argument count. */
static __inline u32 sentinelLookupValue(u32 key)
{
    for (s32 i = 0; ; ++i) {
        SentinelLookupEntry *entry = &g_sentinelLookupEntries[i];
        if (entry->key == 0xf890) {
            return 0;
        }
        if (entry->key == key) {
            return entry ? entry->value : 0;
        }
    }
}

#endif
