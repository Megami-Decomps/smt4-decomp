#include "common.h"

struct Unk84Holder {
    u8 unk00[0x51];
    u8 disabled;
    u8 unk52[0x32];
    u32 value;
};

extern "C" {
u32 FUN_005094c4(Unk84Holder *holder)
{
    if (holder->disabled != 0) {
        return 0;
    }
    return holder->value != 0;
}
}
