/* AsdSDK/Source/Gfx/Effect/effParticle: effect particle parameter blocks. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTICLE_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTICLE_H

#include "common.h"

/* The block a particle parameter block takes its array size from. */
typedef struct EffParticleSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 count;
} EffParticleSource;

/* A particle parameter block. `type` selects which of the pointer fields below are in use; the
 * arrays hold one handle per particle (`count`, or the count of `source` when it is set). */
typedef struct EffParticleParam {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u16 type;
    /* 0x0E */ u8 unk0e[0x26];
    /* 0x34 */ void **handles34;   /* type 5: handle array (alias of buffer38) */
    /* 0x38 */ void *buffer38;     /* allocation holding handles34 */
    /* 0x3C */ void **handles3c;   /* type 6: handle array (alias of buffer40) */
    /* 0x40 */ void *buffer40;     /* allocation holding handles3c */
    /* 0x44 */ void *object44;
    /* 0x48 */ void *object48;
    /* 0x4C */ EffParticleSource *source; /* when set, its count sizes the arrays */
    /* 0x50 */ u8 unk50[4];
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 unk58;
} EffParticleParam;

#endif
