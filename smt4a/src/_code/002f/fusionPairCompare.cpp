#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

/* Tie-break two demons by descending race, ascending level, and descending demon id. */
static __inline s32 compareFusionDevilDetails(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 order = b->race - a->race;
    if (order == 0) {
        order = a->level - b->level;
        if (order == 0) {
            order = b->id - a->id;
        }
    }
    return order;
}

/* Order two demons by descending level, then by descending race, ascending level, and descending demon id. */
static __inline s32 compareFusionDevils(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 order = b->level - a->level;
    if (order == 0) {
        order = compareFusionDevilDetails(first, second);
    }
    return order;
}

/* Sort fusion pairs lexicographically by their first and second demons, descending. */
extern "C" s32 fusionPairCompare(const u16 *first, const u16 *second)
{
    UniteWorkA *list = g_unite;
    u16 firstId = list->pairList.pairs[*first].packedIds & 0x7FFF;
    u16 secondId = list->pairList.pairs[*second].packedIds & 0x7FFF;
    s32 result = compareFusionDevils(&firstId, &secondId);
    if (result == 0) {
        firstId = (list->pairList.pairs[*first].packedIds & 0x3FFFFFFF) >> 15;
        secondId = (list->pairList.pairs[*second].packedIds & 0x3FFFFFFF) >> 15;
        result = compareFusionDevils(&firstId, &secondId);
    }
    return result;
}
