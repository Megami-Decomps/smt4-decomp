/* NON_MATCHING: compiler uses different address construction, argument registers or stack-frame scheduling than retail. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055b10c;
struct Object { const void *vtable; u8 unk04[8]; u32 first, second, third, fourth, fifth; };
Object *sharedRefInit(Object *);
void FUN_0030fe20(Object *, u32);
/* Constructs a shared object with cleared work fields. */
Object *FUN_003038fc(Object *object, u32 value, u32 option) {
    object = sharedRefInit(object);
    object->first = object->second = object->third = 0;
    object->fourth = 0; object->fifth = option;
    object->vtable = &DAT_0055b10c;
    FUN_0030fe20(object, value);
    return object;
}
}
