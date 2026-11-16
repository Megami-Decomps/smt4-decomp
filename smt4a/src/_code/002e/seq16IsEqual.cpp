#include "common.h"
struct Value { u32 unk00; u16 value; };
/* Compares the stored 16-bit values. */
extern "C" s32 seq16IsEqual(const Value *left, const Value *right) {
    if (left->value == right->value) return 1;
    return 0;
}
