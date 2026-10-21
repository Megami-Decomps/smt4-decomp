#include "common.h"
extern "C" {
struct Value { u32 vtable; s16 value; };
void FUN_002ef9e0(Value *output, u16 value);
/* Constructs the sum of a stored value and a signed increment. */
void valueAddIncrement(Value *output, const Value *source, s16 increment) {
    FUN_002ef9e0(output, source->value + increment);
}
}
