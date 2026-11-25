/* NON_MATCHING: the header name and the value length occupy swapped saved registers. */
#include "code/Code0043_Smt4a.h"
#include "net/HttpRequest.h"

extern "C" u32 libc_strlen(const char *text);

/* Adds a header to the HTTP request. */
extern "C" u32 FUN_002fbe20(HttpRequestContext *request, const char *name, const char *value)
{
    enum { MISSING_STRING = 0xD8E0A002, INVALID_REQUEST = 0xD8A0A064 };
    if (name == NULL || value == NULL) {
        return MISSING_STRING;
    }
    if (request->requestHandle <= 0) {
        return INVALID_REQUEST;
    }
    u32 valueLength = libc_strlen(value) + 1;
    u32 nameLength = libc_strlen(name) + 1;
    return nn_http_detail_AddRequestHeaderField(&request->session, (u32)request->requestHandle, name, nameLength, value, valueLength);
}
