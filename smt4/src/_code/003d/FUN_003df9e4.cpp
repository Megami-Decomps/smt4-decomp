/* NON_MATCHING: the 64-bit fields are word-aligned file data (__packed gives retail's four separate word loads); only the load order/registers of the four words differ. */
#include "common.h"

extern "C" {

struct Span {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ __packed u64 start;
    /* 0x10 */ __packed u64 end;
};

/* Stores the length of the span in the output and reports success. */
s32 FUN_003df9e4(const Span *span, u64 *length)
{
    *length = span->end - span->start;
    return 0;
}

} /* extern "C" */
