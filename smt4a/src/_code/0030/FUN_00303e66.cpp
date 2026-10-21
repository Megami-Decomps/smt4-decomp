/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
struct Vector { u32 unk00; u32 *current; u32 *end; };
struct Object { u8 unk00[0x60]; Vector vector; };
void FUN_00134d1c(Vector *, u32 *, const u32 *);
/* Appends a scalar to the embedded vector, growing it when full. */
void FUN_00303e66(Object *object, u32 value) {
    u32 *slot = object->vector.current;
    if (slot != object->vector.end) {
        object->vector.current = slot + 1;
        if (slot != NULL) *slot = value;
    } else FUN_00134d1c(&object->vector, slot, &value);
}
}
