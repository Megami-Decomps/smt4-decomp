/* NON_MATCHING: retail copies the direction with `subs r2, r0, #0` (cmp here) and branches after `mov r0, sp`; string loads and pool order now match */
#include "common.h"

extern "C" {

struct BtlAux;

extern BtlAux *g_btlAux;
extern const char DAT_00527f7c[]; /* "commonDw" */
extern const char DAT_00527f88[]; /* "commonUp" */

void ARM_common_memcpy4_9(char *dst, const char *src);
s32 obj4FQueryPair(BtlAux *aux, const char *name, u32 arg, s32 flag);

/* Queries the battle aux object for the common up/down entry matching the sign of `direction`. */
void FUN_002980e4(s32 direction, u32 arg)
{
    char name[32] = {0};
    const char *source = NULL;

    if (direction < 0) {
        source = DAT_00527f7c;
    }
    if (direction > 0) {
        source = DAT_00527f88;
    }
    if (direction != 0) {
        ARM_common_memcpy4_9(name, source);
    }
    obj4FQueryPair(g_btlAux, name, arg, 0);
}

} /* extern "C" */
