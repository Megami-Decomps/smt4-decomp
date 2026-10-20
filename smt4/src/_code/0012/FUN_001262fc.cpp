#include "common.h"

extern "C" {

typedef struct Work1262fc {
    u8 unk00[0x94];
    s8 value;                      /* 0x94 */
} Work1262fc;

Work1262fc *jobGetWork(void);

/* Returns the signed byte at 0x94 of the job's work area. */
s8 FUN_001262fc(void)
{
    return jobGetWork()->value;
}

} /* extern "C" */
