#include "common.h"
struct Value { u32 unk00; u16 value; };
/* Compares the stored 16-bit values. */
extern "C" s32 FUN_002f035c(const Value *left, const Value *right) {
    if (right->value != left->value) return 1;
    return 0;
}
