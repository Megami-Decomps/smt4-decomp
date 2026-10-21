#include "common.h"

extern "C" {
extern u8 DAT_0044e0f8[4];
void FUN_001082a0(u8 value);
void FUN_002c34e8(u8 value);
void FUN_00109670(u8 value);
void soundSetVolumeSetting(u8 value);

/* Applies the four saved audio configuration values. */
void FUN_002c587c(void)
{
    FUN_001082a0(DAT_0044e0f8[0]);
    FUN_002c34e8(DAT_0044e0f8[1]);
    FUN_00109670(DAT_0044e0f8[2]);
    soundSetVolumeSetting(DAT_0044e0f8[3]);
}
}
