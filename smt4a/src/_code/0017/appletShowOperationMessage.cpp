#include "shard/W6_W6Match3_AppletMessageConfig.h"

extern "C" {
void FUN_0018c740(AppletMessageConfig *config);
void FUN_0018c7b0(u8 *result, AppletMessageConfig *config);
void FUN_0018c840(void);
void FUN_0018c870(void);
void appletWaitForSlotReady(void);

/* Resets the applet's backing storage and shows the message for the supplied operation. */
void appletShowOperationMessage(u32 argument)
{
    AppletMessageConfig config;
    FUN_0018c740(&config);
    config.unk04 = argument;
    config.enabled = 0;
    appletWaitForSlotReady();
    FUN_0018c840();
    FUN_0018c870();
    u8 result;
    FUN_0018c7b0(&result, &config);
}
} /* extern "C" */
