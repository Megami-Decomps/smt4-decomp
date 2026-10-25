#ifndef NN_OS_HANDLE_OWNER_H
#define NN_OS_HANDLE_OWNER_H

#include "common.h"
#include <stddef.h>

/* A stoppable owner of a kernel handle. */
struct HandleOwner {
    HandleOwner() : handle(0), started(0) {}
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 started;
};
typedef char HandleOwnerOffsetsCheck[
    offsetof(HandleOwner, handle) == 0 && offsetof(HandleOwner, started) == 4 &&
    sizeof(HandleOwner) == 8 ? 1 : -1];

extern "C" HandleOwner *handleOwnerClose(HandleOwner *owner);

#endif
