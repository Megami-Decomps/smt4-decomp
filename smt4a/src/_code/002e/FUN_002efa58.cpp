/* NON_MATCHING: retail emits 'ldmia r1, {r1, r3}'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
void _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratorplEi(Pair *output, const Pair *source, u32 count);
void _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratordeEv(void *object, const Pair *value);
void FUN_002efa58(void *object, const Pair *source, u32 count) {
    Pair temporary;
    Pair input = *source;
    _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratorplEi(&temporary, &input, count);
    Pair copy = temporary;
    _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratordeEv(object, &copy);
}
}
