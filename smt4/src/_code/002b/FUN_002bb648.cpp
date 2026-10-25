/* NON_MATCHING: the record pointer (callee argument) and the stores match; only the constant registers differ (retail ip = 0xbca3, r3 = 5, r4 = 0; built r3 = 0xbca3, r4 = 5, ip = 0). */
#include "common.h"

struct PendingRequest {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u16 id;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
};

extern "C" {

extern PendingRequest DAT_004d4200;

void FUN_002ad4f8(PendingRequest *request);
void FUN_002ad614(void);

/* Posts request kind 5 (id 0xBCA3) with two parameters, then runs the dispatcher. */
void FUN_002bb648(u32 first, u32 second)
{
    PendingRequest *request = &DAT_004d4200;
    request->kind = 5;
    request->flags = 0;
    request->id = 0xbca3;
    request->second = second;
    request->first = first;
    FUN_002ad4f8(request);
    FUN_002ad614();
}

} /* extern "C" */
