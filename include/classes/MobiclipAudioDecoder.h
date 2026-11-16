#ifndef CLASSES_MOBICLIPAUDIODECODER_H
#define CLASSES_MOBICLIPAUDIODECODER_H

#include "common.h"

/* The interface the movie player's audio decoders share (Apocalypse): a two-word object whose
 * vtable starts with the destructor pair and the setup method in slot 2. */
class MobiclipAudioDecoder {
public:
    virtual ~MobiclipAudioDecoder() {}
    virtual void initialize(u32 first, u32 second) = 0;   /* +0x08 */
};

/* The decoder of kind 4 (vtable at 0x557f2c, named after it until its real name is known). */
class Obj557f2c : public MobiclipAudioDecoder {
public:
    Obj557f2c() : unk04(0) {}
    virtual ~Obj557f2c();
    virtual void initialize(u32 first, u32 second);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
};

/* The IMA-ADPCM decoder of kind 1 (vtable at 0x557f50, named after it until its real name is
 * known); its destructor releases the ADPCM decoder. */
class Obj557f50 : public MobiclipAudioDecoder {
public:
    Obj557f50() : decoder(NULL) {}
    virtual ~Obj557f50();
    virtual void initialize(u32 first, u32 second);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *decoder;
};

#endif
