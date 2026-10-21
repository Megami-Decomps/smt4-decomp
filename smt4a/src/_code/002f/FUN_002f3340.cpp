/* NON_MATCHING: retail emits 'ldr r3, [pc, #44]'; compiler emits 'add r3, r0, #8' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 DAT_00559100;
struct Object {
    const void *vtable;
    u8 active;
    u8 pad[3];
    u32 first;
    s32 selection;
    u32 second,third;
    f32 value;
};
void FUN_002f3340(Object *object) {
    object->active=0;
    object->vtable=&DAT_00559100;
    object->first=0;
    object->selection=-1;
    object->second=object->third=0;
    object->value=0.0f;
}
}
