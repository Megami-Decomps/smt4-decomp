#include "common.h"

struct AocBootState {
    /* 0x00 */ u32 job;
    /* 0x04 */ void *work;
};

extern "C" {

extern AocBootState g_aocBoot;

/* Reports whether the AOC boot work area exists. */
bool aocBootHasWork(void)
{
    return g_aocBoot.work != NULL;
}

} /* extern "C" */
