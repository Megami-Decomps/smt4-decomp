#include "common.h"
extern "C" {
extern const char DAT_00539eb4[];
s32 FUN_0030f138(void *holder, const char *text, u32 mode);
/* Assigns the fixed text and reports whether the operation succeeded. */
s32 FUN_00123808(void *holder) {
    return FUN_0030f138(holder, DAT_00539eb4, 0) != 0;
}
}
