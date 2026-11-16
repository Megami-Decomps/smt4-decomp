#include "common.h"
namespace { struct Record { u32 header; u16 value; }; }
extern "C" {
Record *dataTable1bOr1cGetRecord(u32 index);
s32 dataTableCompareRecordValues(const u16 *firstIndex, const u16 *secondIndex)
{
    Record *first = dataTable1bOr1cGetRecord(*firstIndex);
    Record *second = dataTable1bOr1cGetRecord(*secondIndex);
    if (first == NULL) {
        return 0;
    }
    if (second == NULL) {
        return 0;
    }
    return second->value - first->value;
}
}
