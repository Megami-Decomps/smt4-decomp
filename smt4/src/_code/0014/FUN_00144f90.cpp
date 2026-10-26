/* NON_MATCHING: supervisor-call wrapper (hand-written SDK assembly: push {r0}; svc 0x35; ldr r2,[sp]; str r1,[r2]); armcc __svc calls keep the output pointer in r4 (push {r4, lr}) instead. */
#include "nn/svc.h"

/* Reads the thread's id (svc 0x35) into *threadId and returns the result code. */
extern "C" s32 FUN_00144f90(u32 *threadId, u32 thread)
{
    nn::svc::ResultAndValue response = nn::svc::GetThreadIdRaw(0, thread);
    *threadId = response.value;
    return response.result;
}
