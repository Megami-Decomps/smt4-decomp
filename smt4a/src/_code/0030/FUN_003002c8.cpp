/* NON_MATCHING: retail emits 'ldr r1, [r0, #4]'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Element { u8 unk00[0x10]; u32 value; u8 unk14[0x20]; };
struct Backend;
struct BackendVtable { void *reserved; void (*destroy)(Backend *); };
struct Backend { BackendVtable *vtable; };
struct Object { Element *elements; u32 count, reserved; u8 active; u8 unk0D[3]; Backend *backend; };
void asdOperatorDeleteArray(void *array);
void FUN_003002c8(Object *object) {
    object->active = 0;
    for (u32 index = 0; index < object->count; ++index) object->elements[index].value = 0;
    if (object->elements) asdOperatorDeleteArray((u8 *)object->elements - 8);
    object->elements = NULL;
    if (object->backend) {
        object->backend->vtable->destroy(object->backend);
        object->backend = NULL;
    }
}
}
