#include "common.h"

struct Holder8 {
    u8 unk00[8];
    u8 *object;
};

extern "C" {
void FUN_0023669c(u8 *object, u32 *value);

void FUN_0036682c(Holder8 *holder, u32 value)
{
    u8 *object = holder->object + 8;
    u32 local = value;
    FUN_0023669c(object, &local);
}
}
