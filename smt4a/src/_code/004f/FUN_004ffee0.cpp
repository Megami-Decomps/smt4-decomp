/* NON_MATCHING: start/remaining comparisons now match; retail predicates the out-of-range zero stores instead of branching. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

/* A readable halfword source: two words of source identity and a halfword buffer. */
struct HalfwordSource {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u8 unk08[0x1C];
    /* 0x24 */ u16 *data;
    /* 0x28 */ u32 length;
};

extern "C" {

s32 FUN_004267bc(u32 handle, s32 mode, u32 first, u32 second, u16 *data, u32 count);

/* Reads up to `count` halfwords of the source starting at `start` through `handle`; stores the number read in `*readCount`. */
WindowStatusResult FUN_004ffee0(HalfwordSource **source, u32 *readCount, u32 handle, u32 count, u32 start)
{
    HalfwordSource *input = *source;
    u32 length = input->length;
    s32 status;

    if (start >= length) {
        status = 0;
        *readCount = 0;
    } else {
        u32 remaining = length - start;
        if (count > remaining) {
            count = remaining;
        }
        status = FUN_004267bc(handle, 1, input->first, input->second, input->data + start, count);
        if (!nnResultIsFailure(status)) {
            status = 0;
            *readCount = count;
        }
    }
    return WindowStatusResult(status);
}

} /* extern "C" */
