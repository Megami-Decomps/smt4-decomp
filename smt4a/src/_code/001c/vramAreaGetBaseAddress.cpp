#include "common.h"

extern "C" {

extern s32 nngxCheckVramBank(u32 area);

/* Base address of VRAM area 0x20000 or 0x30000 (the bank selects the second half); 0 for others. */
u32 vramAreaGetBaseAddress(u32 area)
{
    if (area == 0x20000) {
        if (nngxCheckVramBank(area) != 0) {
            return 0x1F180000;
        }
        return 0x1F000000;
    }
    if (area != 0x30000) {
        return 0;
    }
    if (nngxCheckVramBank(area) != 0) {
        return 0x1F380000;
    }
    return 0x1F300000;
}

} /* extern "C" */
