#include "shard/W6_W6Match3_Record08Sub2.h"

extern "C" const Record08Sub2SortKeys* dataTable08Sub2GetRecord(u16 id);

// Sort table 08/sub2 IDs by descending alternate primary and secondary keys.
extern "C" s32 dataTable08Sub2CompareAlternateKeysDescending(const u16* leftId, const u16* rightId)
{
    const Record08Sub2SortKeys* left = dataTable08Sub2GetRecord(*leftId);
    const Record08Sub2SortKeys* right = dataTable08Sub2GetRecord(*rightId);
    s32 difference = right->alternatePrimary - left->alternatePrimary;
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(*leftId);
        right = dataTable08Sub2GetRecord(*rightId);
        difference = right->secondary - left->secondary;
    }
    return difference;
}
