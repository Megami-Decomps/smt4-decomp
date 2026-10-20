#include "common.h"

extern "C" {

void unitStateClearEventBits(u16 *flags)
{
    if (*flags & 0x40) {
        *flags &= ~0x40;
    }
    if (*flags & 0x80) {
        *flags &= ~0x80;
    }
    if (*flags & 0x100) {
        *flags &= ~0x100;
    }
    if (*flags & 0x10) {
        *flags &= ~0x10;
    }
    if (*flags & 8) {
        *flags &= ~8;
    }
}

} /* extern "C" */
