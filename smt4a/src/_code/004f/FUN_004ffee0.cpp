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

s32 FUN_004267bc(void *records, s32 mode, u32 first, u32 second, u16 *data, u32 count); // declcheck: local (the shared declaration takes six plain words)

/* Reads up to `count` halfwords of the source starting at `start`, with the `count` 24-byte records that go with
 * them into `records`; stores the number read in `*readCount`. */
WindowStatusResult FUN_004ffee0(HalfwordSource **source, u32 *readCount, void *records, u32 count, u32 start)
{
    HalfwordSource *input = *source;
    u32 length = input->length;
    s32 result;

    if (start >= length) {
        result = *readCount = 0;
    } else {
        if (length - start < count) {
            count = length - start;
        }
        result = FUN_004267bc(records, 1, input->first, input->second, input->data + start, count);
        if (!nnResultIsFailure(result)) {
            result = 0;
            *readCount = count;
        }
    }
    return WindowStatusResult(result);
}

} /* extern "C" */
