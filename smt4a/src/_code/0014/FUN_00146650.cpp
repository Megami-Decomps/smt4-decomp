/* NON_MATCHING: retail uses push {r4, r5, r6, lr} where the compiled block uses ldr r0, [pc, #40]. */
#include "common.h"

struct CriticalSection;

extern "C" {
extern CriticalSection DAT_0061a5f0;
extern s32 DAT_005b443c;

void nn_os_CriticalSection_Enter(CriticalSection* section);
void nn_os_CriticalSection_Leave(CriticalSection* section);

u8 FUN_00146650(void)
{
    nn_os_CriticalSection_Enter(&DAT_0061a5f0);
    u8 isSet = DAT_005b443c != 0;
    nn_os_CriticalSection_Leave(&DAT_0061a5f0);
    return isSet;
}
}
