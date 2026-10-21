#include "common.h"

namespace {
struct Buffer {
    /* 0x00 */ void *data;
    /* 0x04 */ s32 count;
};
}

extern "C" {
void FUN_0014d7cc(void *data, s32 count);

/* Processes the buffer only when it contains entries. */
void FUN_002ab8c4(Buffer *buffer)
{
    if (buffer->count > 0) {
        FUN_0014d7cc(buffer->data, buffer->count);
    }
}
}
