/* NON_MATCHING: retail emits 'adds r4, r0, #4'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Range { u32 reserved; void *begin; void *end; };
void asdOperatorDeleteArray(void *array);
/* The retail iterator has no element destructor side effects. */
Range *FUN_002fecc2(Range *range) {
    asdOperatorDeleteArray(range->begin);
    return range;
}
}
