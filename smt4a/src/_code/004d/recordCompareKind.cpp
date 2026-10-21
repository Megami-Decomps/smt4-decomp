/* NON_MATCHING: compiler reverses the conditional-move order for the three-way kind comparison. */
#include "shard/W5_W5Match2_ScalarArguments.h"
extern "C" {
/* Classify the input kind relative to ten. */
s32 recordCompareKind(const InputKindRecord *record) { s32 kind=record->kind; return kind>10 ? 2 : kind==10 ? 1 : 0; }
}
