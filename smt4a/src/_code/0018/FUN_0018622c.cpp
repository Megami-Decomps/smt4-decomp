#include "common.h"

namespace {
struct Buffer {
    /* 0x00 */ void *data;
    /* 0x04 */ s32 count;
};
}

extern "C" {
void FUN_001a9e0c(void *data, s32 count);

/* Processes the buffer only when it contains entries. */
void FUN_0018622c(Buffer *buffer)
{
    if (buffer->count > 0) {
        FUN_001a9e0c(buffer->data, buffer->count);
    }
}
}
