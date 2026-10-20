#include "common.h"

extern "C" {

typedef struct ObjFUN_0031d174 {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 unk01[15];
    /* 0x10 */ u8 body[1];
} ObjFUN_0031d174;

void FUN_0031d1a0(void *body);

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0031d174_hook(void *body);

void FUN_0031d174(ObjFUN_0031d174 *obj)
{
    if (obj->type == 1) {
        FUN_0031d174_hook(obj->body);
    } else {
        FUN_0031d1a0(obj->body);
    }
}

} /* extern "C" */
