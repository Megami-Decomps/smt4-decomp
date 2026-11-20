#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ProgramId.h"

extern "C" {
extern u32 DAT_0053f344;

/* Closes the handle and replaces it with the default handle value; an unset handle (0) is left as
 * it is and reports an error. A failed close is fatal. */
nn::Result handleCloseAndReset(u32 *handle)
{
    s32 result;
    if (*handle == 0) {
        result = 0xD8A103F7;
    } else {
        result = nn::svc::CloseHandle(*handle);
        if (nnResultIsFailure(result)) {
            sysFatalBreak();
        }
        *handle = DAT_0053f344;
    }
    return result;
}
}
