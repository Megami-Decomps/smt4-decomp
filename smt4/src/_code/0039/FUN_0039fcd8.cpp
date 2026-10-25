#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u16 id;
} SortEntry;


/* Compare function for sorting entries: by the rank of their id, then by their secondary key. */
int FUN_0039fcd8(const SortEntry *a, const SortEntry *b)
{
    u16 idA = a->id;
    u16 idB = b->id;
    int diff = FUN_0028fb3c(idA) - FUN_0028fb3c(idB);

    if (diff != 0) {
        return diff;
    }
    const u16 *keyA = reinterpret_cast<const u16 *>(a);
    const u16 *keyB = reinterpret_cast<const u16 *>(b);
    u16 orderA = FUN_00230f44(keyA);
    u16 orderB = FUN_00230f44(keyB);
    return orderA - orderB;
}

} /* extern "C" */
