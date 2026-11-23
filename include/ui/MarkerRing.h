#ifndef UI_MARKERRING_H
#define UI_MARKERRING_H

#include "common.h"
#include <stddef.h>

/* The panel's rotating marker ring, which shares its prefix with the dimmer. */
struct MarkerRing {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 image;
    /* 0x10 */ s32 phase;
    /* 0x14 */ s32 slot;
};
typedef char MarkerRingSizeCheck[sizeof(MarkerRing) == 0x18 && offsetof(MarkerRing, slot) == 0x14 ? 1 : -1];

extern "C" void uiDrawMarkerRing(MarkerRing *ring);

#endif
