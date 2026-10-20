#include "common.h"

extern "C" {

typedef struct Stream Stream;
typedef struct StreamVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ u32 (*process)(Stream *stream, void *buffer, s32 size);
} StreamVtbl;
struct Stream {
    /* 0x00 */ const StreamVtbl *vtbl;
};
void FUN_002e7232(void *buffer);

/* Runs the stream's `process` method on `buffer`, frees the buffer, and returns the method's result (0 when there is no buffer). */
u32 FUN_00109ec4(Stream *stream, void *buffer, s32 size)
{
    u32 result;

    if (buffer != NULL) {
        result = stream->vtbl->process(stream, buffer, size);
        FUN_002e7232(buffer);
        return result;
    }
    return 0;
}

} /* extern "C" */
