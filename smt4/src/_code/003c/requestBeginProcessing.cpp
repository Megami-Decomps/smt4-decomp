#include "common.h"

struct RequestState {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 progress;
    /* 0x0a */ u8 value;
    /* 0x0b */ u8 complete;
};

static __inline void requestSetFlag(RequestState *request, u8 flag)
{
    request->flags |= flag;
}

/* Starts a new request if the state machine is not already processing one. */
extern "C" void requestBeginProcessing(RequestState *request, s8 mode, u32 value)
{
    if (request->state != 2) {
        request->type = value;
        request->value = mode;
        request->complete = 0;
        request->state = 2;
        request->progress = 0;
        requestSetFlag(request, 1);
    }
}
