/* NON_MATCHING: register numbering only (retail: value in r6, section in r5). */
#include "common.h"

extern "C" {
void nn_os_CriticalSection_Enter(u32 section);
void nn_os_CriticalSection_Leave(u32 section);

void FUN_0037b480(u32 value, u8 *object)
{
    if (object == NULL) {
        return;
    }
    u32 section = (u32)(object + 0x174);
    nn_os_CriticalSection_Enter(section);
    *(u32 *)(object + 0x170) = value;
    nn_os_CriticalSection_Leave(section);
}
}
