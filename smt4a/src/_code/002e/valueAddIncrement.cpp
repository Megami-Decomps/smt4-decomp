#include "common.h"
extern "C" {
struct Value { u32 vtable; s16 value; };
void _ZN9Obj55933cC1Et(Value *output, u16 value);
/* Constructs the sum of a stored value and a signed increment. */
void valueAddIncrement(Value *output, const Value *source, s16 increment) {
    _ZN9Obj55933cC1Et(output, source->value + increment);
}
}
