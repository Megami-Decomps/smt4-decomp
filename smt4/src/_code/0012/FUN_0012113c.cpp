/* NON_MATCHING: frame, heap check and value read now match retail (two unshared StreamInfo slots: the count through the inline helper, the value read in place); only the count differs: retail zeroes it in r7 before the first FUN_0014204c call, the build reuses the call's zero result in r0. Writing the helper zero-initialised gives retail's shape but swaps the buffer and heap-base registers (r6/r7). */
#include "common.h"

/* What FUN_0014204c reports about a sound id; only the word at 0x10 is used here. */
struct StreamInfo {
    u32 unk00[4];
    u32 value; /* 0x10 */
    u32 unk14[2];
};

extern "C" {
s32 FUN_0012f59c(void);
s32 FUN_0012fa30(void *pool, u32 id, u32 first, u32 second);
s32 FUN_0014204c(u32 id, StreamInfo *info);
u32 FUN_002c3984(void);
u32 nnosGetHeapBase(void);
s32 nw_snd_internal_driver_StreamBufferPool_Initialize(void *pool, u32 buffer, u32 size, u32 value);

/* The word at 0x10 of a sound's stream info, or 0 when the id has none. */
static __inline u32 streamInfoValue(u32 id)
{
    StreamInfo info;
    u32 value;
    if (FUN_0014204c(id, &info)) {
        value = info.value;
    } else {
        value = 0;
    }
    return value;
}


/* Sets up a sound stream pool: checks that the buffer lies inside the heap and is large enough
 * for the sound's streams, then initializes the stream buffer pool and links the pool's tail. */
u32 FUN_0012113c(u8 *pool, u32 id, u32 userValue, u32 first, u32 second, u32 buffer, u32 size)
{
    if (!FUN_0012f59c()) {
        return 0;
    }
    if (size != 0) {
        u32 heapBase = nnosGetHeapBase();
        u32 heapEnd = heapBase + FUN_002c3984();
        if (buffer < heapBase) {
            return 0;
        }
        if (buffer + size > heapEnd) {
            return 0;
        }
    }
    if (!FUN_0012fa30(pool, id, first, second)) {
        return 0;
    }
    u32 count = streamInfoValue(id);
    u32 required = count * 0xa000;
    if (size < required) {
        return 0;
    }
    StreamInfo info;
    u32 value = 0;
    if (FUN_0014204c(id, &info)) {
        value = info.value;
    }
    nw_snd_internal_driver_StreamBufferPool_Initialize(pool + 0x88, buffer, size, value);
    *reinterpret_cast<u8 **>(pool + 0xa0) = pool + 0xa4;
    *reinterpret_cast<u32 *>(pool + 0xbc) = userValue;
    return 1;
}
}
