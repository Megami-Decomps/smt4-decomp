/* NON_MATCHING: retail uses ARMv5 Thumb moves and a different argument-swap order. */
#include "common.h"
extern "C" {
void FUN_001025f8(void *source, void *destination, u32 size, u32 count, u32 options);
/* Adapts the operation to eight-byte entries. */
void FUN_002e5694(void *destination, void *source, u32 count, u32 options) {
    FUN_001025f8(source, destination, 8, count, options);
}
}
