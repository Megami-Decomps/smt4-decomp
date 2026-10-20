#include "common.h"

extern "C" {

typedef struct ObjFUN_0018349c {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *child;
} ObjFUN_0018349c;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0018349c_hook(void *obj);

void FUN_0018349c(ObjFUN_0018349c *obj)
{
    FUN_0018349c_hook(obj->child);
}

} /* extern "C" */
