#include "common.h"

extern "C" {

/* Pool object: the field at 0x7e38 is cleared once FUN_002d0298 accepts it. */
typedef struct {
    u8 unk00[8];
    u8 header[0x7e30];  /* 0x08 */
    u32 field7e38;      /* 0x7e38 */
} Pool;

/* Owner holding the pool at 0x20. */
typedef struct {
    u8 unk00[0x20];
    Pool *pool;         /* 0x20 */
} PoolOwner;

int FUN_002d0298(u8 *header);

extern PoolOwner g_btlUi;

/* Clears the pool's field at 0x7e38 when FUN_002d0298 succeeds; returns its result. */
int FUN_003aeb08(void)
{
    Pool *pool = g_btlUi.pool;
    int result = FUN_002d0298(pool->header);

    if (result != 0) {
        pool->field7e38 = 0;
    }
    return result;
}

} /* extern "C" */
