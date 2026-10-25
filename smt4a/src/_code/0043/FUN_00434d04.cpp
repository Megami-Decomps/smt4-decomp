/* NON_MATCHING: storage argument and byte-clear loop registers differ from retail. */
#include "gfx/MaskWork.h"
extern "C" {
void *FUN_004387f0(void *allocator, u32 units);

// Allocate the mask's baseline buffer, optionally clear it, and bind both list allocators.
s32 FUN_00434d04(MaskWorkBody *body, void *storage, u32 bytes, s32 clear)
{
    body->storage = storage;
    body->byteCount = bytes;
    body->baseline = static_cast<u8 *>(FUN_004387f0(storage, (bytes + 15) >> 4));
    if (body->baseline == NULL)
        return 0;
    if (clear != 0) {
        for (u32 index = 0; index < bytes; ++index)
            body->baseline[index] = 0;
    }
    body->output.allocator = body->storage;
    body->pending.allocator = body->storage;
    return 1;
}
}
