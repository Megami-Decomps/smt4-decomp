#include "common.h"

extern "C" {

typedef struct JobWorkValue {
    /* 0x00 */ u8 unk00[0xb8];
    /* 0xB8 */ s8 value;
} JobWorkValue;

extern JobWorkValue *jobGetWork(void);

/* Returns the signed byte at +0xB8 of the current job's work area. */
s8 FUN_00167ce8(void)
{
    return jobGetWork()->value;
}

} /* extern "C" */
