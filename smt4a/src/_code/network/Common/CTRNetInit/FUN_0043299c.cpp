/* NON_MATCHING: register choice of the failure test (retail tests the call result in r0) and the hoisted constant 1 for the FUN_0017fd20 call */
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"

extern "C" {

extern u32 DAT_00588114; /* network work buffer */
extern u32 DAT_00588118; /* network session handle */

u32 memAlloc(s32 a, s32 b, s32 c, s32 size, s32 align, s32 d);
u32 entry3F94Address(u32 offset, u32 size);
s32 socketInitializeWithWorkBuffer(u32 buffer, u32 address, u32 size, u32 align);
s32 FUN_0017fd20(u32 *handle, s32 count);
void FUN_002e3140(s32 result);
s32 FUN_0042640c(u32 *handle);
void sysFatalBreak(void);

/* Initialize the network module: allocate and register its work buffer, open the session and set
 * it up. Returns 1 on success and stores the final result in *result. */
u32 FUN_0043299c(s32 *result)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\Common\\CTRNetInit.cpp", 223);
    DAT_00588114 = memAlloc(0x100, 0x100, 0, 0x40000, 0x1000, 1);
    s32 created = socketInitializeWithWorkBuffer(DAT_00588114, entry3F94Address(0x10000, 4), 0x10000, 4);
    *result = created;
    if (nnResultIsFailure(created)) {
        sysFatalBreak();
    }
    s32 status = *result;
    if ((s32)(status & 0x80000000) >= 0) {
        u32 handle = 0;
        s32 open;

        if (DAT_00588118 != 0) {
            open = 0xE0A0183B;
        } else {
            open = FUN_0017fd20(&handle, 1);
            if (!nnResultIsFailure(open)) {
                open = 0;
                DAT_00588118 = handle;
            }
        }
        if (nnResultIsFailure(open)) {
            FUN_002e3140(open);
        }
        s32 setup = FUN_0042640c(&DAT_00588118);
        *result = setup;
        if ((s32)(setup & 0x80000000) >= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
