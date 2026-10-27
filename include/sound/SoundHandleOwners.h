/* Sound handle holders destroyed through __aeabi_vec_dtor: a handle that detaches its sound when
 * destroyed, and non-virtual owners that embed arrays of handles behind a 0x20-byte heap base. */
#ifndef SOUND_SOUNDHANDLEOWNERS_H
#define SOUND_SOUNDHANDLEOWNERS_H

#include "common.h"

/* A sound handle: destroying it detaches the sound. */
class SoundHandle {
public:
    ~SoundHandle();

    /* 0x00 */ u32 value;
};

/* The base of a sound object that owns a frame heap (destroyed by _ZN13SoundHeapBaseD1Ev). */
class SoundHeapBase {
public:
    ~SoundHeapBase();

    /* 0x00 */ u8 unk00[0x20];
};

/* A 0x3c-byte sound object holding four handles. */
class SoundObj3c : public SoundHeapBase {
public:
    ~SoundObj3c();

    /* 0x20 */ SoundHandle handles[4];
    /* 0x30 */ u8 unk30[0xc];
};

/* A 0x50-byte sound object holding eight handles. */
class SoundObj50 : public SoundHeapBase {
public:
    ~SoundObj50();

    /* 0x20 */ SoundHandle handles[8];
    /* 0x40 */ u8 unk40[0x10];
};

/* A 0x70-byte sound object holding sixteen handles. */
class SoundObj70 : public SoundHeapBase {
public:
    ~SoundObj70();

    /* 0x20 */ SoundHandle handles[16];
    /* 0x60 */ u8 unk60[0x10];
};

#endif
