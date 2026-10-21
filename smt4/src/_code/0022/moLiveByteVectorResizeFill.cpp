/* NON_MATCHING: retail unrolls byte movement/destruction by two with large-count fallback paths; these loops remain scalar, and success is held in r8 rather than a shared immediate-return block. */
#include "common.h"
#include <new>

namespace MoLive { class Allocator; }

struct ByteVector {
    MoLive::Allocator *allocator;
    u8 *data;
    u32 capacity;
    u32 size;
};

extern "C" bool FUN_0022b92c(ByteVector *vector, u32 position, u32 count);

static __inline bool byteVectorInsertFill(ByteVector *vector, u8 *position, u32 count, const u8 &value)
{
    if (count == 0) {
        return true;
    }
    u32 index = position - vector->data;
    if (!FUN_0022b92c(vector, index, count)) {
        return false;
    }
    do {
        u8 *destination = vector->data + index;
        if (destination != NULL) {
            new (destination) u8(value);
        }
        ++index;
    } while (--count != 0);
    return true;
}

static __inline void byteVectorMove(ByteVector *vector, u32 destination, u32 source, u32 count)
{
    if (count != 0) {
        if (source >= destination) {
            u8 *input = vector->data + source;
            u8 *output = vector->data + destination;
            do {
                *output++ = *input++;
            } while (--count != 0);
        } else {
            u8 *input = vector->data + source + count;
            u8 *output = vector->data + destination + count;
            do {
                *--output = *--input;
            } while (--count != 0);
        }
    }
}

template <typename T>
static __inline void destroyArrayRange(T *first, T *last)
{
    for (; first < last; ++first) {
        first->~T();
    }
}

static __inline void byteVectorErase(ByteVector *vector, u8 *first, u8 *last)
{
    if (first != last) {
        u32 source = last - vector->data;
        u32 destination = first - vector->data;
        u32 size = vector->size - (last - first);
        byteVectorMove(vector, destination, source, vector->size - source);
        destroyArrayRange(vector->data + size, vector->data + vector->size);
        vector->size = size;
    }
}

extern "C" bool moLiveByteVectorResizeFill(ByteVector *vector, u32 size, const u8 *value)
{
    u8 *last = vector->data + vector->size;
    if (size > vector->size) {
        return byteVectorInsertFill(vector, last, size - vector->size, *value);
    }
    byteVectorErase(vector, vector->data + size, last);
    return true;
}
