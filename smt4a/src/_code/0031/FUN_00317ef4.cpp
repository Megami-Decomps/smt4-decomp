#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" AsdProcessState g_asdProcess;

/* Finds the process with this name and returns its handle, or 0 when there is none. */
extern "C" u32 FUN_00317ef4(const char *name)
{
    s32 sum = 0;
    s32 length = 0;
    AsdProcess *process;

    for (; name[length] != 0; length++) {
        sum += (s8)name[length];
    }
    for (s32 group = 0; group < g_asdProcess.groupCount; group++) {
        for (process = g_asdProcess.groups[group].head; process != NULL; process = process->next) {
            if (process->nameSum != sum) {
                continue;
            }
            for (s32 i = length; (s8)name[i] == (s8)process->name[i]; i--) {
                if (i == 0) {
                    return process->handle;
                }
            }
        }
    }
    return 0;
}
