/* NON_MATCHING: ring-buffer arithmetic and wide-count scheduling have not been matched. */
#include "classes/Obj557f00.h"
extern "C" {
u64 resourceGetWideHandle(u32 handle);
void *rt_memcpy(void *destination, const void *source, u32 size);
s32 FUN_00422af0(u32 handle, void *pixels, u32 size);
}

bool Obj557f00::read(void *source, u32 size)
{
    u32 previous = (u32)submitted;
    u64 consumed = resourceGetWideHandle(handle) << description->height;
    u32 available = capacity - (previous - (u32)consumed);
    u32 offset = cursor;
    u32 trailing = capacity - offset;
    if (trailing < size) {
        available -= trailing;
        offset = 0;
    }
    u8 *destination = pixels + offset;
    if (size <= available && destination != NULL) {
        rt_memcpy(destination, source, size);
        s32 result = FUN_00422af0(handle, destination, size);
        if (result != 0) {
            submitted += size;
            cursor = destination - pixels + size;
        }
        return result != 0;
    }
    return false;
}
