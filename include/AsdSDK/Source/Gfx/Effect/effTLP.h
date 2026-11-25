/* AsdSDK/Source/Gfx/Effect/effTLP.c: TLP effect data. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFTLP_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFTLP_H

#include "common.h"
#include <stddef.h>

/* One record of the TLP file: a header word pair followed by the size of its data block. */
typedef struct TlpEntry {
    /* 0x00 */ u32 length;   /* counted (plus one) into TlpObject.totalLength */
    /* 0x04 */ u32 size;     /* bytes of the entry's data block in the file */
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
} TlpEntry;

/* TLP file layout: this header, `count` TlpEntry records, then the data blocks. */
typedef struct TlpFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ TlpEntry entry[1];
} TlpFile;

struct TlpObject;

/* The ownership record of a loaded effect. */
struct TlpLifetime {
    explicit TlpLifetime(TlpObject *owner) : refCount(0), unk04(-1), self(owner) {}

    /* 0x00 */ s32 refCount;
    /* 0x04 */ s32 unk04;           /* -1 */
    /* 0x08 */ TlpObject *self;
};

/* A loaded TLP: a copy of the file header, the entries and one effect object per entry. */
typedef struct TlpObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ TlpEntry *entries;
    /* 0x14 */ void **objects;      /* one per entry */
    /* 0x18 */ u32 totalLength;     /* sum of (entry length + 1) */
    /* 0x1C */ TlpLifetime lifetime;
    /* 0x28 */ u8 payload[1];       /* entries, then the object pointers */
} TlpObject;

typedef char TlpLifetimeLayoutCheck[sizeof(TlpLifetime) == 0x0C &&
    offsetof(TlpObject, lifetime) == 0x1C && offsetof(TlpObject, payload) == 0x28 ? 1 : -1];

#endif
