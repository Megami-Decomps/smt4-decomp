#include "common.h"

struct Slot10 {
    u8 unk00[0x10];
    u32 value;
};

extern "C" {
extern u32 DAT_00414b54[];

void word8HolderSetFromTable(Slot10 *slot, s32 index)
{
    slot->value = DAT_00414b54[index];
}
}
