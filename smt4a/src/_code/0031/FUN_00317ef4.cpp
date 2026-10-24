/* NON_MATCHING: same hash-chain walk; the two characters compared are loaded into swapped registers (r8/r7 in retail, r7/r8 here). */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" AsdProcessState g_asdProcess;

/* Finds the process with this name and returns its handle, or 0 when there is none. */
extern "C" u32 FUN_00317ef4(const char *name)
{
    s32 sum = 0;
    s32 length = 0;
    s32 group;
    AsdProcess *process;
    s32 i;

    for (; name[length] != 0; length++) {
        sum += (s8)name[length];
    }
    for (group = 0; group < g_asdProcess.groupCount; group++) {
        for (process = g_asdProcess.groups[group].head; process != NULL; process = process->next) {
            if (process->nameSum != sum) {
                continue;
            }
            for (i = length; (s8)name[i] == (s8)process->name[i]; i--) {
                if (i == 0) {
                    return process->handle;
                }
            }
        }
    }
    return 0;
}
