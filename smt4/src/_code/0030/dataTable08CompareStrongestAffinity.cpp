/* NON_MATCHING: loop bound now matches (element <= 7); callee-saved register numbering of the records, affinities and elements still differs from retail. */
#include "shard/W6_W6Match2_RankedTableRecord.h"

extern "C" {
s32 FUN_0028886c(s32 left, s32 right);
extern s32 DAT_00402638[4];

// Compare strongest elemental affinity, its element, and finally the table order.
s32 dataTable08CompareStrongestAffinity(const u16 *left, const u16 *right)
{
    RankedTableRecord *first = dataTable08Sub2GetRecord(*left);
    RankedTableRecord *second = dataTable08Sub2GetRecord(*right);
    s32 firstAffinity = 0;
    s32 secondAffinity = 0;
    s32 firstElement = DAT_00402638[2];
    s32 secondElement = DAT_00402638[3];
    for (s32 element = 0; element <= 7; ++element) {
        if (FUN_0028886c(firstAffinity, first->elements.affinities[element] >> 10) > 0) {
            firstAffinity = first->elements.affinities[element] >> 10;
            firstElement = element;
        }
        if (FUN_0028886c(secondAffinity, second->elements.affinities[element] >> 10) > 0) {
            secondAffinity = second->elements.affinities[element] >> 10;
            secondElement = element;
        }
    }
    s32 result = secondElement - firstElement;
    if (result == 0) {
        result = FUN_0028886c(secondAffinity, firstAffinity);
        if (result == 0) {
            first = dataTable08Sub2GetRecord(*left);
            second = dataTable08Sub2GetRecord(*right);
            result = second->order - first->order;
        }
    }
    return result;
}
}
