/* NON_MATCHING: retail branches to an out-of-line `add r1, pc, #0` (the empty-string literal) that jumps back to the first test, i.e. the default is applied by re-running the test; this build tests once and sets the default inline */
#include "common.h"

extern "C" {

typedef struct WideBuffer {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u16 *end;
} WideBuffer;

s32 wstrlenU16(const u16 *text);
void wstrcpyU16(u16 *dest, const u16 *text);
void FUN_002ee796(WideBuffer *buffer, s32 count);

/* Appends a wide string (an empty one when text is NULL) to the buffer and returns the buffer. */
WideBuffer *wideBufferAppend(WideBuffer *buffer, const u16 *text)
{
    s32 length;

    text = text != NULL ? text : (const u16 *)L"";
    length = wstrlenU16(text);
    FUN_002ee796(buffer, length + 1);
    wstrcpyU16(buffer->end, text);
    buffer->end += length;
    return buffer;
}

} /* extern "C" */
