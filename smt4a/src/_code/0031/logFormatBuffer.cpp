/* Builds a 256-byte zeroed text buffer from `text`, hands it to FUN_00102af4 with the target value, then forwards that target and `arg` to asdNgcCheckWords. */
#include "common.h"

extern "C" {

void asdNgcCheckWords(s32 *target, u32 arg);
void FUN_00102af4(s32 target, u8 *buffer, s32 size);
void FUN_002e342c(u8 *buffer, u32 text);
void FUN_002e6dd0(u8 *buffer, s32 size);

void logFormatBuffer(u32 text, s32 target, u32 arg)
{
    u8 buffer[256];

    FUN_002e6dd0(buffer, sizeof(buffer));
    FUN_002e342c(buffer, text);
    FUN_00102af4(target, buffer, sizeof(buffer));
    asdNgcCheckWords(&target, arg);
}

} /* extern "C" */
