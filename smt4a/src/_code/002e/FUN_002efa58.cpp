/* NON_MATCHING: retail emits 'ldmia r1, {r1, r3}'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
void FUN_002f1840(Pair *output, const Pair *source, u32 count);
void FUN_003076e6(void *object, const Pair *value);
void FUN_002efa58(void *object, const Pair *source, u32 count) {
    Pair temporary;
    Pair input = *source;
    FUN_002f1840(&temporary, &input, count);
    Pair copy = temporary;
    FUN_003076e6(object, &copy);
}
}
