/* NON_MATCHING: retail emits 'mov r5, r0'; compiler emits 'mov r5, r2' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Buffer {
    u32 reserved;
    u8 *data;
    u8 pad[12];
    u32 start;
    u8 gap[4];
    u32 end;
};
void *rt_memcpy(void *,const void *,u32);
void FUN_002fc056(Buffer *buffer,u8 *output,u32 size,u32 stride) {
    u32 available=buffer->end-buffer->start;
    const u8 *input=buffer->data+buffer->start;
    if(available<=size) {
        rt_memcpy(output,input,available);
        size-=available;
        if(!size)return;
        input=buffer->data;
        output+=available;
    }
    rt_memcpy(output,input,size);
}
}
