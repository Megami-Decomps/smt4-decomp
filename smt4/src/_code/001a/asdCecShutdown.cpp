/* Frees the CEC module's object (its helper buffer and message box) and shuts the CEC service down. Returns 1 when the
 * service shut down successfully. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/Result.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
void asdMemFreeNonNull(void *memory);
void asdMemFree(void *memory);
u32 cecStopService(void);

u8 asdCecShutdown(void)
{
    u8 shutDown = 0;

    if (g_asdCec.cec != NULL) {
        asdMemFreeNonNull(g_asdCec.cec->work);
        if (g_asdCec.cec->box != NULL) {
            ((void (*)(AsdCecMessageBox *))g_asdCec.cec->box->vtable[1])(g_asdCec.cec->box);
        }
        asdMemFree(g_asdCec.cec);
        g_asdCec.cec = NULL;
    }
    if ((s32)(cecStopService() & 0x80000000) >= 0) {
        shutDown = 1;
    }
    return shutDown;
}
}
