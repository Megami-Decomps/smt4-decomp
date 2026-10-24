/* NON_MATCHING: same stores and calls (retail has no svc here); register allocation differs: retail moves the first argument to r2 and uses r0 for the request address. */
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

void FUN_002ad4f8(void);
void FUN_002ad614(void);

/* Posts request kind 5 (id 0xBCA3) with two parameters, then runs the dispatcher. */
void FUN_002bb648(u32 first, u32 second)
{
    DAT_004d4200.kind = 5;
    DAT_004d4200.flags = 0;
    DAT_004d4200.id = 0xbca3;
    DAT_004d4200.second = second;
    DAT_004d4200.first = first;
    FUN_002ad4f8();
    FUN_002ad614();
}

} /* extern "C" */
