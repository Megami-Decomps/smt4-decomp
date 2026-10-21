/* NON_MATCHING: retail emits 'ldr r0, [r0, #16]'; compiler emits 'ldr r3, [r0, #24]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Buffer { u8 unk00[0xC]; void *data; u32 count, capacity, offset; };
u32 FUN_00310160(u32 capacity, u32 requested);
void *bufAllocateStorage(Buffer *buffer, u32 size);
void *rt_memcpy(void *output, const void *input, u32 size);
void asdOperatorDeleteArray(void *array);
s32 FUN_002f00f0(Buffer *buffer, u32 requested) {
    u32 capacity = FUN_00310160(buffer->capacity, buffer->count + buffer->offset + requested);
    if (buffer->capacity >= capacity) return 1;
    void *data = bufAllocateStorage(buffer, capacity);
    if (!data) return 0;
    rt_memcpy(data, buffer->data, buffer->capacity);
    asdOperatorDeleteArray(buffer->data);
    buffer->data = data;
    buffer->capacity = capacity;
    return 1;
}
}
