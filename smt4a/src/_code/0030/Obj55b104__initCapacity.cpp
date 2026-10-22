/* NON_MATCHING: buffer/iterator address construction and temporary-result register allocation differ. */
#include "classes/Obj55b104.h"

extern "C" void *rt_malloc(u32 bytes);

/* Allocates at least ten bytes for a nonempty buffer, then resets both cursors. */
void Obj55b104::initCapacity(u32 bytes)
{
    if (bytes != 0) {
        if (bytes < 10) {
            bytes = 10;
        }
        begin = ByteIterator(static_cast<u8 *>(rt_malloc(bytes)));
        capacityEnd = begin + bytes;
    } else {
        begin = capacityEnd = ByteIterator();
    }
    reset();
}
