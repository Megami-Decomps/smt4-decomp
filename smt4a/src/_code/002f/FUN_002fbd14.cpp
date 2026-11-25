#include "code/Code0043_Smt4a.h"
#include "net/HttpRequest.h"

/* Adds one of the built-in root CA certificates to the HTTP request. */
extern "C" u32 FUN_002fbd14(HttpRequestContext *request, u32 certificate)
{
    enum { INVALID_REQUEST = 0xD8A0A064 };
    s32 handle = request->requestHandle;
    if (handle <= 0) {
        return INVALID_REQUEST;
    }
    return nn_http_detail_AddDefaultCert(&request->session, (u32)handle, certificate);
}
