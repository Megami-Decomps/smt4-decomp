#include "common.h"

extern "C" {
extern s32 FUN_001ba3d0(u16 id);
extern u16 FUN_0049c9a0(const u16 *id);
}

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u16 id;
} SortEntry;


/* Compare function for sorting entries: by the rank of their id, then by their secondary key. */
int FUN_00493e94(const SortEntry *a, const SortEntry *b)
{
    u16 idA = a->id;
    u16 idB = b->id;
    int rankA = FUN_001ba3d0(idA);
    int rankB = FUN_001ba3d0(idB);
    int diff = rankB - rankA;

    if (diff != 0) {
        return diff;
    }
    const u16 *keyA = reinterpret_cast<const u16 *>(a);
    const u16 *keyB = reinterpret_cast<const u16 *>(b);
    u16 orderA = FUN_0049c9a0(keyA);
    u16 orderB = FUN_0049c9a0(keyB);
    return orderA - orderB;
}

} /* extern "C" */
