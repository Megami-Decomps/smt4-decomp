/* Matches with -Ospace (requested): the container code was built for size. */
/* Returns whether FUN_002e92e4 accepts the converted forms of `a` and `b`. */
#include "common.h"

extern "C" {

extern s32 FUN_002e92e4(u32 a, u32 b);
extern u32 FUN_002e95ba(u32 value);

u8 FUN_002fe22a(u32 a, u32 b)
{
    return FUN_002e92e4(FUN_002e95ba(a), FUN_002e95ba(b)) != 0;
}

}
