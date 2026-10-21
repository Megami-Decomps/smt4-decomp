/* NON_MATCHING: std::lower_bound uses different Thumb register allocation and smaller local storage; retail keeps the owner in R6, spills the midpoint/key, and enters through the bottom loop test. */
#include "common.h"
#include <algorithm>

struct ByteKeyEntry {
    u8 key;      // 0x00
    u8 unk01[7]; // 0x01
};
struct SortedByteEntries {
    u32 unk00;          // 0x00
    ByteKeyEntry* begin; // 0x04
    ByteKeyEntry* end;   // 0x08
};

extern "C" u32 FUN_0030d01e(const u8* first, const u8* second);

struct ByteKeyLess {
    bool operator()(const ByteKeyEntry& entry, const u8* key) const
    {
        return FUN_0030d01e(&entry.key, key) != 0;
    }
};

// Finds a byte-key entry with lower_bound and returns end when the key is absent.
extern "C" ByteKeyEntry* FUN_0030337e(SortedByteEntries* entries, const u8* key)
{
    ByteKeyEntry* first = std::lower_bound(entries->begin, entries->end, key, ByteKeyLess());
    if (first != entries->end && FUN_0030d01e(key, &first->key)) {
        first = entries->end;
    }
    return first;
}
