#include "common.h"

extern "C" {

extern int FUN_00225220(int block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ int target;
} Obj;

extern Obj g_btlUi;

int FUN_003aea5c(void)
{
    int target = g_btlUi.target;
    int result = FUN_00225220(target + 8);

    if (result != 0) {
        *(u32 *)(target + 0x7e38) = 0;
    }
    return result;
}

} /* extern "C" */
