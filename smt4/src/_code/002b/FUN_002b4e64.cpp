#include "common.h"

extern "C" {

typedef struct ObjFUN_002b4e64 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 id;
    /* 0x38 */ u8 sub[4];
} ObjFUN_002b4e64;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002b4e64_hook(void *sub);

void FUN_002b4e64(ObjFUN_002b4e64 *obj)
{
    obj->id = -1;
    FUN_002b4e64_hook(obj->sub);
}

} /* extern "C" */
