/* NON_MATCHING: retail emits 'ldrb r4, [r0, #8]'; compiler emits 'ldrb r4, [r5, #8]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object {
    void **vtable;
    u32 reserved;
    u8 count;
};
struct Buffer {
    u8 pad[16];
    u32 count;
};
u8 *byteArrayEnsureAt(Buffer *,u32);
void FUN_002fd03a(Object *object,Buffer *buffer) {
    u32 count=((u32 (*)(Object *))object->vtable[7])(object);
    for(u32 index=object->count;index<count;++index) *byteArrayEnsureAt(buffer,object->count-1-index)^=*byteArrayEnsureAt(buffer,index);
    buffer->count=object->count;
}
}
