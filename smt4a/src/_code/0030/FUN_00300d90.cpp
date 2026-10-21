/* NON_MATCHING: retail emits 'adds r2, #38'; compiler emits 'mov r0, r2' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object;
struct ObjectVtable { void *reserved; void (*reset)(Object *); u8 unk08[0xC]; void (*close)(Object *); };
struct Object { ObjectVtable *vtable; };
s32 FUN_00300d90(Object *object, u32, s32 status) {
    if (status == -38) {
        object->vtable->close(object);
        object->vtable->reset(object);
        return 4;
    }
    if (status == -8) return 4;
    if (status == -6) return 2;
    return 1;
}
}
