/* NON_MATCHING: retail emits 'ldr r1, [pc, #40]'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj558b24[];
struct String { u8 storage[8]; u16 kind; u8 reserved[2]; };
struct Object { const void *vtable; String first; String second; u32 value; u8 active; };
void *_ZN9Obj55aff4C1EPKt(void *string, const char *value);
void FUN_002f3378(Object *object) {
    object->vtable = _ZTV9Obj558b24 + 8;
    _ZN9Obj55aff4C1EPKt(object->first.storage, "");
    object->first.kind = 0;
    _ZN9Obj55aff4C1EPKt(object->second.storage, "");
    object->second.kind = 0;
    object->second.reserved[0] = 0;
    object->second.reserved[1] = 0;
    object->value = 0;
    object->active = 0;
}
}
