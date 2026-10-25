#include "common.h"
#include "shard/W6_W6Match7_ArchiveIcon.h"

extern "C" {

s32 FUN_004269b4(void *output, u8 flag, const void *input, s32 count);

/* Forwards unchanged to the IPC request below. */
s32 FUN_004269b0(void *output, u8 flag, const void *input, s32 count)
{
    return FUN_004269b4(output, flag, input, count);
}

} /* extern "C" */
