#include "common.h"

extern "C" {

/* Clears the bits 0x40, 0x80, 0x100, 0x10, 0x8, 0x800, 0x1000 and 0x2000 of a 16-bit flag word. */
void flagsClearActionBits(u16 *field)
{
    if (*field & 0x40) {
        *field &= ~0x40;
    }
    if (*field & 0x80) {
        *field &= ~0x80;
    }
    if (*field & 0x100) {
        *field &= ~0x100;
    }
    if (*field & 0x10) {
        *field &= ~0x10;
    }
    if (*field & 0x8) {
        *field &= ~0x8;
    }
    if (*field & 0x800) {
        *field &= ~0x800;
    }
    if (*field & 0x1000) {
        *field &= ~0x1000;
    }
    if (*field & 0x2000) {
        *field &= ~0x2000;
    }
}

}
