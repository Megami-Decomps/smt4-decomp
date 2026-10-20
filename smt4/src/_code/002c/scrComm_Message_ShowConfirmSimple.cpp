#include "common.h"

extern "C" {

int FUN_00254e2c(u32 a, u32 b, u32 c, int d, int e);
int FUN_002bff50(void);
extern u32 scrGetCommandFrame(void);
extern u32 scrGetArg(u32 index);
extern u32 fileSlotGetBuffer(u32 id);

void scrComm_Message_ShowConfirmSimple(void)
{
    u32 arg = scrGetArg(0);
    u32 message = fileSlotGetBuffer(0x1e);
    u32 flag = scrGetCommandFrame();

    FUN_002bff50();
    FUN_00254e2c(message, arg, flag, 6, 0);
}

} /* extern "C" */
