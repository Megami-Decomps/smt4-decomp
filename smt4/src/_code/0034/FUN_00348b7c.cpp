#include "common.h"

extern "C" {

extern int FUN_00287894(void *id);
extern int FUN_00298f88(void *id);
extern u8 *FUN_002adc88(void);

/* Finds the address of the slot (0xE bytes each from +0x842, four slots, then +0x87A) in the table whose id matches. */
int FUN_00348b7c(void *id)
{
    u8 *table = FUN_002adc88();

    if (FUN_00298f88(id) != 0) {
        if ((void *)(u32)*(u16 *)(table + 0x842) == id) {
            return (int)(table + 0x842);
        }
        if ((void *)(u32)*(u16 *)(table + 0x850) == id) {
            return (int)(table + 0x850);
        }
        if ((void *)(u32)*(u16 *)(table + 0x85e) == id) {
            return (int)(table + 0x85e);
        }
        if ((void *)(u32)*(u16 *)(table + 0x86c) == id) {
            return (int)(table + 0x86c);
        }
    } else {
        if (FUN_00287894(id) == 1) {
            return (int)(table + 0x87a);
        }
    }
    return 0;
}

} /* extern "C" */
