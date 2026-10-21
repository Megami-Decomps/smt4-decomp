/* NON_MATCHING: retail emits 'beq.n 20'; compiler emits 'bne.n 1c' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object {
    u8 pad[8];
    void *buffer;
};
const u8 *onlineBufferGetData(void *);
s32 FUN_00301502(Object *object) {
    if(onlineBufferGetData(object->buffer)[0]!=0xEA || onlineBufferGetData(object->buffer)[1]!=0xD0)return 0;
    u32 size=onlineBufferGetData(object->buffer)[2];
    return size==0?-1:(size+1)&~1;
}
}
