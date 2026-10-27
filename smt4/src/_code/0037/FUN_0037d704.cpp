#include "common.h"

extern "C" {

struct FUN_0037d704View {
    u8 unk00[0x88];
    u8 value;
};

void FUN_0037d704(FUN_0037d704View *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
