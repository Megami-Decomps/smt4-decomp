/* NON_MATCHING: stores and loads match; only constant registers (r1-r3 vs r0-r2) and mov r4,r0 placement differ. */
#include "common.h"

struct LookupRequest {
    u32 key;      // 0x00
    u8 enabled;   // 0x04
    u32 minValue; // 0x08
    u32 maxValue; // 0x0c
    u32 step;     // 0x10
    u8 flag;      // 0x14

    LookupRequest()
    {
        key = 0;
        enabled = 0;
        maxValue = 0x10000;
        minValue = 0x30000;
        step = 0x10000;
        flag = 0;
    }
};

struct LookupOwner {
    u8 unk00[0xc];
    u32 result; // 0x0c
    u32 key;    // 0x10
    u32 flag;   // 0x14
    u32 minValue; // 0x18
    u32 maxValue; // 0x1c
};

extern "C" {

u32 FUN_001581dc(LookupRequest *request);

void FUN_0040ab9c(LookupOwner *owner)
{
    LookupRequest request;
    request.key = owner->key;
    request.enabled = 1;
    request.minValue = owner->minValue;
    request.maxValue = owner->maxValue;
    request.flag = owner->flag;
    owner->result = FUN_001581dc(&request);
}

} /* extern "C" */
