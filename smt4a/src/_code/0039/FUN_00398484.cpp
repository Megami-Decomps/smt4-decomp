#include "common.h"

struct Obj398484 {
    u8 unk00[0x554];
    u32 index;
    u8 unk558[0x38];
    u32 *values;
};

extern "C" {
extern Obj398484 *DAT_0057f658;
void scrSetResult(s32 result);

/* Script command: sets the result to the current entry of the table's value array. */
s32 FUN_00398484(void)
{
    scrSetResult(DAT_0057f658->values[DAT_0057f658->index]);
    return 1;
}
}
