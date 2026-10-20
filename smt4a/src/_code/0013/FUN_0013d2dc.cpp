#include "common.h"

extern "C" {

/* Extension block at 0x1000: two enable bytes at 0x40 and 0x43. */
typedef struct {
    u8 unk00[0x40];
    u8 enableA;         /* 0x40 */
    u8 unk41[2];
    u8 enableB;         /* 0x43 */
} Extension;

typedef struct {
    u8 unk00[0x1c];
    u8 pending;         /* 0x1c */
    u8 unk1d[0xfe3];
    Extension ext;      /* 0x1000 */
} Context;

Context *jobGetWork(void);
int FUN_001546e8(int arg);
int FUN_0014aa9c(int arg);

/* Fires FUN_0014aa9c when both extension switches are on, FUN_001546e8 is idle and a request is pending; always returns 0. */
u8 FUN_0013d2dc(void)
{
    Context *context = jobGetWork();

    if (context->ext.enableA == 0) {
        return 0;
    }
    if (context->ext.enableB == 0) {
        return 0;
    }
    if (FUN_001546e8(0) != 0) {
        return 0;
    }
    if (context->pending != 0) {
        FUN_0014aa9c(0);
    }
    return 0;
}

} /* extern "C" */
