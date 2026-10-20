#include "common.h"

extern "C" {

typedef struct ObjFUN_002bf4f0 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *child;
} ObjFUN_002bf4f0;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bf4f0_hook(void *obj);

void FUN_002bf4f0(ObjFUN_002bf4f0 *obj)
{
    FUN_002bf4f0_hook(obj->child);
}

} /* extern "C" */
