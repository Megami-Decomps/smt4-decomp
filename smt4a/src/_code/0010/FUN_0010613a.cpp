#include "common.h"

extern "C" {

void FUN_0011e784(u32 handle);

typedef struct HandleHolder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 handle;
} HandleHolder;

/* Passes the object's handle to FUN_0011e784. */
void FUN_0010613a(HandleHolder *object)
{
    FUN_0011e784(object->handle);
}

} /* extern "C" */
