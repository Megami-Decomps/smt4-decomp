#include "common.h"

struct Inner00345f3c {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u8 body[0x10];
    /* 0x4c */ u32 value;
};

struct Object00345f3c {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Inner00345f3c *inner;
};

extern "C" {

__declspec(noreturn) __weak void FUN_00345f3c_hook(void *body, u32 value);

/* Calls the engine's (removed) noreturn hook with the inner record's body and value; armlink turned the tail branch into a nop. */
void FUN_00345f3c(Object00345f3c *object)
{
    FUN_00345f3c_hook(object->inner->body, object->inner->value);
}

} /* extern "C" */
