#include "common.h"

extern "C" {

/* Rebases an address from one of two memory windows (0x14000000.. or 0x1f000000..+0x600000, 0x1f600000) onto its counterpart; 0 if outside both. */
int nnosConvertVirtToPhysImpl(u32 addr)
{
    int result = 0;

    if (addr - 0x14000000 < 0x8000000) {
        result = addr + 0xc000000;
    } else if (addr - 0x1f000000 < 0x600000 || addr == 0x1f600000) {
        result = addr - 0x7000000;
    }
    return result;
}

} /* extern "C" */
