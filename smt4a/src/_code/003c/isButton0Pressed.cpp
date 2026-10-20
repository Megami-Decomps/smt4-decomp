#include "shard/Shard003C.h"

extern "C" {

extern s32 padButtonIsPressed(u32 button);

u8 isButton0Pressed(void)
{
    return padButtonIsPressed(0) != 0;
}

} /* extern "C" */
