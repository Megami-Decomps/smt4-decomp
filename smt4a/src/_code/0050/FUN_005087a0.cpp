#include "common.h"

struct SectionHeader {
    u8 unk00[4];
    u16 type;
    u8 unk06[2];
    s32 offset;
};

extern "C" {
SectionHeader *FUN_005087a0(SectionHeader *header)
{
    if (header->type != 0x101) {
        header = NULL;
    } else {
        header = (SectionHeader *)((u8 *)header + header->offset);
    }
    return header;
}
}
