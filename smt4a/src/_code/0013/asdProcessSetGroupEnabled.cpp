#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

/* Enables or disables a process group. */
void asdProcessSetGroupEnabled(s32 group, s32 enabled)
{
    if (group < 0x200) {
        g_asdProcessGroupEnabled[group] = enabled != 0;
    }
}

} /* extern "C" */
