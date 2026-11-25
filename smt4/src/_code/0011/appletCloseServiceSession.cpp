#include "nn/err/Fatal.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_004656b0;       /* applet service session */
extern const u32 DAT_0040b72c; /* null handle */
}

enum { APPLET_CLOSE_NO_SESSION = 0xE0A0CFF8u };

/* Closes and clears the applet session, reporting any failure. */
extern "C" s32 appletCloseServiceSession(void)
{
    s32 result;
    if (DAT_004656b0 == 0) {
        result = APPLET_CLOSE_NO_SESSION;
    } else {
        result = nn::svc::CloseHandle(DAT_004656b0);
        DAT_004656b0 = DAT_0040b72c;
    }
    return throwFatalIfFailed(result, __current_pc());
}
