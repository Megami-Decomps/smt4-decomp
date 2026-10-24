#include "common.h"

extern "C" {

struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *object;
};

__declspec(noreturn) __weak void FUN_00512eb0_hook(void *object);

/* Forwards the held object to the engine's (removed) hook; armlink turned the tail branch into a nop. */
void FUN_00512eb0(Holder *holder)
{
    FUN_00512eb0_hook(holder->object);
}

} /* extern "C" */
