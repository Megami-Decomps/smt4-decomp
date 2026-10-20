#include "shard/Shard0035.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;

void screenSetColor670(u32 a, u8 b, u8 c, u8 d)
{
    ScreenObj *screen = DAT_0057f0c4.instance;

    screen->unk670 = a;
    screen->unk674 = b;
    screen->unk675 = c;
    screen->unk676 = d;
}

} /* extern "C" */
