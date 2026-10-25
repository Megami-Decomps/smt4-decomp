/* NON_MATCHING: retail copies the second entry pointer to r6 (mov r6, r4) before the first FUN_00230f44 call; the build keeps it in r4 (one instruction fewer). */
#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u16 id;
} SortEntry;

extern u16 FUN_0028fb3c(s32 id);
extern u16 FUN_00230f44(const SortEntry *entry);

/* Compare function for sorting entries: by the rank of their id, then by their secondary key. */
int FUN_0039fcd8(const SortEntry *a, const SortEntry *b)
{
    u16 idA = a->id;
    u16 idB = b->id;
    int diff = FUN_0028fb3c(idA) - FUN_0028fb3c(idB);

    if (diff != 0) {
        return diff;
    }
    u16 orderA = FUN_00230f44(a);
    u16 orderB = FUN_00230f44(b);
    return orderA - orderB;
}

} /* extern "C" */
