#include "common.h"
#include "code/Code0042.h"

extern "C" {

u32 FUN_0043bfd0(void);

/* nn::Result test: module (bits 10-17) 0x11 with description (bits 0-9) in 100-179 maps to the 0xc961391a code; 0 otherwise. */
u32 FUN_00427e28(void *arg0, void *arg1, u32 arg2)
{
    u32 result = FUN_0043bfd0();
    u32 module = (result & 0x3fc00) >> 10;
    int description;

    if (module == 0x11 && (description = result & 0x3ff, description >= 100) && description <= 179) {
        return 0xc961391a;
    }
    return 0;
}

} /* extern "C" */
