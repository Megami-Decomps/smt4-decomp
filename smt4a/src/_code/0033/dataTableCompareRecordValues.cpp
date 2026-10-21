/* NON_MATCHING: compiler merges null checks and uses conditional halfword loads instead of the retail branch. */
#include "common.h"
namespace { struct Record { u32 header; u16 value; }; }
extern "C" {
Record *FUN_001ad9b4(u32 index);
s32 dataTableCompareRecordValues(const u16 *firstIndex, const u16 *secondIndex)
{
    Record *first = FUN_001ad9b4(*firstIndex);
    Record *second = FUN_001ad9b4(*secondIndex);
    if (first != NULL && second != NULL) { return second->value - first->value; }
    return 0;
}
}
