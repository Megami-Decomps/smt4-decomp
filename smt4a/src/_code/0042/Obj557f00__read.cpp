/* NON_MATCHING: the available-space arithmetic and loads match retail; retail keeps copies of the destination and size across the memcpy/commit calls (mov r7,r5; mov r5,r6), numbers the saved registers differently and stores the carry high word and cursor with stm where this build uses strd. */
#include "classes/Obj557f00.h"
extern "C" {
u64 resourceGetWideHandle(u32 handle);
u64 runtimeShiftLeftWide(u64 value, u32 shift);
void *rt_memcpy(void *destination, const void *source, u32 size);
s32 deferredTransferEnqueue(u32 handle, const void *pixels, u32 size);
}

bool Obj557f00::read(void *source, u32 size)
{
    u64 previous = submitted;
    u64 consumed = runtimeShiftLeftWide(resourceGetWideHandle(handle), description->height);
    u32 available = capacity - (u32)(previous - consumed);
    u32 tailSpace = capacity - cursor;
    u32 offset = cursor;
    if (tailSpace < size) {
        available -= tailSpace;
        offset = 0;
    }
    if (size <= available) {
        u8 *destination = pixels + offset;
        if (destination != NULL) {
            rt_memcpy(destination, source, size);
            s32 result = deferredTransferEnqueue(handle, destination, size);
            if (result != 0) {
                submitted += size;
                cursor = (destination - pixels) + size;
            }
            return result != 0;
        }
    }
    return false;
}
