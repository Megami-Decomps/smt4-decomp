/* NON_MATCHING: packed-pair address formation and inlined comparator register allocation differ from retail. */
#include "common.h"

struct FusionDevilRecord {
    u16 id;
    u8 race;
    u8 level;
};
struct FusionPair {
    u32 packedIds;
    u32 unk04;
};
struct FusionPairList {
    u8 unk0000[0x1390];
    FusionPair pairs[1];
};

extern "C" {
extern FusionPairList *g_unite;
FusionDevilRecord *devilGetRecord(u32 id);
}

static __inline s32 compareFusionDevilDetails(u32 first, u32 second)
{
    const FusionDevilRecord *a = devilGetRecord(first);
    const FusionDevilRecord *b = devilGetRecord(second);
    s32 result = b->race - a->race;
    if (result == 0) {
        result = a->level - b->level;
        if (result == 0) {
            result = b->id - a->id;
        }
    }
    return result;
}

static __inline s32 compareFusionDevils(u32 first, u32 second)
{
    const FusionDevilRecord *a = devilGetRecord(first);
    const FusionDevilRecord *b = devilGetRecord(second);
    s32 result = b->level - a->level;
    if (result == 0) {
        result = compareFusionDevilDetails(first, second);
    }
    return result;
}

// Sort fusion pairs lexicographically by their first and second demons.
extern "C" s32 uniteComparePairsDescending(const u16 *first, const u16 *second)
{
    FusionPairList *list = g_unite;
    s32 result = compareFusionDevils(list->pairs[*first].packedIds & 0x7fff,
                                      list->pairs[*second].packedIds & 0x7fff);
    if (result == 0) {
        result = compareFusionDevils((list->pairs[*first].packedIds & 0x3fffffff) >> 15,
                                      (list->pairs[*second].packedIds & 0x3fffffff) >> 15);
    }
    return result;
}
