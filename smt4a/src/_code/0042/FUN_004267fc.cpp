#include "common.h"
extern "C" {
s32 FUN_004269b4(void *output, u8 flag, const void *input, s32 count);
/* Forwards to the shared implementation. */
s32 FUN_004267fc(void *output, u8 flag, const void *input, s32 count) { return FUN_004269b4(output, flag, input, count); }
}
