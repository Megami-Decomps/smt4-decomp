#include "common.h"

extern "C" {

void libc_printfStr(void *object, s32 a, s32 b);
void libc_wprintfStr(void *object, s32 a, s32 b);

typedef struct Dispatcher {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 variant;    /* nonzero selects the alternate handler */
} Dispatcher;

/* Forwards to the alternate handler when `variant` is set and to the default one otherwise; always succeeds. */
u32 libc_printfStrDispatch(Dispatcher *object, s32 a, s32 b)
{
    if (object->variant != 0) {
        libc_wprintfStr(object, a, b);
    } else {
        libc_printfStr(object, a, b);
    }
    return 1;
}

} /* extern "C" */
