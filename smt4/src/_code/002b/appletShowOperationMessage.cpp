#include "shard/W6_W6Match3_AppletMessageConfig.h"

extern "C" {
void FUN_0013c584(AppletMessageConfig *config);
void FUN_0013c5f4(u8 *result, AppletMessageConfig *config);
void FUN_0013c684(void);
void FUN_0013c6b4(void);
void appletWaitForSlotReady(void);

/* Resets the applet's backing storage and shows the message for the supplied operation. */
void appletShowOperationMessage(u32 argument)
{
    AppletMessageConfig config;
    FUN_0013c584(&config);
    config.unk04 = argument;
    config.enabled = 0;
    appletWaitForSlotReady();
    FUN_0013c684();
    FUN_0013c6b4();
    u8 result;
    FUN_0013c5f4(&result, &config);
}
} /* extern "C" */
