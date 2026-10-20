#include "common.h"

extern "C" {

void FUN_00107100(u32 object, u8 *buffer, s32 size);
void FUN_00107110(u32 object, u8 *buffer, s32 size);
void FUN_0010715a(u32 object, u8 *buffer, s32 size);
void FUN_0010716a(u32 object, u8 *buffer, s32 size);
void netInterfaceFormatTypeFlags(u32 object, u8 *buffer, s32 size);

/* Runs the five per-word handlers over the object using one shared scratch buffer. */
void FUN_00107120(u32 object)
{
    u8 buffer[256];

    FUN_0010716a(object, buffer, 0x80);
    FUN_00107100(object, buffer, 0x80);
    FUN_00107110(object, buffer, 0x80);
    FUN_0010715a(object, buffer, 0x80);
    netInterfaceFormatTypeFlags(object, buffer, 0x80);
}

} /* extern "C" */
