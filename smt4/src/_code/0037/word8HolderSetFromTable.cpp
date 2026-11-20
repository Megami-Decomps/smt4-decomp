#include "common.h"

struct Slot10 {
    u8 unk00[0x10];
    u32 value;
};

extern "C" {
extern u32 g_word8HolderTable[];

void word8HolderSetFromTable(Slot10 *slot, s32 index)
{
    slot->value = g_word8HolderTable[index];
}
}
