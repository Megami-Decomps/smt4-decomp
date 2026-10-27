/* NON_MATCHING: register choice of the failure test (retail tests the call result in r0) and the hoisted constant 1 for the FUN_0017fd20 call */
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "mobiclip_ctrl/helper_S4Player.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "sys/ResultReport.h"

extern "C" {

extern u32 DAT_00588114; /* network work buffer */
extern u32 DAT_00588118; /* network session handle */

u32 entry3F94Address(u32 offset, u32 size);
s32 socketInitializeWithWorkBuffer(u32 buffer, u32 address, u32 size, u32 align);
s32 FUN_0017fd20(u32 *handle, s32 count);
void sysFatalBreak(void);

/* Initialize the network module: allocate and register its work buffer, open the session and set
 * it up. Returns 1 on success and stores the final result in *result. */
u32 FUN_0043299c(s32 *result)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\Common\\CTRNetInit.cpp", 223);
    DAT_00588114 = (u32)memAlloc(0x100, 0x100, 0, 0x40000, 0x1000, 1);
    *result = socketInitializeWithWorkBuffer(DAT_00588114, entry3F94Address(0x10000, 4), 0x10000, 4);
    if (nnResultIsFailure(*result)) {
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
        bool failed = nnResultIsFailure(open);
        if (failed) {
            FUN_002e3140(open, failed);
        }
        s32 setup = FUN_0042640c(reinterpret_cast<void **>(&DAT_00588118));
        *result = setup;
        if ((s32)(setup & 0x80000000) >= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
