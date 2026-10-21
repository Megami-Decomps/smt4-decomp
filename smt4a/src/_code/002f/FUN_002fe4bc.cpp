#include "common.h"
extern "C" {
extern const char DAT_00538b30[];
u32 FUN_0030f138(void *holder, const char *text, u32 mode);
/* Assigns the fixed text and narrows the operation's result. */
u16 FUN_002fe4bc(void *holder) {
    return FUN_0030f138(holder, DAT_00538b30, 0);
}
}
