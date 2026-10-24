#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
const Pair *_ZNSt6vectorIb12AsdAllocatorIbEE8iteratorpLEi(Pair *value, u32 count);
/* Transforms a pair through temporary storage and copies it back. */
void _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratorplEi(Pair *value, const Pair *source, u32 count) {
    Pair temporary = *source;
    *value = *_ZNSt6vectorIb12AsdAllocatorIbEE8iteratorpLEi(&temporary, count);
}
}
