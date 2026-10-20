#include "common.h"

extern "C" {

typedef struct InnerFUN_00287030 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *child;
} InnerFUN_00287030;

typedef struct OuterFUN_00287030 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ InnerFUN_00287030 *inner;
} OuterFUN_00287030;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00287030_hook(void *obj);

void FUN_00287030(OuterFUN_00287030 *outer)
{
    FUN_00287030_hook(outer->inner->child);
}

} /* extern "C" */
