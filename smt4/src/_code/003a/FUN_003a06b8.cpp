/* NON_MATCHING: register allocation only: retail copies the second id into r6 before the tie-break calls and keeps the first result in r4; built keeps the id in r4 and the result in r5 */
#include "common.h"

extern "C" {

extern s32 aocItemGetPrice(u32 id);
extern s32 FUN_00230f44(u32 id);

/* Comparison of two ids: by aocItemGetPrice, then by FUN_00230f44. */
s32 FUN_003a06b8(u32 a, u32 b)
{
    s32 result = aocItemGetPrice(a) - aocItemGetPrice(b);

    if (result == 0) {
        result = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return result;
}

} /* extern "C" */
