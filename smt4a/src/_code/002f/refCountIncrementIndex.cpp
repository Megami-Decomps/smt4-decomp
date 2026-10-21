#include "common.h"

extern "C" {

extern s32 DAT_0062d830[];

/* Increments entry `index` of the counter table at 0x62D830. */
void refCountIncrementIndex(s32 index)
{
    DAT_0062d830[index] = DAT_0062d830[index] + 1;
}

} /* extern "C" */
