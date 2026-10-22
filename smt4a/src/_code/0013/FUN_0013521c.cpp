/* NON_MATCHING: Retail push {r0, r1, r2, r4, r5, r6, r7, lr} differs from recovered push {r3, r4, r5, r6, r7, lr}. */
#include "common.h"

// Private view of the three-pointer byte container.
struct ByteBufferView {
    u8* begin;       // 0x00
    u8* end;         // 0x04
    u8* storageEnd;  // 0x08
};

extern "C" {
u32 bufGrowCapacity(u32 size, ByteBufferView* buffer);
void* rt_malloc(u32 size);
void asdOperatorDeleteArray(void* allocation);
u8* FUN_00307604(const u8* first, const u8* last, u8* destination,
                 ByteBufferView* buffer);
u8* FUN_0030761e(const u8* first, const u8* last, u8* destinationEnd);

// Insert one byte, shifting in place when spare capacity is available.
void FUN_0013521c(ByteBufferView* buffer, u8* position, const u8* value)
{
    const u32 capacity = buffer->storageEnd - buffer->begin;
    const u32 size = buffer->end - buffer->begin;

    if (capacity > size) {
        u8* oldEnd = buffer->end;
        buffer->end = oldEnd + 1;
        u8* lastElement = oldEnd - 1;
        if (oldEnd != 0) {
            *oldEnd = *lastElement;
        }
        FUN_0030761e(position, lastElement, oldEnd);
        *position = *value;
        return;
    }

    const u32 newCapacity = bufGrowCapacity(size, buffer);
    u8* newBegin = static_cast<u8*>(rt_malloc(newCapacity));
    FUN_00307604(buffer->begin, position, newBegin, buffer);

    u8* insertion = newBegin + (position - buffer->begin);
    if (insertion != 0) {
        *insertion = *value;
    }

    FUN_00307604(position, buffer->end,
                 newBegin + (position - buffer->begin) + 1, buffer);

    u8* oldBegin = buffer->begin;
    const u32 oldSize = buffer->end - oldBegin;
    typedef u8 Element;
    for (Element* element = oldBegin; element != buffer->end; ++element) {
        element->~Element();
    }
    asdOperatorDeleteArray(oldBegin);

    buffer->begin = newBegin;
    buffer->storageEnd = newBegin + newCapacity;
    buffer->end = newBegin + oldSize + 1;
}
}
