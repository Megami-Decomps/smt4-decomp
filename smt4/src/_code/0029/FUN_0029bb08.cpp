#include "common.h"

extern "C" {

typedef struct InnerFUN_0029bb08 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *child;
} InnerFUN_0029bb08;

typedef struct OuterFUN_0029bb08 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ InnerFUN_0029bb08 *inner;
} OuterFUN_0029bb08;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0029bb08_hook(void *obj);

void FUN_0029bb08(OuterFUN_0029bb08 *outer)
{
    FUN_0029bb08_hook(outer->inner->child);
}

} /* extern "C" */
