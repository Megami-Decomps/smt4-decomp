#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 first;
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ u32 second;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ u32 third;
} Source;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Source *source;
} Holder;

/* Copies the three words at 0x58, 0x68 and 0x78 of the object's source into `out`. */
void FUN_001844f8(Holder *object, u32 unused, u32 *out)
{
    Source *source;

    source = object->source;
    out[0] = source->first;
    out[1] = source->second;
    out[2] = source->third;
}

} /* extern "C" */
