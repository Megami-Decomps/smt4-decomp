/* NON_MATCHING: compiler uses a larger address-taken-argument frame and different value-store scheduling. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x10]; u32 value; };
void FUN_00132a30(u32 *output, Object *object, const u32 *value, u32 mode);
/* Converts the object's scalar value using the requested mode. */
void FUN_002fe544(Object *object, u32 mode, u32 unused, u32 output) {
    u32 value = object->value;
    FUN_00132a30(&output, object, &value, mode);
}
}
