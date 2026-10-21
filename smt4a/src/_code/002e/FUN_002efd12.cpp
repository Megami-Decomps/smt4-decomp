/* NON_MATCHING: compiler loads the reference through r0 rather than r2. */
#include "common.h"
extern "C" {
struct Value { u8 unk00[0x18]; u32 value; };
struct Owner { u8 unk00[0x14]; Value *value; };
s32 wordRefsDiffer_002f3e5a(Value **first, Value **second);
/* Resolves a referenced value when it differs from the owner's reference. */
u32 FUN_002efd12(const Owner *owner, Value **reference) {
    Value *value = owner->value;
    if (wordRefsDiffer_002f3e5a(reference, &value)) return (*reference)->value;
    return 0;
}
}
