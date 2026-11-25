#pragma once

#include "common.h"
#include <stddef.h>

/* HTTP context passed to the game's service wrappers. */
struct HttpRequestContext {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 requestHandle;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 session;
};

typedef char HttpRequestContextLayout[offsetof(HttpRequestContext, requestHandle) == 4 &&
    offsetof(HttpRequestContext, session) == 0x0C ? 1 : -1];

struct HttpServiceState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 ready;
    /* 0x05 */ u8 unk05[0x27];
    /* 0x2C */ u32 session;
};

typedef char HttpServiceStateLayout[offsetof(HttpServiceState, session) == 0x2C ? 1 : -1];

extern "C" HttpServiceState DAT_00647630;
