#include "common.h"

extern "C" {

int FUN_002866b4(u32 a, u32 b, u32 c, int d, int e, int f);
extern u32 FUN_002865f8(void);
extern int FUN_0028660c(void);
extern u32 FUN_002893d8(void);
extern u32 scrGetArg(u32 index);

void scrComm_Message_Show(void)
{
    int style = FUN_0028660c();
    u32 a;
    u32 b;
    u32 c;

    style = (style == 0x14) ? 5 : style;
    a = FUN_002865f8();
    b = scrGetArg(0);
    c = FUN_002893d8();
    FUN_002866b4(a, b, c, style, 0, 0);
}

} /* extern "C" */
