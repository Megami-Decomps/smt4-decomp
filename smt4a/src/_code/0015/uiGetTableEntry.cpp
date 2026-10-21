#include "common.h"

struct TableEntry {
    u8 unk00[0x68]; // 0x00
};

extern "C" {
extern TableEntry DAT_0063afc8[];

TableEntry* uiGetTableEntry(u32 index)
{
    return &DAT_0063afc8[index];
}
}
