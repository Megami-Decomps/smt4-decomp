/* NON_MATCHING: retail loads a file name string and a line number (876) into r0/r1 before the allocation call (the call itself is a nop in the retail image). */
#include "battle/btlAction.h"

extern "C" {

void *asdMemoryAllocTracked(s32 heap, s32 align, s32 a, s32 size, s32 flag);

extern BtlActionGlobals g_btlAction;

/* Allocates the action data block on first use. */
void btlActionAllocData(void)
{
    if (g_btlAction.data == NULL) {
        g_btlAction.data = asdMemoryAllocTracked(0x100, 0x100, 0, 0xDBF4, 1);
    }
}

} /* extern "C" */
