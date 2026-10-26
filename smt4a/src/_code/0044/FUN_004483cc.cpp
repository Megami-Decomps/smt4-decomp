#include "common.h"

struct Holder8 {
    u8 unk00[8];
    u8 *object;
};

extern "C" {
void FUN_00515cec(u8 *object, u32 *value);

void FUN_004483cc(Holder8 *holder, u32 value)
{
    u8 *object = holder->object + 8;
    u32 local = value;
    FUN_00515cec(object, &local);
}
}
