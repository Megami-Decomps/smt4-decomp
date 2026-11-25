#include "code/Code0043_Smt4a.h"
#include "net/HttpRequest.h"

/* Cancels the connection through the main HTTP service session. */
extern "C" u32 FUN_002fbfac(const HttpRequestContext *request)
{
    enum { INVALID_REQUEST = 0xD8A0A064, SERVICE_NOT_READY = 0xD8A0A3F8 };
    s32 handle = request->requestHandle;
    if (handle <= 0) {
        return INVALID_REQUEST;
    }
    if (DAT_00647630.ready == 0) {
        return SERVICE_NOT_READY;
    }
    return nn_http_detail_CancelConnection(&DAT_00647630.session, (u32)handle);
}
