#include "common.h"
#include "code/Code001b.h"

namespace { struct Record { u8 padding[7]; u8 flags; }; }

extern "C" {
/* Reads or forwards the current state. */
Record *dataTable1bOr1cGetRecord(u32 id);
u32 dataTable1bOr1cRecordHasFlag1(u32 id)
{
    Record *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->flags & 1 : 0;
}
}
