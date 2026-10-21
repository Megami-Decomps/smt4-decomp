#include "common.h"
/* Tests unsigned 64-bit ordering. */
extern "C" s32 FUN_002efd4a(const u64 *left, const u64 *right) {
    if (*left < *right) return 1;
    return 0;
}
