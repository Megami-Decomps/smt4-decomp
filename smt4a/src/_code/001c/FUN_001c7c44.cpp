#include "common.h"

extern "C" {

typedef struct ObjFUN_001c7c44 {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *body;
} ObjFUN_001c7c44;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001c7c44_hook(void *obj);

void FUN_001c7c44(ObjFUN_001c7c44 *obj)
{
    FUN_001c7c44_hook(obj->body);
}

} /* extern "C" */
