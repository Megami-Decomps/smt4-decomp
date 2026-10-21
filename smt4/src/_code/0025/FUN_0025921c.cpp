#include "common.h"

extern "C" {

int FUN_002866b4(u32 a, int b, u32 c, int d, int e, u32 f);
int scrCommMessageSetMode(int arg);
extern u32 scrGetCommandFrame(void);

void FUN_0025921c(u32 a, u32 b)
{
    u32 c;

    scrCommMessageSetMode(0);
    c = scrGetCommandFrame();
    FUN_002866b4(a, 0, c, 0xf, 0, b);
}

} /* extern "C" */
