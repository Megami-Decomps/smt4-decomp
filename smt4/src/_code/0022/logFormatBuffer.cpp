/* Builds a 256-byte zeroed text buffer from `text`, hands it to FUN_002ac838 with the target value, then forwards that target and `arg` to asdNgcCheckWords. */
#include "common.h"

extern "C" {

void asdNgcCheckWords(s32 *target, u32 arg);
void FUN_002ac838(s32 target, u8 *buffer, s32 size);
void FUN_002bf694(u8 *buffer, u32 text);
void FUN_002c3940(u8 *buffer, s32 size);

void logFormatBuffer(u32 text, s32 target, u32 arg)
{
    u8 buffer[256];

    FUN_002c3940(buffer, sizeof(buffer));
    FUN_002bf694(buffer, text);
    FUN_002ac838(target, buffer, sizeof(buffer));
    asdNgcCheckWords(&target, arg);
}

} /* extern "C" */
