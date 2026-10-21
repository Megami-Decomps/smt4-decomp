#include "common.h"
extern "C" {
extern const char DAT_0053891a[];
u32 FUN_0030f138(void *holder, const char *text, u32 mode);
/* Assigns the fixed text and narrows the operation's result. */
u16 FUN_002fe454(void *holder) {
    return FUN_0030f138(holder, DAT_0053891a, 0);
}
}
