/* NON_MATCHING: register allocation differs (retail loads the 64-bit key as two plain words and needs four callee-saved registers; the compiler uses ldrd/ldm pairs and six). */
#include "common.h"
#include <algorithm>

struct KeyedRecord {
    u64 key;
    u32 unk08;
    u32 unk0C;
};

struct KeyedRecordLess {
    bool operator()(const KeyedRecord &left, const KeyedRecord &right) const { return left.key < right.key; }
};

/* std::__insertion_sort of 16-byte records ordered by their 64-bit key (the head-of-range pass of std::sort). */
template void std::__insertion_sort(KeyedRecord *, KeyedRecord *, KeyedRecordLess);
