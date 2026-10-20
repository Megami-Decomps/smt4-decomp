#include "common.h"

extern "C" {

int FUN_00254e2c(u32 a, u32 b, u32 c, int d, int e);
int FUN_002bff50(void);
extern u32 FUN_002893d8(void);
extern u32 scrGetArg(u32 index);
extern u32 FUN_002b47f4(u32 id);

void scrComm_Message_ShowConfirmSimple(void)
{
    u32 arg = scrGetArg(0);
    u32 message = FUN_002b47f4(0x1e);
    u32 flag = FUN_002893d8();

    FUN_002bff50();
    FUN_00254e2c(message, arg, flag, 6, 0);
}

} /* extern "C" */
