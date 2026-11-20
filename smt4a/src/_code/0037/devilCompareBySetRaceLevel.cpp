#include "gamedata/NkmBaseRecordA.h"

extern "C" {

u32 compendiumEntryIsRegistered(u16 id);

/* qsort comparator over demon IDs: by the sets compendiumEntryIsRegistered returns (a subset sorts first), then race (descending), level (ascending) and ID (descending). */
int devilCompareBySetRaceLevel(const u16 *left, const u16 *right)
{
    u32 leftSet = compendiumEntryIsRegistered(*left);
    u32 rightSet = compendiumEntryIsRegistered(*right);
    int result;

    if ((rightSet & ~leftSet) != 0) {
        return 1;
    }
    if ((leftSet & ~rightSet) != 0) {
        return -1;
    }
    const NkmBaseRecordA *a = nkmBaseGetRecord(*left);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*right);
    result = b->race - a->race;
    if (result == 0) {
        result = a->level - b->level;
        if (result == 0) {
            result = b->id - a->id;
        }
    }
    return result;
}

} /* extern "C" */
