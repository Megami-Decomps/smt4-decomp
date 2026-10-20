#include "common.h"

extern "C" {

void FUN_0011e7da(u32 handle);

typedef struct HandleHolder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 handle;
} HandleHolder;

/* Passes the object's handle to FUN_0011e7da. */
void FUN_00106144(HandleHolder *object)
{
    FUN_0011e7da(object->handle);
}

} /* extern "C" */
