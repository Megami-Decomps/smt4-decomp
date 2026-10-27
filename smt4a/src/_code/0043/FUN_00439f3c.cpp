#include "common.h"

extern "C" {

struct FUN_00439f3cView {
    u8 unk00[0x68];
    u32 value;
};

u32 synchronizedListMarkEntry(u32 value);

/* Calls synchronizedListMarkEntry with the word at +0x68 (placed right after, so the call is a linker NOP). */
u32 FUN_00439f3c(const FUN_00439f3cView *self)
{
    return synchronizedListMarkEntry(self->value);
}

} /* extern "C" */
