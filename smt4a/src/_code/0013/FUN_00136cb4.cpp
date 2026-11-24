#include "nn/Result.h"

extern "C" {

s32 FUN_00147374(void);
s32 FUN_00147550(u32 size, u32 address, u32 permission);
u32 FUN_00147a9c(u8 permission);
void FUN_0016f9bc(u8 *buffer, u32 size);
void nn_applet_CTR_detail_OpenSession(void);
void nn_applet_CTR_detail_CloseSession(void);

extern u8 DAT_005891b0[];
extern u8 DAT_0061a5fc[];

/* The SDK's applet call wrapper, the shape FUN_00171430 has out of line: FUN_00147a9c (APT request header 0x00550040,
 * SetScreenCapPostPermission in 3dbrew's APT command list) run inside the applet session. Retail evaluates the argument
 * before opening the session (mov r4, #0 ahead of the OpenSession call), as for a function body inlined here. */
static u32 appletSetScreenCapPostPermission(u8 permission)
{
    u32 result;

    nn_applet_CTR_detail_OpenSession();
    result = FUN_00147a9c(permission);
    nn_applet_CTR_detail_CloseSession();
    return result;
}

/* Maps the 0x300-byte region at `address` (8-byte aligned) after clearing the 0x100-byte scratch; returns the failure result, or 0. */
s32 FUN_00136cb4(u32 address)
{
    if (FUN_00147374() != 0) {
        return 0;
    }
    address &= ~7u;
    DAT_005891b0[3] = 1;
    FUN_0016f9bc(DAT_0061a5fc, 0x100);
    s32 result = FUN_00147550(0x300, address, 15);
    if (!nnResultIsSuccess(result)) {
        return result;
    }
    appletSetScreenCapPostPermission(0);
    return 0;
}

} /* extern "C" */
