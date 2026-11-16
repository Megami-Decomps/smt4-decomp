#include "common.h"

extern "C" {

/* Adds the bits a mask event sets to the halfword `*mask`: events 0xc, 0xe, 0x11, 0x12 and 0x15 add several bits, any other event its own bit. */
void FUN_0023dc38(u16 *mask, u32 event)
{
    switch (event) {
    case 0xc:
        *mask |= 0x3e0;
        break;
    case 0xe:
        *mask |= 0x7e2;
        break;
    case 0x11:
        *mask |= 0x1e2;
        *mask |= 0x200;
        break;
    case 0x12:
        *mask |= 0x1c0;
        break;
    case 0x15:
        *mask |= 0x20;
        *mask |= 0x200;
        break;
    default:
        *mask |= 1 << event;
        break;
    }
}

} /* extern "C" */
