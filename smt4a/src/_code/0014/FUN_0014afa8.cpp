/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_003f881c(u32 a, u32 b);
void FUN_0014384c(u32 a);
void FUN_0014afd0(u32 a, u32 b);

void FUN_0014afa8(void)
{
    FUN_003f881c(31, 1);
    FUN_0014384c(26);
    FUN_0014afd0(26, 0);
}

}
