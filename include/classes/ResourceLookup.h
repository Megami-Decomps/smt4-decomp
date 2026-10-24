#ifndef CLASSES_RESOURCELOOKUP_H
#define CLASSES_RESOURCELOOKUP_H

#include "common.h"

/* The part of the resource lookup object the id resolver reads. */
struct ResourceLookup {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 first[0xc];
    /* 0x10 */ u8 second[8];
    /* 0x18 */ u8 third[0x64];
    /* 0x7c */ u32 unk7c;
    /* 0x80 */ u32 count;
    /* 0x84 */ u8 entries[1];
};

#endif
