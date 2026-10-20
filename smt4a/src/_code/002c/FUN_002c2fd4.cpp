#include "common.h"

extern "C" {

extern int dialogOpen(int mode, int flag);
extern const char *scrGetArgString(void);
extern int FUN_002392b8(const char *text);
extern int FUN_002c2d5c(u32 arg);

u32 FUN_002c2fd4(void)
{
    FUN_002392b8(scrGetArgString());
    dialogOpen(1, 1);
    FUN_002c2d5c(0xFFFFFFFF);
    return 1;
}

}
