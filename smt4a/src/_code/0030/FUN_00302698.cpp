/* NON_MATCHING: compiler reserves a larger address-taken-argument frame and schedules scalar loads differently. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x10]; const u32 *value; };
void FUN_001330e8(u32 *output, Object *object, const u32 *value, const u32 **source);
/* Converts the object's referenced scalar through a pointer-based adapter. */
void FUN_00302698(Object *object, u32 unusedA, u32 unusedB, u32 output) {
    const u32 *source = object->value;
    u32 value = *source;
    FUN_001330e8(&output, object, &value, &source);
}
}
