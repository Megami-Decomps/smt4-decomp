#include "common.h"

extern "C" void dialogClose(s32 value);

extern "C" s32 FUN_002e6120(void)
{
    dialogClose(1);
    return 1;
}
