/* NON_MATCHING: compiler folds record address formation and does not preserve retail's final pointer check. */
#include "common.h"

namespace { struct Record { u8 padding[0x28]; f32 value; }; struct Pool { Record *records; u32 count; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Pool DAT_00464a70;
void FUN_002c44dc(u32 index, f32 value)
{
    if (DAT_00464a70.records != NULL && index < DAT_00464a70.count) {
        DAT_00464a70.records[index].value = value;
    }
}
}
