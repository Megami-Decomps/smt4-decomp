#include "common.h"

extern "C" {

typedef struct ObjFUN_00280d2c {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *child;
} ObjFUN_00280d2c;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00280d2c_hook(void *obj);

void asdMdlManagerMarkDestroy(ObjFUN_00280d2c *obj)
{
    obj->flags |= 0x200000;
    FUN_00280d2c_hook(obj->child);
}

} /* extern "C" */
