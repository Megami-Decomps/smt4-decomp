#include "common.h"

namespace {
struct RequestState {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 progress;
    /* 0x08 */ u32 elapsed;
    /* 0x0c */ u16 kind;
    /* 0x0e */ u16 value;
};
}

extern "C" {
extern RequestState *DAT_00581270;

/* Initializes the request, selecting the special state for kind 22. */
void FUN_0033e12c(u32 kind, u16 value)
{
    RequestState *request = DAT_00581270;
    request->kind = kind;
    request->value = value;
    request->progress = 0;
    request->elapsed = 0;
    request->state = 10;
    if (kind != 22) {
        request->state = 99;
    }
}
}
