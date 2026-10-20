/* Returns the last address of the VRAM bank starting at `bank` (0x20000 = VRAM-A, 0x30000 = VRAM-B), or 0 for anything else. */
#include "common.h"

extern "C" {

extern void nngxCheckVramBank(u32 bank);

u32 nngxGetVramEndAddr(u32 bank)
{
    switch (bank) {
    case 0x20000:
        nngxCheckVramBank(bank);
        return 0x1F2FFFFF;
    case 0x30000:
        nngxCheckVramBank(bank);
        return 0x1F5FFFFF;
    }
    return 0;
}

}
