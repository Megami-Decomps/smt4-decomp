#include "common.h"

extern "C" {

typedef struct ObjFUN_00293ed0 {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ void *state;
} ObjFUN_00293ed0;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00293ed0_hook(void *obj);

void FUN_00293ed0(ObjFUN_00293ed0 *obj)
{
    FUN_00293ed0_hook(obj->state);
}

} /* extern "C" */
