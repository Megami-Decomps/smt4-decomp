#include "common.h"
#include "nn/Result.h"
extern "C" {
s32 ipcQueryByteCommand(s8 *output, s32 second, s32 third, s32 fourth);
void asdFatalError(void);
/* Returns the queried byte, reporting a fatal error on a negative result. */
s32 serviceQuerySignedByteChecked(s32 first, s32 second, s32 third, s32 fourth)
{
    s8 output;
    s32 result = ipcQueryByteCommand(&output, second, third, fourth);
    if (nnResultIsFailure(result))
        asdFatalError();
    return output;
}
}
