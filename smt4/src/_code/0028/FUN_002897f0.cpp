/* NON_MATCHING: bsearch argument setup folds the table count/entry-base calculation into a post-indexed load instead of retail's separate instructions. */
#include "shard/W6_W6Match5_NamedLookup.h"

struct NamedLookupTable {
    u32 count;                   // 0x00
    u8 unk04[0x14];
    NamedSortRecord entries[1];  // 0x18
};

extern "C" {
extern NamedLookupTable DAT_0043e3b0;
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const NamedSortRecord *, const NamedSortRecord *));

// Resolve a name/key pair to its original table index in the 0x820 identifier range.
u32 FUN_002897f0(u16 id, const NamedRecordName *name)
{
    NamedSortRecord key;
    for (s32 word = 0; word < 3; ++word)
        key.name.words[word] = name->words[word];
    key.key = id;
    u32 result = 0;
    NamedSortRecord *entry = static_cast<NamedSortRecord *>(
        libc_bsearch(&key, DAT_0043e3b0.entries, DAT_0043e3b0.count,
                     sizeof(NamedSortRecord), keyedRecordCompareName));
    if (entry)
        result = entry->index + 0x820;
    return result;
}
}
