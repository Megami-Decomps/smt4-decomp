/* NON_MATCHING: retail conditional instruction or constructor initialization ordering differs. */
#include "common.h"

struct RequestParameters {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 reserved;
    /* 0x08 */ u32 second;
    /* 0x0c */ u32 third;
};
/* Stores a request's parameter tuple. */
extern "C" void FUN_00352740(RequestParameters *request, u32 first, u32 second, u32 third)
{
    request->first = first;
    request->third = third;
    request->reserved = 0;
    request->second = second;
}
