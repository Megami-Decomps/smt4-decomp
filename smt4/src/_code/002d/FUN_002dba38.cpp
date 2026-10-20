#include "common.h"

extern "C" {

int FUN_002118e4(int value);
int FUN_00250d84(u32 a, int b);
int FUN_00295a18(u32 a, int b);
int scrGetArg(int index);
int FUN_002b8e84(int id);
extern int FUN_002cdc00(void);

u32 FUN_002dba38(void)
{
    u32 a = scrGetArg(0);
    int b = scrGetArg(1);

    if (b < 0) {
        FUN_00250d84(a, -b);
    } else {
        FUN_00295a18(a, b);
    }
    if (FUN_002cdc00() != 0) {
        FUN_002b8e84(0x1000174);
        FUN_002118e4(b);
    }
    return 1;
}

} /* extern "C" */
