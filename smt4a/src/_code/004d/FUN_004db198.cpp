/* NON_MATCHING: the packed pair is read/written as one ldrd/strd u64 in retail (separate word accesses here) and the table-entries pointer is copied to r1 before the id compare; lookup, rounded level, u16 ids and saved registers match. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/PackedIdentifiers.h"
#include "gamedata/DataTableAccess_Table05Pair.h"

extern "C" {
const u8 *dataTable5GetEntries(void);
u16 FUN_004dc154(void *, u8, u16);

u32 FUN_004db198(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output)
{
    const DevilRecordA *first = FUN_00184310(firstId);
    const DevilRecordA *second = FUN_00184310(secondId);
    const Table05Pair *recipe = dataFindSymmetricPair(first->race, second->race);
    const u8 *levelBias = dataTable5GetEntries();
    if (first->id != second->id && recipe != NULL) {
        u32 level = first->level + second->level;
        if ((first->level + second->level) % 2 == 1)
            ++level;
        u16 result = FUN_004dc154(context, recipe->result, *levelBias + level / 2);
        if (result != first->id && result != second->id && result != 0) {
            // Both games use the same two packed operand ids and result id.
            output->firstIdentifier = firstId;
            output->secondIdentifier = secondId;
            output->resultIdentifier = result;
            return 1;
        }
    }
    return 0;
}
}
