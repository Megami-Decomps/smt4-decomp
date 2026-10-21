#include "common.h"
/* Tests reverse unsigned 64-bit ordering. */
extern "C" s32 FUN_002f2dc2(const u64 *left, const u64 *right) {
    if (*right >= *left) return 1;
    return 0;
}
