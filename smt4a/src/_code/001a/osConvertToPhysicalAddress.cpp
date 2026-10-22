#include "common.h"

extern "C" {

u32 FUN_001c6da0(u32 address, s32 mode);
s32 FUN_001a0ca4(void);
u32 FUN_001a0cbc(u32 address, s32 mode);
u32 FUN_001a0d58(void);
u32 FUN_001a0d40(void);

/* Convert a virtual address to its physical address: mapped memory, VRAM, then device memory; 0 if unknown. */
u32 osConvertToPhysicalAddress(u32 address)
{
    u32 physical = FUN_001c6da0(address, 1);
    if (physical != 0) {
        return physical;
    }
    if (address - 0x1F000000 < 0x600000 || address == 0x1F600000) {
        return address - 0x07000000;
    }
    if (FUN_001a0ca4() != 0) {
        physical = FUN_001a0cbc(address, 1);
        if (physical != 0) {
            return physical;
        }
    }
    u32 base = FUN_001a0d58();
    u32 end = base + FUN_001a0d40();
    if (base != 0 && base <= address && address < end) {
        if (base >= 0x30000000) {
            return address - 0x10000000;
        }
        return address + 0x0C000000;
    }
    return 0;
}

} /* extern "C" */
