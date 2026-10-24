/* NON_MATCHING: readable rewrite of the entry-vector sort (std::sort-style introsort + final insertion, ascending and descending); retail shares one epilogue after non-tail calls, keeps the 20-byte comparator object at sp+16 and copies the 0x30-byte entries as vldm+ldm, while the build tail-calls the short sorts, copies the entry tail with vector registers and places the temporaries 4 bytes lower. */
#include "common.h"

// A sortable 0x30-byte entry: eight float keys followed by four integer fields.
struct SortEntry {
    f32 keys[8];
    s32 fields[4];
};

struct SortEntryVector {
    /* 0x00 */ SortEntry *begin;
    /* 0x04 */ SortEntry *end;
};

struct AscendingCompare;
struct DescendingCompare;

extern "C" {
bool FUN_001a7388(const AscendingCompare *compare, const SortEntry *left, const SortEntry *right);
bool FUN_001a73fc(const DescendingCompare *compare, const SortEntry *left, const SortEntry *right);
void FUN_00199110(SortEntry *first, SortEntry *last, s32 depth);
void FUN_00198c38(SortEntry *first, SortEntry *last);
void FUN_001994c4(SortEntry *first, SortEntry *last, s32 depth);
void FUN_00198e10(SortEntry *first, SortEntry *last);
}

struct AscendingCompare {
    u32 state[5];   // the functor carries 20 bytes that its call never reads
    bool operator()(const SortEntry &left, const SortEntry &right) const { return FUN_001a7388(this, &left, &right); }
};

struct DescendingCompare {
    u32 state[5];
    bool operator()(const SortEntry &left, const SortEntry &right) const { return FUN_001a73fc(this, &left, &right); }
};

// Inserts every entry of [first, last) into the sorted run before it; the run's front is already in order, so no bounds
// check is needed.
template <class Compare>
static inline void unguardedInsertionSort(SortEntry *first, SortEntry *last)
{
    Compare compare;
    for (SortEntry *current = first; current != last; current++) {
        SortEntry value = *current;
        SortEntry *hole = current;
        SortEntry *previous = current - 1;
        while (compare(value, *previous)) {
            *hole = *previous;
            hole = previous;
            previous--;
        }
        *hole = value;
    }
}

static inline void sortAscending(SortEntry *first, SortEntry *last)
{
    s32 size = (s32)((u8 *)last - (u8 *)first);
    FUN_00199110(first, last, size / 0x30);
    if (size >= 0x330) {
        FUN_00198c38(first, first + 16);
        unguardedInsertionSort<AscendingCompare>(first + 16, last);
    } else {
        FUN_00198c38(first, last);
    }
}

static inline void sortDescending(SortEntry *first, SortEntry *last)
{
    s32 size = (s32)((u8 *)last - (u8 *)first);
    FUN_001994c4(first, last, size / 0x30);
    if (size >= 0x330) {
        FUN_00198e10(first, first + 16);
        unguardedInsertionSort<DescendingCompare>(first + 16, last);
    } else {
        FUN_00198e10(first, last);
    }
}

// Sorts the entries ascending, or descending when `ascending` is zero.
extern "C" void FUN_0016b8a8(SortEntryVector *entries, s32 ascending)
{
    SortEntry *first = entries->begin;
    SortEntry *last = entries->end;
    if (ascending != 0) {
        if (first != last) {
            sortAscending(first, last);
        }
    } else if (first != last) {
        sortDescending(first, last);
    }
}
