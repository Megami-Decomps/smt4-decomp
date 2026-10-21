/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055af54, DAT_005588f4;
struct Object { const void *vtable; u8 rest[0x40]; };
Object *sharedRefInit(Object *);
void FUN_002ecad4(Object *, u32, u32);
/* Initializes shared ownership and the object's derived state. */
Object *FUN_002eff58(Object *object, u32 value, u32 option, u32 flags) {
    object = sharedRefInit(object);
    object->vtable = &DAT_0055af54;
    FUN_002ecad4(object, value, 4);
    object->vtable = &DAT_005588f4;
    return object;
}
}
