#include "common.h"
#include "code/Code0015_Smt4.h"

extern "C" {

typedef struct ObjFUN_001565e4 {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *body;
} ObjFUN_001565e4;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001565e4_hook(void *obj);

void FUN_001565e4(ObjFUN_001565e4 *obj)
{
    FUN_001565e4_hook(obj->body);
}

} /* extern "C" */
