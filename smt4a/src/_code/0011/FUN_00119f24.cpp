#include "common.h"

extern "C" {

s32 FUN_00306d0e(u32 handle, u8 kind, u8 flag);

typedef struct Request {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 handle;
    /* 0x10 */ u8 flag;
} Request;

/* Submits the request; on success clears its flag. Returns whether it succeeded. */
u8 FUN_00119f24(Request *request)
{
    s32 result;
    u8 kind = request->kind;
    u8 flag = request->flag;

    result = FUN_00306d0e(request->handle, kind, flag);
    if (result != 0) {
        request->flag = 0;
    }
    return result != 0;
}

} /* extern "C" */
