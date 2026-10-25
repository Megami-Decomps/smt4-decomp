/* NON_MATCHING: written from the romwright stub; parameter registers now match, remaining diffs are heapBase/buffer swapped (retail r7/r6), the frame (retail keeps two unshared 28-byte StreamInfo slots, 60 bytes; the inline helper shares one slot) and an unfolded `lsl #13` before the size compare. */
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
    u32 value = 0;
    if (FUN_0014204c(id, &info)) {
        value = info.value;
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
        u32 heapSize = FUN_002c3984();
        if (buffer < heapBase) {
            return 0;
        }
        if (heapBase + heapSize < buffer + size) {
            return 0;
        }
    }
    if (!FUN_0012fa30(pool, id, first, second)) {
        return 0;
    }
    u32 count = streamInfoValue(id);
    if (size < count * 0xa000) {
        return 0;
    }
    u32 value = streamInfoValue(id);
    nw_snd_internal_driver_StreamBufferPool_Initialize(pool + 0x88, buffer, size, value);
    *reinterpret_cast<u8 **>(pool + 0xa0) = pool + 0xa4;
    *reinterpret_cast<u32 *>(pool + 0xbc) = userValue;
    return 1;
}
}
