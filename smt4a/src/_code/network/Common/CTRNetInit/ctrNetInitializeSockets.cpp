#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "mobiclip_ctrl/helper_S4Player.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "sys/ResultReport.h"

extern "C" {

extern u32 DAT_00588114; /* network work buffer */
extern u32 DAT_00588118; /* network session handle */

u32 entry3F94Address(u32 offset, u32 size);
nn::Result socketInitializeWithWorkBuffer(u32 buffer, u32 address, u32 size, u32 align);
s32 svcCreateEvent(u32 *handle, s32 manualReset);
void sysFatalBreak(void);

/* CTR-SDK nn::os::Event::Initialize idiom (siblings: FUN_0042230c, asyncOperationStartOrPoll, FUN_0016f574, FUN_0047d904, FUN_004d95e8). */
static __inline s32 nnOsEventInitialize(u32 *slot, bool manualReset)
{
    u32 handle = 0;

    if (*slot != 0) {
        return (s32)0xE0A0183B;
    }
    s32 result = svcCreateEvent(&handle, manualReset);
    if (!nnResultIsFailure(result)) {
        *slot = handle;
        result = 0;
    }
    return result;
}

/* Initialize the network module: allocate and register its work buffer, open the session and set
 * it up. Returns 1 on success and stores the final result in *result. */
u32 ctrNetInitializeSockets(nn::Result *result)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\Common\\CTRNetInit.cpp", 223);
    DAT_00588114 = (u32)memAlloc(0x100, 0x100, 0, 0x40000, 0x1000, 1);
    *result = socketInitializeWithWorkBuffer(DAT_00588114, entry3F94Address(0x10000, 4), 0x10000, 4);
    if (nnResultIsFailure(*result)) {
        sysFatalBreak();
    }
    s32 status = *result;
    if ((s32)(status & 0x80000000) >= 0) {
        s32 open = nnOsEventInitialize(&DAT_00588118, true);
        bool failed = nnResultIsFailure(open);
        if (failed) {
            resultHandleFailure(open, failed);
        }
        s32 setup = FUN_0042640c((void **)&DAT_00588118);
        *result = setup;
        if ((s32)(setup & 0x80000000) >= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
