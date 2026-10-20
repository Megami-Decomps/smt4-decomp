/* NON_MATCHING: only the callee-saved register assignment differs (parameters are saved in r4..r7 in the reverse order of retail). */
#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 extra[4];
} Source;

typedef struct Target {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 inner[4];
} Target;

int FUN_00118180(void *inner, u32 value, Source *source, u32 arg);
int FUN_0030745c(Target *target, void *extra, Source *source, u32 arg);

/* Copies `source` into the target through FUN_0030745c (with its extra block), then into the target's inner object. */
void FUN_0011b652(Target *target, u32 value, Source *source, u32 arg)
{
    FUN_0030745c(target, source->extra, source, arg);
    FUN_00118180(target->inner, value, source, arg);
}

} /* extern "C" */
