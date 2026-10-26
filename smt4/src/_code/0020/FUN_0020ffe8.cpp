#include "common.h"
#include "code/Code0020_Smt4.h"

extern "C" {

typedef struct InnerFUN_0020ffe8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *child;
} InnerFUN_0020ffe8;

typedef struct OuterFUN_0020ffe8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ InnerFUN_0020ffe8 *inner;
} OuterFUN_0020ffe8;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0020ffe8_hook(void *obj);

void FUN_0020ffe8(OuterFUN_0020ffe8 *outer)
{
    FUN_0020ffe8_hook(outer->inner->child);
}

} /* extern "C" */
