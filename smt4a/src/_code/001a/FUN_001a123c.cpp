#include "common.h"

extern "C" {

struct FUN_001a123cView {
    u8 unk00[0x4];
    u32 value;
};

u32 FUN_001a1244(u32 value);

/* Calls FUN_001a1244 with the word at +0x4 (placed right after, so the call is a linker NOP). */
u32 FUN_001a123c(const FUN_001a123cView *self)
{
    return FUN_001a1244(self->value);
}

} /* extern "C" */
