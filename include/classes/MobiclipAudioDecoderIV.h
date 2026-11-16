#ifndef CLASSES_MOBICLIPAUDIODECODERIV_H
#define CLASSES_MOBICLIPAUDIODECODERIV_H

#include "common.h"
#include "classes/MobiclipAudioDecoder.h"

/* IV's audio decoders: the same three kinds as Apocalypse's Obj557fa8/Obj557f50/Obj557f2c, named
 * after their vtables until their real names are known. */

/* The decoder of kind 0 (vtable at 0x420afc): holds a handle object at +4. */
class Obj420afc : public MobiclipAudioDecoder {
public:
    Obj420afc() : handle(NULL) {}
    virtual ~Obj420afc();
    virtual void initialize(u32 first, u32 second);   /* +0x08 */

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *handle;
};

/* The IMA-ADPCM decoder of kind 1 (vtable at 0x420aa4). */
class Obj420aa4 : public MobiclipAudioDecoder {
public:
    Obj420aa4() : decoder(NULL) {}
    virtual ~Obj420aa4();
    virtual void initialize(u32 first, u32 second);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *decoder;
};

/* The decoder of kind 4 (vtable at 0x420a80). */
class Obj420a80 : public MobiclipAudioDecoder {
public:
    Obj420a80() : unk04(0) {}
    virtual ~Obj420a80();
    virtual void initialize(u32 first, u32 second);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
};

#endif
