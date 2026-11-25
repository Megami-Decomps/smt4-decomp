#include "nn/err/Fatal.h"

extern "C" {
extern u8 g_sysServicesInitialized;   /* the services are up */
extern const char g_nimAocServiceName[]; /* "nim:aoc" */
extern u32 g_nimAocSession;    /* the nim:aoc session handle */

void fsInitializeUserMount(void);
void nn_cfg_CTR_Initialize(void);
s32 nnAmConnectOnce(void);
s32 nimAocConnect(u32 *session, const char *name);
s32 nimAocInitialize(void);

/* Starts the system services once: the user file system, the configuration and application-manager
 * services, then the nim:aoc service. A failure is fatal and reported with the address it was detected at. */
void sysInitializeServices(void)
{
    if (g_sysServicesInitialized != 0) {
        return;
    }
    fsInitializeUserMount();
    nn_cfg_CTR_Initialize();
    s32 result = nnAmConnectOnce();
    if (!nnResultIsFailure(result)) {
        result = nimAocConnect(&g_nimAocSession, g_nimAocServiceName);
        if (!nnResultIsFailure(result)) {
            result = nimAocInitialize();
            if (!nnResultIsFailure(result)) {
                result = 0;
            }
        }
        if (!nnResultIsFailure(result)) {
            result = 0;
        }
    }
    throwFatalIfFailed(result, __current_pc());
    g_sysServicesInitialized = 1;
}
} /* extern "C" */
