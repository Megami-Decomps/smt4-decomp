#include "common.h"

extern "C" {

extern int padIsButtonPressed(u32 mode);

u8 FUN_00328424(void)
{
    return padIsButtonPressed(0) != 0;
}

} /* extern "C" */
