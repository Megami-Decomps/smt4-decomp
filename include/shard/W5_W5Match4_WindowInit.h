#ifndef SHARD_W5_W5MATCH4_WINDOWINIT_H
#define SHARD_W5_W5MATCH4_WINDOWINIT_H

#include "common.h"

struct WindowResult {
    u32 code;
    u32 description;
};

/* Initialization view; the full UI class hierarchy remains to be recovered. */
struct WindowInitState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 reserved;
    /* 0x08 */ u32 status;
    /* 0x0c */ WindowResult result;
    /* 0x14 */ s32 state;
};

#endif
