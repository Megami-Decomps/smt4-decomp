/* NON_MATCHING: compare operand order and predication only: retail compares (start, length) and (remaining, count) as written with conditional moves/stores; the build swaps both compares and branches around the zeroing. */
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
WindowStatusResult FUN_005006a8(HalfwordSource **source, u32 *readCount, u32 handle, u32 count, u32 start)
{
    HalfwordSource *input = *source;
    s32 status;
    if (start >= input->length) {
        status = 0;
        *readCount = 0;
    } else {
        u32 remaining = input->length - start;
        if (remaining < count) {
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
