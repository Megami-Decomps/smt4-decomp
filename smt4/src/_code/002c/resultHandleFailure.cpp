#include "sys/ResultReport.h"
#include "nn/Result.h"

extern "C" {
extern s8 g_resultDebugMode; /* nonzero: handle failures as on a development unit */
void resultPostErrorReport(u32 result, u32 flag, u32 callerAddress);
void asdFatalError(void);

/* Reports a failed result: on a development unit (or with the debug flag set) status and info
 * results are ignored and any other is reported with the caller's address; otherwise only a fatal
 * result is reported before the fatal error handler runs. */
void resultHandleFailure(u32 result, ...)
{
    s32 level = nnResultLevel(result);
    /* Bit 0 of the shared configuration page's unit-info byte marks a development unit. */
    u8 developmentUnit = *(const u8 *)0x1FF80014 & 1;

    if ((developmentUnit | g_resultDebugMode) == 0) {
        if (level == NN_RESULT_LEVEL_FATAL) {
            resultPostErrorReport(result, 0, (u32)__return_address());
        }
        asdFatalError();
        return;
    }
    if (level != NN_RESULT_LEVEL_STATUS && level != NN_RESULT_LEVEL_INFO) {
        resultPostErrorReport(result, 0, (u32)__return_address());
    }
}

} /* extern "C" */
