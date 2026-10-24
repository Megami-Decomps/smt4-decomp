#include "common.h"

struct DecoderOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ void *decoder;
};

extern "C" {

extern u8 _ZTV9Obj557f50[];

void mwmoimaadpcmDecoderRelease(void *decoder);

/* Destructor: installs its vtable, releases the ADPCM decoder and returns the object. */
DecoderOwner *_ZN9Obj557f50D1Ev(DecoderOwner *self)
{
    self->vtable = _ZTV9Obj557f50 + 8;
    mwmoimaadpcmDecoderRelease(self->decoder);
    return self;
}

} /* extern "C" */
