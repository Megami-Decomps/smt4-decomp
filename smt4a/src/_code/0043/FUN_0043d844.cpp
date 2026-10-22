/* NON_MATCHING: retail tests the result sign with LSRS; built uses CMP and conditional MOV. */
#include "common.h"

struct RequestService {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 handle;
};
extern "C" {
extern RequestService DAT_005c0b00;
s32 FUN_00440328(u32 *handle, u32 first, u32 second, u32 third, u32 fourth);

/* Forwards a request through the initialized service, preserving error results. */
s32 FUN_0043d844(u32 first, u32 second, u32 third, u32 fourth)
{
    if (!DAT_005c0b00.initialized)
        return (s32)0xc8a073f8;
    u32 handle = DAT_005c0b00.handle;
    s32 result = FUN_00440328(&handle, first, second, third, fourth);
    return (static_cast<u32>(result) >> 31) ? result : 0;
}
}
