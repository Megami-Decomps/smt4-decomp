#include "common.h"

struct Unk5C1BFC {
    u8 unk00[8];
    u32 value;
};

extern "C" {
extern Unk5C1BFC *DAT_005c1bfc;

u32 FUN_001a0d40(void)
{
    return DAT_005c1bfc != NULL ? DAT_005c1bfc->value : 0;
}
}
