#include "shard/Shard0035.h"
#include "ui/MessageMainA.h"

extern "C" {

extern u16 scrGetArg(s32 index);

/* Script command: arms the banner's counter panel (mode 10, state 3) with argument 0. */
u32 scrCommArmWork150(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    banner->panelArgument = scrGetArg(0);
    banner->panelMode = 10;
    banner->panelState = 3;
    return 1;
}

} /* extern "C" */
