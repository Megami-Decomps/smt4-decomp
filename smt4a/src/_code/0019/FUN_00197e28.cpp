#include "common.h"

extern "C" {

typedef struct ObjFUN_00197e28 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 id;
    /* 0x38 */ u8 sub[4];
} ObjFUN_00197e28;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00197e28_hook(void *sub);

void FUN_00197e28(ObjFUN_00197e28 *obj)
{
    obj->id = -1;
    FUN_00197e28_hook(obj->sub);
}

} /* extern "C" */
