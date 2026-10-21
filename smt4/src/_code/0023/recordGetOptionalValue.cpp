#include "common.h"
extern "C" {
struct NestedValue { u32 unk00[2]; u32 value; };
struct OptionalValueOwner { u32 unk00; NestedValue *work; };
/* Read the nested value, returning zero when the work pointer is absent. */
u32 recordGetOptionalValue(const OptionalValueOwner *owner) { return owner->work!=NULL ? owner->work->value : 0; }
}
