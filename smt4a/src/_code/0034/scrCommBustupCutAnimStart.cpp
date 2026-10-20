#include "common.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 FUN_0037b280(void);
extern void bustupCutAnimSetJobParam(void);
extern void FUN_00318544(u32 id, s32 a, s32 b, s32 c, s32 d);
extern void scrSetResult(u32 value);

/* Script command: starts the bust-up cut animation for the current bust-up and pushes its id; returns 1. */
s32 scrCommBustupCutAnimStart(void)
{
    u32 id;

    scrGetArg(0);
    id = FUN_0037b280();
    bustupCutAnimSetJobParam();
    FUN_00318544(id, 0, 0, 0, 0);
    scrSetResult(id);
    return 1;
}

} /* extern "C" */
