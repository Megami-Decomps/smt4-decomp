#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[0xB];
    /* 0x10 */ u32 unk10;
} Request;

void FUN_00237a7c(Request *request, u32 *source, u32 value)
{
    request->state = 3;
    request->unk10 = value;
    request->unk00 = *source;
}

} /* extern "C" */
