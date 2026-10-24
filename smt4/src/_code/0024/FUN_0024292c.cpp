#include "common.h"

struct Inner0024292c {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u8 body[0x10];
    /* 0x4c */ u32 value;
};

struct Object0024292c {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Inner0024292c *inner;
};

extern "C" {

__declspec(noreturn) __weak void FUN_0024292c_hook(void *body, u32 value);

/* Calls the engine's (removed) noreturn hook with the inner record's body and value; armlink turned the tail branch into a nop. */
void FUN_0024292c(Object0024292c *object)
{
    FUN_0024292c_hook(object->inner->body, object->inner->value);
}

} /* extern "C" */
