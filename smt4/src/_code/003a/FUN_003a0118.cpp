/* Compares two entries: by FUN_0028fb3c key of their ids (descending), then by their aocEntryGetSortOrder rank. */
#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u16 id;
} SortEntry;

s32 FUN_003a0118(const SortEntry *first, const SortEntry *second)
{
    u16 idA = first->id;
    u16 idB = second->id;
    s32 keyA = FUN_0028fb3c(idA);
    s32 keyB = FUN_0028fb3c(idB);
    s32 diff = keyB - keyA;

    if (diff != 0) {
        return diff;
    }
    const u16 *a = reinterpret_cast<const u16 *>(first);
    const u16 *b = reinterpret_cast<const u16 *>(second);
    u16 rankA = aocEntryGetSortOrder(a);
    u16 rankB = aocEntryGetSortOrder(b);
    return rankA - rankB;
}

}
