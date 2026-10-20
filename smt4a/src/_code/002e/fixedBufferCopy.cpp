#include "common.h"

extern "C" {

void fixedBufferAssign(void *dest, void *source, u32 value);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Source;

/* Calls fixedBufferAssign(dest, source, source's word at 0x10) and returns `dest`. */
void *fixedBufferCopy(void *dest, Source *source)
{
    fixedBufferAssign(dest, source, source->value);
    return dest;
}

} /* extern "C" */
