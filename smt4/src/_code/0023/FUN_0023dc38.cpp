/* NON_MATCHING: switch block layout only: retail places the shared 'strh; bx lr' right after case 0xe and the cases 0x11, 0x12, 0x15 and default after it; the build puts the store last. */
#include "common.h"

extern "C" {

/* Adds the bits a mask event sets to the halfword `*mask`: events 0xc, 0xe, 0x11, 0x12 and 0x15 add several bits, any other event its own bit. */
void FUN_0023dc38(u16 *mask, u32 event)
{
    u32 bits = *mask;

    switch (event) {
    case 0xc:
        bits |= 0x3e0;
        break;
    case 0xe:
        bits |= 0x7e2;
        break;
    case 0x11:
        bits |= 0x1e2;
        bits |= 0x200;
        break;
    case 0x12:
        bits |= 0x1c0;
        break;
    case 0x15:
        bits |= 0x20;
        bits |= 0x200;
        break;
    default:
        bits |= 1 << event;
        break;
    }
    *mask = bits;
}

} /* extern "C" */
