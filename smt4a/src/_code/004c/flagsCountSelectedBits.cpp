#include "common.h"

extern "C" u32 flagsCountSelectedBits(u32 flags)
{
    u16 count = 0;
    if (flags & 2) {
        ++count;
    }
    if (flags & 0x20) {
        ++count;
    }
    if (flags & 0x40) {
        ++count;
    }
    if (flags & 0x80) {
        ++count;
    }
    if (flags & 0x100) {
        ++count;
    }
    if (flags & 0x200) {
        ++count;
    }
    if (flags & 0x400) {
        ++count;
    }
    if (flags & 8) {
        ++count;
    }
    if (flags & 0x800) {
        ++count;
    }
    if (flags & 0x1000) {
        ++count;
    }
    if (flags & 0x2000) {
        ++count;
    }
    return count;
}
