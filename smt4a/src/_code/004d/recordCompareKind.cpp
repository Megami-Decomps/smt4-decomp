#include "shard/W5_W5Match2_ScalarArguments.h"
extern "C" {
/* Classify the input kind relative to ten. */
s32 recordCompareKind(const InputKindRecord *record)
{
    s32 kind = record->kind;
    if (kind < 10) {
        return 0;
    }
    if (kind == 10) {
        return 1;
    }
    return 2;
}
}
