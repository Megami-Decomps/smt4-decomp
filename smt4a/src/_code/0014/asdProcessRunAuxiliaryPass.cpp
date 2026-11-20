#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcessState g_asdProcess;
s32 gxIsStereoscopic3dEnabled(void);
s32 asdGxCommandListReplayCopy(u32 commandList); // declcheck: local (AsdProcess keeps its AsdGxCommandList as a u32 handle)

/* In stereoscopic 3D, runs the auxiliary callback of every running process, or replays the saved copy of
 * its command list when it has none. */
void asdProcessRunAuxiliaryPass(void)
{
    if (gxIsStereoscopic3dEnabled() == 1) {
        for (s32 group = 0; group < g_asdProcess.groupCount; ++group) {
            for (AsdProcess *process = g_asdProcess.groups[group].head; process != NULL; process = process->next) {
                if (process->state == ASD_PROC_RUNNING) {
                    if (process->onAuxiliary == NULL) {
                        asdGxCommandListReplayCopy(process->cmdList);
                    } else {
                        process->onAuxiliary(process->handle);
                    }
                }
            }
        }
    }
}

} /* extern "C" */
