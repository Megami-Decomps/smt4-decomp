#include "common.h"
#include "bible/bibleAnalyze.h"

extern "C" {

/* Returns the bit mask for an id: fixed masks for ids 0x1D-0x25, otherwise 1 << id (0 for id 0). */
u32 FUN_004c3a10(u32 id)
{
    u32 mask = 0;

    switch (id) {
    case 0x1D:
    case 0x1E:
        mask = 0x3E0;
        break;
    case 0x20:
        mask = 1000;
        break;
    case 0x21:
        mask = 800;
        break;
    case 0x22:
        mask = 0x8C0;
        break;
    case 0x23:
        mask = 0x920;
        break;
    case 0x24:
        mask = 0x940;
        break;
    case 0x25:
        mask = 0x3BEA;
        break;
    default:
        if (id != 0) {
            mask = 1 << (id & 0xFF);
        }
        break;
    }
    return mask;
}

} /* extern "C" */
