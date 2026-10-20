#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u8 state;
} Request;

void FUN_00237d64(Request *request, u32 *source)
{
    request->state = 1;
    request->unk0 = *source;
}

} /* extern "C" */
