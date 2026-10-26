/* NON_MATCHING: result/register allocation differs (retail keeps the result in r0 until the pc check and only the global pointer in r4; the build uses r4-r6). */
#include "nn/svc.h"

extern "C" {
extern u32 DAT_004656b0;
extern u32 DAT_0040b730;
void FUN_002c131c(s32 result, u32 location, u32 failed);
}

static __inline void checkResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_002c131c(result, location, failed);
}

extern "C" {
s32 FUN_0011d360(void)
{
    s32 result;
    if (DAT_004656b0 == 0) {
        result = 0xE0A0CFF8;
    } else {
        result = nn::svc::CloseHandle(DAT_004656b0);
        DAT_004656b0 = DAT_0040b730;
    }
    checkResult(result, __current_pc());
    return result;
}
}
