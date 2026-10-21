/* NON_MATCHING: retail emits 'ldr r2, [pc, #36]'; compiler emits 'ldr r1, [pc, #36]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj55b12c[];
struct Object { const void *vtable; u32 value; u8 child[0x68]; u32 first, second, third, fourth, fifth; u8 active; u8 unk85[7]; u8 pending; };
void *FUN_002fd5d4(void *child, u32 option);
Object *FUN_002f1744(Object *object, u32 value, u32 option) {
    object->vtable = _ZTV9Obj55b12c + 8;
    object = (Object *)((u8 *)FUN_002fd5d4(object->child, option) - 8);
    object->second = 0;
    object->pending = 0;
    object->first = 0;
    object->fourth = 0;
    object->value = value;
    object->third = 0;
    object->fifth = 0;
    object->active = 0;
    return object;
}
}
