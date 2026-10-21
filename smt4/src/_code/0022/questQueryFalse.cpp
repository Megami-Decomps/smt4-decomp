#include "common.h"

extern "C" {

/* This callback always reports false. */
s32 questQueryFalse(void)
{
    return 0;
}

}
