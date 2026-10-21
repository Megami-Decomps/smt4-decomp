/* NON_MATCHING: compiler folds record address formation and does not preserve retail's final pointer check. */
#include "common.h"

namespace { struct Record { u8 padding[0x28]; f32 value; }; struct Pool { Record *records; u32 count; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Pool DAT_005b3bc0;
void FUN_0013f188(u32 index, f32 value)
{
    if (DAT_005b3bc0.records != NULL && index < DAT_005b3bc0.count) {
        DAT_005b3bc0.records[index].value = value;
    }
}
}
