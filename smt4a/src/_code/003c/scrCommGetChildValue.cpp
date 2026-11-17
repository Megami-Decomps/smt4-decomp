#include "shard/Shard003C.h"
#include "shard/X14_EngineUnits.h"

extern "C" {

extern s32 flagAt4IsClearOrMissing(void);
extern u16 uiSelectedRecordGetFourth(s32 value);
extern void scrSetResult(u32 value);

/* Script command: result is the result work's word at 0x75D0, or uiSelectedRecordGetFourth when flagAt4IsClearOrMissing is false. */
u32 scrCommGetChildValue(void)
{
    s32 flag;

    if (g_engineCleanupOwner.instance != NULL) {
        scrSetResult(g_engineCleanupOwner.instance->unk75D0);
    } else {
        flag = flagAt4IsClearOrMissing();
        scrSetResult(flag == 0 ? uiSelectedRecordGetFourth(flag) : 0);
    }
    return 1;
}

} /* extern "C" */
