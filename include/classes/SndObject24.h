#ifndef CLASSES_SND_OBJECT24_H
#define CLASSES_SND_OBJECT24_H

#include "common.h"

/* Parameter block at +0x24 of the sound objects whose accessors swap a field and return the old value. */
struct SndObject24Params {
    u8 unk00[0x10];
    u16 value;
    u8 unk12[2];
    s8 byteValue;
};

struct SndObject24 {
    u8 unk00[0x24];
    SndObject24Params params;
};

#endif
