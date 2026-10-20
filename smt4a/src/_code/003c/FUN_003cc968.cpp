#include "shard/Shard003C.h"

extern "C" {

extern s32 byteArr51Get50(void);

u8 FUN_003cc968(void)
{
    return byteArr51Get50() != 0;
}

} /* extern "C" */
